typedef struct Sub_822B0720 {
    char pad0[0x1e4];
    int f1e4;
} Sub_822B0720;

typedef struct Obj_822B0720 {
    char pad0[0x28];
    unsigned int f28;
    int f2c;
    char pad30[0x110 - 0x30];
    int f110;
    char pad114[0x168 - 0x114];
    void *f168;
    int f16c;
    char pad170[0x1c0 - 0x170];
    Sub_822B0720 *f1c0;
} Obj_822B0720;

extern void fn_822AF138(int a, int b);
extern unsigned int fn_82373530(Sub_822B0720 *s);
extern unsigned char fn_8288B760(void *p);

static __forceinline int getState_822B0720(Obj_822B0720 *o)
{
    int v;
    if (o->f168 != 0) {
        v = fn_8288B760(o->f168);
    } else {
        v = o->f16c;
    }
    return v;
}

int fn_822B0720(void *param_1, Obj_822B0720 *o)
{
    if (o->f1c0 != 0 && o->f2c == o->f1c0->f1e4 &&
        o->f28 == fn_82373530(o->f1c0)) {
        if (getState_822B0720(o) != 0) {
            fn_822AF138(o->f110, 2);
        }
    } else {
        if (getState_822B0720(o) != 0) {
            fn_822AF138(o->f110, 3);
        }
    }
    return 1;
}
