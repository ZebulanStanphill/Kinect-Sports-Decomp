typedef struct Matrix_82855BE8 {
    float m[16];
} Matrix_82855BE8;

typedef struct Bone_82855BE8 {
    unsigned short index;
    unsigned short pad2;
    int pad4;
} Bone_82855BE8;

typedef struct Batch_82855BE8 {
    Matrix_82855BE8 *matrices;
    char pad4[0xcc];
} Batch_82855BE8;

typedef struct Renderer_82855BE8 {
    char pad0[0x68];
    Matrix_82855BE8 *matrices;          /* 0x68 */
    char pad6C[0x1f0 - 0x6c];
    Batch_82855BE8 batches[0x7f];       /* 0x1f0 */
    char pad6920[0x10];
    int current;                        /* 0x6930 */
    Matrix_82855BE8 *out;               /* 0x6934 */
} Renderer_82855BE8;

extern void fn_8280CD18(const Matrix_82855BE8 *src, Matrix_82855BE8 *dst);

void fn_82855BE8(Renderer_82855BE8 *self, int count, const Bone_82855BE8 *bones)
{
    Batch_82855BE8 *batch = &self->batches[self->current];
    Matrix_82855BE8 *matrices = self->matrices;
    Matrix_82855BE8 *out = self->out;
    int i;

    for (i = 0; i < count; i++) {
        fn_8280CD18(&matrices[bones[i].index], out);
        out++;
    }
    batch->matrices = self->out;
}
