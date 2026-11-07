typedef struct Obj_83008B48 {
    char pad0[0xc];
    int f0c;
    char pad10[0x32 - 0x10];
    unsigned short f32;
    char pad34[0x3d - 0x34];
    unsigned char f3d;
    char pad3e[0x9c - 0x3e];
    unsigned short f9c;
    unsigned short f9e;
} Obj_83008B48;

extern float lbl_8217BB40;
extern int fn_82FF2D40(float f, int a, int b, unsigned int c, int *out);

void fn_83008B48(Obj_83008B48 *p, unsigned short count, unsigned int param_3, int param_4,
                 unsigned char param_5)
{
    unsigned short i;
    unsigned short n;
    unsigned short avail;
    int m;

    if (param_3 != 0)
        return;
    if (param_5 != 0 && p->f32 == 0)
        return;
    if (count != 0 && p->f9c > count) {
        avail = p->f9c - count;
        m = p->f9e - count;
        if (avail < m)
            m = avail;
        n = (unsigned short)m;
        if (n != 0) {
            float f = lbl_8217BB40;
            i = 0;
            do {
                int out = 0;
                fn_82FF2D40(f, 0, p->f0c, p->f3d >> 7, &out);
                i++;
            } while (i < n);
        }
    }
    p->f9e = count;
    if (param_5 == 0)
        p->f32 = count;
}
