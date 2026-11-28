typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

void __dcbf(int offset, void const *base);

typedef struct Matrix_822A81D0 {
    __vector4 rows[4];
} Matrix_822A81D0;

typedef struct Pose_822A81D0 {
    Matrix_822A81D0 *current;  /* 0x00 */
    Matrix_822A81D0 *previous; /* 0x04 */
    unsigned short count;      /* 0x08 */
} Pose_822A81D0;

typedef struct Remap_822A81D0 Remap_822A81D0;

typedef struct RemapVtable_822A81D0 {
    void *pad[6];
    void (*Reset)(Remap_822A81D0 *self); /* 0x18 */
} RemapVtable_822A81D0;

struct Remap_822A81D0 {
    RemapVtable_822A81D0 *vt;
};

typedef struct Model_822A81D0 Model_822A81D0;

typedef struct ModelVtable_822A81D0 {
    void *pad[0x29];
    Pose_822A81D0 *(*GetPose)(Model_822A81D0 *self, int part, int lod); /* 0xa4 */
    unsigned int *(*GetBoneIds)(Model_822A81D0 *self, int part);        /* 0xa8 */
    int (*IsMirrored)(Model_822A81D0 *self);                            /* 0xac */
} ModelVtable_822A81D0;

struct Model_822A81D0 {
    ModelVtable_822A81D0 *vt; /* 0x000 */
    char pad004[0x80 - 4];
    Pose_822A81D0 *poses[4]; /* 0x080 */
    char pad090[0x1b4 - 0x90];
    Remap_822A81D0 *remap; /* 0x1b4 */
};

typedef struct MixParams_822A81D0 {
    unsigned int tag; /* 0x00 */
    float weight;     /* 0x04 */
    float start;      /* 0x08 */
    int flagsIn;      /* 0x0c */
    float blendIn;    /* 0x10 */
    float offset;     /* 0x14 */
    int unk18;        /* 0x18 */
    int flagsOut;     /* 0x1c */
    float blendOut;   /* 0x20 */
    int unk24;        /* 0x24 */
    int unk28;        /* 0x28 */
    int unk2c;        /* 0x2c */
    int unk30;        /* 0x30 */
    int unk34;        /* 0x34 */
    int unk38[4];
} MixParams_822A81D0;

typedef struct Avatar_822A81D0 {
    char pad000[0x550];
    Model_822A81D0 *model; /* 0x550 */
    char pad554[0x5cc - 0x554];
    void *animation; /* 0x5cc */
    void *mixer;     /* 0x5d0 */
    int part;        /* 0x5d4 */
} Avatar_822A81D0;

extern Matrix_822A81D0 lbl_8329EAD0;
extern unsigned int lbl_831CE7C0[5];
extern const unsigned short lbl_82190260[];
extern void *lbl_8320A898;

extern void fn_82520158(const char *name, void **handle, int flags);
extern void fn_82554860(void *mixer, int a, void **handle, MixParams_822A81D0 *params);
extern void fn_827EF828(void *animation, float time);
extern void fn_827EFFE8(void *animation);
extern float *fn_827EFAE8(void *animation, unsigned short index);
extern void fn_827F0180(void *animation, Matrix_822A81D0 *dst, int b, void *c, void *d);
extern void fn_82532F98(Pose_822A81D0 *pose, const unsigned short *remap);
extern void fn_82A1DBD8(void *dst, const void *src, int size);
extern void fn_82630B08(void *device, void *p, int size, int flags);

static __forceinline void CopyMatrix(Matrix_822A81D0 *dst, const Matrix_822A81D0 *src)
{
    dst->rows[0] = src->rows[0];
    dst->rows[1] = src->rows[1];
    dst->rows[2] = src->rows[2];
    dst->rows[3] = src->rows[3];
}

static __forceinline void Flush(void *p, int size)
{
    int q;

    for (q = (int)p & ~0x80; q < size + (int)p; q += 0x80) {
        __dcbf(0, (void *)q);
    }
    fn_82630B08(lbl_8320A898, p, size, 0);
}

void fn_822A81D0(Avatar_822A81D0 *self)
{
    void *handle;
    MixParams_822A81D0 params;
    unsigned int *ids;
    Pose_822A81D0 *pose;
    Pose_822A81D0 *other;
    Matrix_822A81D0 *current;
    Matrix_822A81D0 *previous;
    Matrix_822A81D0 *dstCurrent;
    Matrix_822A81D0 *dstPrevious;
    Remap_822A81D0 *remap;
    unsigned int count;
    int size;
    unsigned int i;
    int j;

    if (self->animation != 0 && self->mixer != 0) {
        fn_82520158("AvatarIdleAnim", &handle, 0);
        if (handle != 0) {
            params.weight = 1.0f;
            params.start = 0.0f;
            params.tag = 0x4d697850;
            params.offset = 0.0f;
            params.flagsIn = 0x20;
            params.unk18 = 0;
            params.blendIn = 0.2f;
            params.flagsOut = 0x40;
            params.blendOut = 0.2f;
            params.unk24 = 0;
            params.unk30 = 0;
            params.unk34 = 0;
            params.unk28 = 0;
            params.unk2c = 0;
            fn_82554860(self->mixer, 0, &handle, &params);
            fn_827EF828(self->animation, 0.0f);
            fn_827EFFE8(self->animation);
            ids = self->model->vt->GetBoneIds(self->model, self->part);
            if (ids != 0) {
                for (i = 0; i < 5; i++) {
                    ids[i] =
                        (unsigned int)(*fn_827EFAE8(self->animation, (unsigned short)lbl_831CE7C0[i]) - 0.5f);
                }
            }
            pose = self->model->vt->GetPose(self->model, self->part, 0);
            if (pose != 0) {
                current = pose->current;
                previous = pose->previous;
                count = pose->count;
                if (self->model->vt->IsMirrored(self->model) == 0) {
                    fn_827F0180(self->animation, current, 1, 0, 0);
                } else {
                    fn_827F0180(self->animation, previous, 1, 0, 0);
                    remap = self->model->remap;
                    remap->vt->Reset(remap);
                    fn_82532F98(pose, lbl_82190260);
                }
                for (i = 1; i < 4; i++) {
                    other = self->model->vt->GetPose(self->model, self->part, i);
                    if (other != 0) {
                        dstCurrent = other->current;
                        dstPrevious = other->previous;
                        if (dstCurrent != 0 && current != 0) {
                            size = count * 0x40;
                            fn_82A1DBD8(dstCurrent, current, size);
                            Flush(dstCurrent, size);
                        }
                        if (dstPrevious != 0 && previous != 0) {
                            size = count * 0x40;
                            fn_82A1DBD8(dstPrevious, previous, size);
                            Flush(dstPrevious, size);
                        }
                    }
                }
            }
        }
    } else {
        for (i = 0; i < 4; i++) {
            pose = self->model->poses[i];
            count = pose->count;
            current = pose->current;
            previous = pose->previous;
            for (j = 0; j < (int)count; j++) {
                CopyMatrix(&current[j], &lbl_8329EAD0);
                if (previous != 0) {
                    CopyMatrix(&previous[j], &lbl_8329EAD0);
                }
            }
            size = count * 0x40;
            Flush(current, size);
            if (previous != 0) {
                Flush(previous, size);
            }
        }
    }
}
