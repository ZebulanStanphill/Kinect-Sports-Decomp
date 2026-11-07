typedef struct { float x, y, z; } Vec3_8281DEF0;

extern void fn_8280FC18(void *a, void *b);
extern void fn_8280EA40(void *a, void *b);
extern void fn_8280E418(void *a, void *b);
extern void fn_8280E7D0(void *a, void *b);
extern void fn_8280FD40(void *a, void *b);
extern float fn_82810280(void *a, void *b);
extern void fn_82810530(void *a, void *b);
extern float lbl_8201DFF8;

void fn_8281DEF0(char *src, char *dst)
{
    int i;
    int delta;
    float limit;
    unsigned char m16[16];
    unsigned char m48a[48];
    unsigned char m48b[48];

    fn_8280FC18(src, m48a);
    fn_8280EA40(m48a, m16);
    fn_8280E418(m16, m16);
    fn_8280E7D0(m16, m48b);
    fn_8280FD40(m48b, dst);
    i = 3;
    delta = src - dst;
    limit = lbl_8201DFF8;
    do {
        if (fn_82810280(dst + delta, dst) < limit) {
            fn_82810530(dst, dst);
        }
        i--;
        dst += sizeof(Vec3_8281DEF0);
    } while (i != 0);
}
