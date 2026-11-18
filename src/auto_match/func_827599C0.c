typedef struct Matrix_827599C0 {
    float m[6];
} Matrix_827599C0;

typedef struct Fill_827599C0 {
    unsigned char type; /* 0x00 */
    unsigned char pad01[3];
    void *object; /* 0x04 */
    unsigned char pad08[8];
    Matrix_827599C0 matrix; /* 0x10 */
} Fill_827599C0;

extern void fn_827594F8(Fill_827599C0 *fill, unsigned char type);
extern void fn_8267C4C8(void *object);

static __forceinline void CopyMatrix(Matrix_827599C0 *dst, const Matrix_827599C0 *src)
{
    dst->m[0] = src->m[0];
    dst->m[1] = src->m[1];
    dst->m[2] = src->m[2];
    dst->m[3] = src->m[3];
    dst->m[4] = src->m[4];
    dst->m[5] = src->m[5];
}

/* Sets the fill's object and matrix; the translation is converted from pixels to twips. */
void fn_827599C0(Fill_827599C0 *fill, unsigned char type, void *object, const Matrix_827599C0 *matrix)
{
    if ((fill->type & 0x10) == 0 || object != fill->object) {
        fn_827594F8(fill, type);
        fill->object = object;
        if (object != 0) {
            fn_8267C4C8(object);
        }
    }
    CopyMatrix(&fill->matrix, matrix);
    fill->matrix.m[2] *= 20.0f;
    fill->matrix.m[5] *= 20.0f;
}
