typedef struct { float v; } FloatArg;
typedef struct { unsigned char b[0x40]; } Blob;

extern void fn_82631AF0(void *a, int b);
extern void fn_82637AF8(void *a, int b);
extern void fn_826381E0(void *a, int b);
extern void fn_82638FF8(void *a, FloatArg b);
extern void fn_8263AA68(void *a, int b, void *c, int d);
extern void fn_828556B0(void *a);
extern void fn_82857C80(void *o, void *p);
extern void *memcpy(void *d, const void *s, unsigned int n);

typedef struct Sub {
    char pad0[0x1a];
    unsigned short s1a;
    char pad1c[0x2c - 0x1c];
    int f2c;
} Sub;

typedef struct Sub48 {
    char pad[0x38];
    void *p38;
} Sub48;

typedef struct Arg {
    void *p0;
    int pad4;
    int a[2];
    int b[2];
    int pad18;
    int f1c;
    int pad20[2];
    int f28;
    int pad2c[7];
    Sub48 *p48;
} Arg;

typedef struct Info {
    char pad[0xac];
    int fac;
    char padb0[0x138 - 0xb0];
    Sub *p138;
} Info;

typedef struct Obj {
    Blob *p0;
    void *p4;
    char pad8[0x68 - 8];
    int f68;
    int f6c;
    int f70;
    char pad74[0x104 - 0x74];
    int f104;
    int f108;
    int f10c;
    int idx;
    int f114;
    float f118;
    char pad11c[0x120 - 0x11c];
    int f120;
    char pad124[0x1b0 - 0x124];
    Blob buf;
    char pad1f0[0x693c - 0x1f0];
    Arg *arg;
    int f6940;
} Obj;

void fn_82855AB0(Obj *o, Info *info, int unused, Arg *arg)
{
    void *p;
    FloatArg fa;

    o->f108 = arg->f1c;
    o->f10c = arg->a[o->idx];
    o->f114 = arg->b[o->idx];
    if (arg->p0 != 0) {
        fn_82857C80(o, arg->p0);
    }
    o->f104 = 0;
    o->buf = *o->p0;
    o->f120 = info->fac;
    fn_828556B0(o);
    fn_826381E0(o->p4, 1);
    fn_82637AF8(o->p4, 0);
    fa.v = o->f118;
    fn_82638FF8(o->p4, fa);
    if (info->p138 != 0) {
        o->f68 = arg->f28;
        o->f6c = info->p138->f2c;
        o->f70 = info->p138->s1a;
        if (arg->p48 != 0 && (p = arg->p48->p38) != 0) {
            fn_8263AA68(o->p4, 10, p, 0);
        }
    }
    o->arg = arg;
    fn_82631AF0(o->p4, 0);
    o->f6940 = 0;
}
