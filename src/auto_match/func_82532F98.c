typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Matrix_82532F98 {
    __vector4 rows[4];
} Matrix_82532F98;

typedef struct Buffer_82532F98 {
    Matrix_82532F98 *data;   /* 0x00 */
    Matrix_82532F98 *mapped; /* 0x04 */
    unsigned short count;    /* 0x08 */
} Buffer_82532F98;

void __dcbf(int offset, void const *base);

extern void fn_82630B08(void *ctx, void *p, int size, int flag);
extern void *lbl_8320A898;

void fn_82532F98(Buffer_82532F98 *buffer, const unsigned short *remap)
{
    int count = buffer->count;
    int i;
    int q;

    for (i = 0; i < count; i++) {
        if (remap[i] != 0xffff) {
            Matrix_82532F98 *src = &buffer->mapped[i];
            Matrix_82532F98 *dst = &buffer->data[remap[i]];

            dst->rows[0] = src->rows[0];
            dst->rows[1] = src->rows[1];
            dst->rows[2] = src->rows[2];
            dst->rows[3] = src->rows[3];
        }
    }
    for (q = (int)buffer->mapped & ~0x80; q < (int)(buffer->mapped + count); q += 0x80) {
        __dcbf(0, (void *)q);
    }
    for (q = (int)buffer->data & ~0x80; q < (int)(buffer->data + count); q += 0x80) {
        __dcbf(0, (void *)q);
    }
    fn_82630B08(lbl_8320A898, buffer->mapped, buffer->count * 0x40, 0);
    fn_82630B08(lbl_8320A898, buffer->data, buffer->count * 0x40, 0);
}
