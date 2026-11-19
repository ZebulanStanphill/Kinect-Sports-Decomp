typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Matrix_82532BC0 {
    __vector4 rows[4];
} Matrix_82532BC0;

typedef struct Buffer_82532BC0 {
    Matrix_82532BC0 *data;   /* 0x00 */
    Matrix_82532BC0 *mapped; /* 0x04 */
    unsigned short count;    /* 0x08 */
} Buffer_82532BC0;

extern const Matrix_82532BC0 lbl_8329EAD0;
void __dcbf(int offset, void const *base);

static __forceinline void Store(Matrix_82532BC0 *out, Matrix_82532BC0 m)
{
    out->rows[0] = m.rows[0];
    out->rows[1] = m.rows[1];
    out->rows[2] = m.rows[2];
    out->rows[3] = m.rows[3];
}

void fn_82532BC0(Buffer_82532BC0 *buffer)
{
    Matrix_82532BC0 *matrices = buffer->mapped;
    int i;

    if (matrices == 0) {
        matrices = buffer->data;
    }
    for (i = 0; i < buffer->count; i++) {
        Store(&matrices[i], lbl_8329EAD0);
        __dcbf(0, &matrices[i]);
    }
}
