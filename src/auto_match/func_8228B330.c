typedef struct MixParams_8228B330 {
    unsigned int tag; /* 0x00 */
    float volume;     /* 0x04 */
    float pan;        /* 0x08 */
    int priority;     /* 0x0c */
    float fadeIn;     /* 0x10 */
    float delay;      /* 0x14 */
    int looped;       /* 0x18 */
    int group;        /* 0x1c */
    float fadeOut;    /* 0x20 */
    int reserved[5];  /* 0x24 */
} MixParams_8228B330;

typedef struct AnimHandle_8228B330 {
    void *data; /* 0x00 */
    int pad[3];
} AnimHandle_8228B330;

typedef struct MorphBuffer_8228B330 {
    char *positions;      /* 0x00 */
    char *normals;        /* 0x04 */
    unsigned short count; /* 0x08 */
} MorphBuffer_8228B330;

typedef struct Renderer_8228B330 Renderer_8228B330;

typedef struct RendererVtbl_8228B330 {
    void *slots[6];
    void (*Refresh)(Renderer_8228B330 *self); /* 0x18 */
} RendererVtbl_8228B330;

struct Renderer_8228B330 {
    RendererVtbl_8228B330 *vtable;
};

typedef struct Avatar_8228B330 Avatar_8228B330;

typedef struct AvatarVtbl_8228B330 {
    void *slots[0x29];
    MorphBuffer_8228B330 *(*GetMorphBuffer)(Avatar_8228B330 *self, int id, int lod); /* 0xa4 */
    unsigned int *(*GetBlendWeights)(Avatar_8228B330 *self, int id);                 /* 0xa8 */
    int (*UsesNormals)(Avatar_8228B330 *self);                                       /* 0xac */
} AvatarVtbl_8228B330;

struct Avatar_8228B330 {
    AvatarVtbl_8228B330 *vtable; /* 0x00 */
    char pad4[0x1b4 - 4];
    Renderer_8228B330 *renderer; /* 0x1b4 */
};

typedef struct Owner_8228B330 {
    char pad0[0xb4];
    Avatar_8228B330 *avatar; /* 0xb4 */
} Owner_8228B330;

typedef struct Slot_8228B330 {
    Owner_8228B330 *owner; /* 0x00 */
    void *animation;       /* 0x04 */
    void *target;          /* 0x08 */
    int id;                /* 0x0c */
    int pad[2];
} Slot_8228B330;

typedef struct Manager_8228B330 {
    void *root; /* 0x00 */
    char pad4[0x61c - 4];
    Slot_8228B330 slots[1]; /* 0x61c */
} Manager_8228B330;

void __dcbf(int offset, void const *base);

extern int lbl_831CEED0[];
extern const unsigned short lbl_82190260[];
extern void *lbl_8320A898;

extern void fn_82520158(const char *name, AnimHandle_8228B330 *out, int flags);
extern int fn_8252D2F8(void *mixer, int kind, MixParams_8228B330 *params, void *target);
extern void fn_8252D370(void *mixer);
extern void fn_8252D6E0(void *mixer, void *root);
extern void fn_82554860(void *self, int kind, AnimHandle_8228B330 *source, MixParams_8228B330 *params);
extern void fn_827EF828(void *animation, float time);
extern void fn_827EFFE8(void *animation);
extern int *fn_827EFAE8(void *animation, unsigned short index);
extern void fn_827F0180(void *animation, void *dst, int flag, void *dst2, void *dst3);
extern void fn_82532F98(MorphBuffer_8228B330 *buffer, const unsigned short *remap);
extern void fn_82A1DBD8(void *dst, void *src, int size);
extern void fn_82630B08(void *ctx, void *p, int size, int flag);

static __forceinline void InitMixParams(MixParams_8228B330 *params)
{
    params->volume = 1.0f;
    params->pan = 0.0f;
    params->tag = 0x4d697850;
    params->delay = 0.0f;
    params->priority = 0x20;
    params->fadeIn = 0.2f;
    params->looped = 0;
    params->group = 0x40;
    params->fadeOut = 0.2f;
    params->reserved[0] = 0;
    params->reserved[3] = 0;
    params->reserved[4] = 0;
    params->reserved[1] = 0;
    params->reserved[2] = 0;
}

void fn_8228B330(Manager_8228B330 *self, int index, void *mixer)
{
    Avatar_8228B330 *avatar = self->slots[index].owner->avatar;
    AnimHandle_8228B330 anim;
    MixParams_8228B330 params;

    fn_82520158("AvatarIdleAnim", &anim, 0);
    if (self->slots[index].animation != 0 && self->slots[index].target != 0) {
        if (anim.data != 0) {
            unsigned int *weights;
            MorphBuffer_8228B330 *buffer;

            InitMixParams(&params);
            fn_82554860(self->slots[index].target, 0, &anim, &params);
            fn_827EF828(self->slots[index].animation, 0.0f);
            fn_827EFFE8(self->slots[index].animation);
            weights = avatar->vtable->GetBlendWeights(avatar, self->slots[index].id);
            if (weights != 0) {
                int i;

                for (i = 0; i < 5; i++) {
                    weights[i] = (unsigned int)(*(float *)fn_827EFAE8(self->slots[index].animation,
                                                                      (unsigned short)lbl_831CEED0[i]) -
                                                0.5f);
                }
            }
            buffer = avatar->vtable->GetMorphBuffer(avatar, self->slots[index].id, 0);
            if (buffer != 0) {
                char *positions = buffer->positions;
                char *normals = buffer->normals;
                unsigned int count = buffer->count;
                unsigned int lod;

                if (avatar->vtable->UsesNormals(avatar) == 0) {
                    fn_827F0180(self->slots[index].animation, positions, 1, 0, 0);
                } else {
                    fn_827F0180(self->slots[index].animation, normals, 1, 0, 0);
                    avatar->renderer->vtable->Refresh(avatar->renderer);
                    fn_82532F98(buffer, lbl_82190260);
                }
                for (lod = 1; lod < 4; lod++) {
                    MorphBuffer_8228B330 *other =
                        avatar->vtable->GetMorphBuffer(avatar, self->slots[index].id, lod);

                    if (other != 0) {
                        char *a = other->positions;
                        char *b = other->normals;

                        if (a != 0 && positions != 0) {
                            int size = count * 0x40;
                            int q;

                            fn_82A1DBD8(a, positions, size);
                            for (q = (int)a & ~0x80; q < size + (int)a; q += 0x80) {
                                __dcbf(0, (void *)q);
                            }
                            fn_82630B08(lbl_8320A898, a, size, 0);
                        }
                        if (b != 0 && normals != 0) {
                            int size = count * 0x40;
                            int q;

                            fn_82A1DBD8(b, normals, size);
                            for (q = (int)b & ~0x80; q < size + (int)b; q += 0x80) {
                                __dcbf(0, (void *)q);
                            }
                            fn_82630B08(lbl_8320A898, b, size, 0);
                        }
                    }
                }
            }
        }
    } else {
        InitMixParams(&params);
        fn_8252D2F8(mixer, 0, &params, &anim);
        fn_8252D370(mixer);
        fn_8252D6E0(mixer, self->root);
    }
}
