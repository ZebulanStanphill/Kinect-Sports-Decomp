typedef struct Src_83021FA0 {
    char pad0[0x14];
    float f14;
    float f18;
    int f1c;
    unsigned int mask;
    int pad24;
    void *items;
    unsigned char pad2c;
    unsigned char f2d;
} Src_83021FA0;

typedef struct Out_83021FA0 {
    unsigned char items[0x60];
    float f60;
    float f64;
    int f68;
    unsigned char f6c;
} Out_83021FA0;

extern void fn_82A1EFC0(void *dst, int value, unsigned int size);
extern void fn_82A1DDC0(void *dst, const void *src, unsigned int n);

void fn_83021FA0(Src_83021FA0 *self, Out_83021FA0 *out)
{
    int count;
    unsigned int m;

    fn_82A1EFC0(out, 0, 0x60);
    count = 0;
    for (m = self->mask; m != 0; m = (m - 1) & m) {
        count++;
    }
    fn_82A1DDC0(out, self->items, count * 16);
    out->f60 = self->f14;
    out->f64 = self->f18;
    out->f68 = self->f1c;
    out->f6c = self->f2d;
}
