typedef struct Matrix_828523A8 {
    float m[16];
} Matrix_828523A8;

typedef struct Camera_828523A8 {
    char pad0[0x40];
    Matrix_828523A8 view;           /* 0x40 */
    Matrix_828523A8 projection;     /* 0x80 */
    Matrix_828523A8 viewProjection; /* 0xc0 */
} Camera_828523A8;

typedef struct Batch_828523A8 {
    Matrix_828523A8 world;      /* 0x00 */
    Matrix_828523A8 local;      /* 0x40 */
    Matrix_828523A8 savedWorld; /* 0x80 */
    Matrix_828523A8 *palette;   /* 0xc0 */
    char padC4[0xc];
} Batch_828523A8;

typedef struct Node_82852720 {
    char data[0x34];
} Node_82852720;

typedef struct Bone_82855FC0 {
    unsigned short index;
    unsigned short pad2;
    int pad4;
} Bone_82855FC0;

typedef struct Mesh_82852720 {
    int pad0;
    int index; /* 0x04 */
} Mesh_82852720;

typedef struct Renderer_828523A8 {
    Camera_828523A8 *camera; /* 0x00 */
    void *device;            /* 0x04 */
    char pad8[0x60];
    Matrix_828523A8 *matrices; /* 0x68 */
    Node_82852720 *nodes;      /* 0x6c */
    int pad70;
    const Bone_82855FC0 *bones;          /* 0x74 */
    int boneCount;                       /* 0x78 */
    const unsigned char *paletteIndices; /* 0x7c */
    int paletteCount;                    /* 0x80 */
    unsigned int projectionRegister;     /* 0x84 */
    unsigned int worldViewRegister;      /* 0x88 */
    unsigned int worldRegister;          /* 0x8c */
    unsigned int viewRegister;           /* 0x90 */
    int pad94;
    unsigned int paletteRegister; /* 0x98 */
    char pad9C[0x68];
    int paletteSet; /* 0x104 */
    char pad108[0x18];
    unsigned int worldViewProjRegister; /* 0x120 */
    char pad124[0xc];
    Batch_828523A8 batches[0x80]; /* 0x130 */
    unsigned int current;         /* 0x6930 */
} Renderer_828523A8;

extern void fn_826310E0(void *device, unsigned int start, const void *src, unsigned int count,
                        unsigned __int64 mask);
extern void fn_8280CD18(const Matrix_828523A8 *src, Matrix_828523A8 *dst);
extern void fn_8280CC30(const Matrix_828523A8 *a, const Matrix_828523A8 *b, Matrix_828523A8 *out);
extern void fn_8280CB70(const Matrix_828523A8 *a, const Matrix_828523A8 *b, Matrix_828523A8 *out);
extern void fn_82855BE8(Renderer_828523A8 *self, int count, const Bone_82855FC0 *bones);
extern void fn_827F9658(const Node_82852720 *node, const Matrix_828523A8 *m, Matrix_828523A8 *out);

static __forceinline void SetConstants(void *device, unsigned int start, const void *src, unsigned int count)
{
    unsigned int first = start >> 2;
    unsigned int last = (start + count - 1) >> 2;

    fn_826310E0(device, start, src, count,
                (unsigned __int64)((__int64)0x8000000000000000ULL >> (last - first)) >> first);
}

static __forceinline void SetTransforms(Renderer_828523A8 *self, const Matrix_828523A8 *world)
{
    Matrix_828523A8 temp;
    Batch_828523A8 *batch = &self->batches[self->current];
    Matrix_828523A8 *view = &self->camera->view;
    Matrix_828523A8 *projection = &self->camera->projection;

    if (self->worldRegister != 0xffff) {
        fn_8280CD18(world, &temp);
        SetConstants(self->device, self->worldRegister, &temp, 3);
    }
    if (self->projectionRegister != 0xffff) {
        fn_8280CD18(projection, &temp);
        SetConstants(self->device, self->projectionRegister, &temp, 4);
    }
    if (self->worldViewRegister != 0xffff) {
        fn_8280CC30(view, world, &temp);
        SetConstants(self->device, self->worldViewRegister, &temp, 3);
    }
    if (self->worldViewProjRegister != 0xffff) {
        fn_8280CC30(projection, &batch->world, &self->camera->viewProjection);
        SetConstants(self->device, self->worldViewProjRegister, &self->camera->viewProjection, 4);
    }
    if (self->viewRegister != 0xffff) {
        fn_8280CD18(view, &temp);
        SetConstants(self->device, self->viewRegister, &temp, 3);
    }
}

void fn_82852720(Renderer_828523A8 *self, const Mesh_82852720 *mesh)
{
    Batch_828523A8 *batch = &self->batches[self->current];
    Matrix_828523A8 *view = &self->camera->view;

    fn_827F9658(&self->nodes[mesh->index], &self->matrices[mesh->index], &batch->local);
    fn_8280CB70(view, &batch->local, &batch->world);
    SetTransforms(self, &batch->savedWorld);
}
