struct Obj_82C0D468;
typedef struct VT_82C0D468 {
    void *pad[63];
    int (*ffc)(struct Obj_82C0D468 *);
} VT_82C0D468;
struct Sub_82C0D468;
typedef struct SVT_82C0D468 {
    void *pad0[19];
    void (*f4c)(struct Sub_82C0D468 *, unsigned int, int *);
    void *pad1[2];
    void (*f58)(struct Sub_82C0D468 *);
} SVT_82C0D468;
typedef struct Sub_82C0D468 { SVT_82C0D468 *vt; } Sub_82C0D468;
typedef struct Obj_82C0D468 {
    VT_82C0D468 *vt;
    char pad0[0x2c - 4];
    Sub_82C0D468 *sub;
    char pad1[0xf0 - 0x30];
    int f0;
    char pad2[0x110 - 0xf4];
    void *f110;
} Obj_82C0D468;
extern void fn_82A1E108(int);
extern void fn_82A1E2C0(void *);

void fn_82C0D468(Obj_82C0D468 *o, unsigned int a)
{
    int buf[2];
    if ((o->vt->ffc(o) & 1) == 0) {
        o->sub->vt->f4c(o->sub, a, buf);
        if (buf[0] > 5)
            fn_82A1E108(buf[0] - 5);
    }
    o->sub->vt->f58(o->sub);
    if (o->f0 != 0) {
        fn_82A1E2C0(o->f110);
        o->f0 = 0;
    }
}
