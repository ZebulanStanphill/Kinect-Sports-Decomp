extern int fn_826405E0(int a1, int a2, int a3, int a4, int a5, int a6, int a7,
                       int a8, int a9);
extern int fn_82677F48(int a1, int a2);
extern int fn_82678428(int a1, int a2);

#define F_I(p, o) (*(int *)((p) + (o)))
#define F_U(p, o) (*(unsigned int *)((p) + (o)))

static __forceinline void addTo_82678668(int *p, int v)
{
    *p += v;
}

void fn_82678668(int param_1, int param_2, int param_3, int param_4, int param_5,
                 int param_6)
{
    int stride;
    int bpp;
    int off;

    if (*(unsigned char *)(param_1 + 0x10) != 0 && F_U(param_1, 0x1bc) != 0 &&
        F_U(param_1, 0x1c0) != 0 && F_I(param_1, 0x1c8) != -1) {
        stride = 4;
        if (F_I(param_1, 0x2220) == 3) {
            if (F_I(param_1, 0x1c4) == 3) {
                stride = 8;
            } else if (F_I(param_1, 0x1c4) == 4) {
                stride = 0xc;
            }
        } else {
            stride = 4;
        }
        fn_82677F48(param_1 + 0x2220, param_1);
        fn_82678428(param_1, param_1 + 0x11c);
        bpp = (F_I(param_1, 0x1c8) == 1) ? 2 : 4;
        off = bpp * param_5 + F_U(param_1, 0x1c0);
        addTo_82678668((int *)(param_1 + 0x178), param_6);
        addTo_82678668((int *)(param_1 + 0x1b4), param_6);
        while (param_6 > 0x5555) {
            fn_826405E0(F_I(param_1, 0xd8), 4, param_3, param_4, 0xffff, off,
                        F_I(param_1, 0x1c8), stride * param_2 + F_U(param_1, 0x1bc),
                        stride);
            param_6 -= 0x5555;
            off += bpp * 0xffff;
            addTo_82678668((int *)(param_1 + 0x180), 1);
            addTo_82678668((int *)(param_1 + 0x1ac), 1);
        }
        if (param_6 > 0) {
            fn_826405E0(F_I(param_1, 0xd8), 4, param_3, param_4, param_6 * 3, off,
                        F_I(param_1, 0x1c8), stride * param_2 + F_U(param_1, 0x1bc),
                        stride);
            addTo_82678668((int *)(param_1 + 0x180), 1);
            addTo_82678668((int *)(param_1 + 0x1ac), 1);
        }
    }
}
