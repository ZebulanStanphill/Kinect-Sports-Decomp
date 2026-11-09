typedef struct {
    char pad0[0x10];
    int convert;          /* 0x10 */
    char pad14[0xc];
    char *data;           /* 0x20 */
    char pad24[0x3c];
    int strideX;          /* 0x60 */
    int strideY;          /* 0x64 */
    unsigned int count;   /* 0x68 */
} S_8292B5A0;

extern float *fn_829252C0(S_8292B5A0 *s, float *src);

void fn_8292B5A0(S_8292B5A0 *s, int x, int y, float *src)
{
    float *dst;
    unsigned int i;

    if (s->convert != 0) {
        src = fn_829252C0(s, src);
    }
    dst = (float *)(s->data + s->strideX * x + s->strideY * y);
    for (i = 0; i < s->count; i++, dst += 2) {
        dst[0] = src[i * 4];
        dst[1] = src[i * 4 + 1];
    }
}
