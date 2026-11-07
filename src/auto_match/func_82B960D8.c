typedef struct S_82B960D8 {
    char pad0[0x10];
    int convert;          /* 0x10 */
    char pad14[0xc];
    char *data;           /* 0x20 */
    char pad24[0x3c];
    int strideX;          /* 0x60 */
    int strideY;          /* 0x64 */
    unsigned int count;   /* 0x68 */
} S_82B960D8;

extern float *fn_82B8FDD0(S_82B960D8 *s, float *src);

void fn_82B960D8(S_82B960D8 *s, int x, int y, float *src)
{
    float *dst;
    unsigned int i;

    if (s->convert != 0) {
        src = fn_82B8FDD0(s, src);
    }
    dst = (float *)(s->data + s->strideX * x + s->strideY * y);
    for (i = 0; i < s->count; i++) {
        *dst++ = src[i * 4];
    }
}
