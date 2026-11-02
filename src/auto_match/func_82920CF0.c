typedef struct {
    char pad0[4];
    int f4;
    char pad1[4];
    int fc;
    int f10;
    char pad2[4];
    int f18;
    int f1c;
    unsigned f20;
    char pad3[0x14];
    unsigned char *f38;
    char pad4[0x20];
    unsigned f5c_unused;
    unsigned f60;
    unsigned f64;
    unsigned f68, f6c, f70, f74;
} S_82920CF0;
extern int fn_829206C8(S_82920CF0 **p);
extern void *memcpy(void *, const void *, unsigned);
extern int memcmp(const void *, const void *, unsigned);

int fn_82920CF0(S_82920CF0 **p)
{
    S_82920CF0 *b = p[1];
    S_82920CF0 *a = p[0];
    if ((((a->f4 ^ b->f4) & 0xfffffe3f) == 0) && a->f18 == 0 && b->f68 == a->f68 && b->f6c == a->f6c && b->f70 == a->f70 && b->f10 == a->f10) {
        unsigned y, i;
        if (b->fc == 0)
            return fn_829206C8(p);
        if (b->f1c != 0 && b->f38 != a->f38 && memcmp(b->f38, a->f38, 0x400) != 0)
            return 0x80004005;
        b->f10 = 0;
        y = 0;
        p[0]->f10 = 0;
        b = p[1];
        if (b->f70 > 0) {
            a = p[0];
            do {
                unsigned char *dst = (unsigned char *)(p[1]->f64 * y + p[1]->f20);
                unsigned char *src = (unsigned char *)(a->f64 * y + a->f20);
                i = 0;
                if (b->f6c != 0) {
                    do {
                        memcpy(dst, src, b->f74);
                        b = p[1];
                        a = p[0];
                        dst += b->f60;
                        src += a->f60;
                        i++;
                    } while (i < b->f6c);
                }
                y++;
            } while (y < b->f70);
        }
        return 0;
    }
    return 0x80004005;
}
