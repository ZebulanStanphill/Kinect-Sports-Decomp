typedef struct Chan_8282F2B0 {
    unsigned int rawSize;
    void *data;
    int pad8;
    int padC;
    unsigned int size;
} Chan_8282F2B0;

typedef struct Self_8282F2B0 {
    char pad0[0x58];
    Chan_8282F2B0 chans[2];
    char pad80[0x2dc - 0x80];
    unsigned int sizes[2];
    char *src;
} Self_8282F2B0;

extern void *fn_828252D0(unsigned int size);
extern void fn_8282F248(void *src, unsigned int srcSize, void *dst, unsigned int *size);
extern float lbl_8201ED80;

void fn_8282F2B0(Self_8282F2B0 *self)
{
    char *src = self->src;
    float k = lbl_8201ED80;
    int i;

    for (i = 0; i < 2; i++) {
        unsigned int n = self->sizes[i];
        if (n != 0) {
            Chan_8282F2B0 *c = &self->chans[i];
            unsigned int size;
            float a;
            float b;
            c->size = c->rawSize;
            a = (float)c->rawSize * k;
            b = (float)(c->rawSize + 11);
            if (a <= b) {
                a = b;
            }
            size = (unsigned int)a;
            c->data = fn_828252D0(size);
            fn_8282F248(src, c->size, c->data, &size);
            src += n;
            c->size = size;
            self->sizes[i] = size;
        }
    }
}
