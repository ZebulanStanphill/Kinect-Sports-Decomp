typedef struct { int a, b, c; } V3_82C7D380;
extern void fn_82CAAF00(void *, void *, int);
extern int fn_82CAAF50(void *, void *);
extern void fn_82C5E340(void *);

typedef struct {
    char pad0[0xdc];
    int base;
    char pad1[0xea8 - 0xe0];
    V3_82C7D380 *cur;
    char pad2[0xecc - 0xeac];
    V3_82C7D380 v;
    char pad3[0xee4 - 0xed8];
    int sum;
    char pad4[0x39e8 - 0xee8];
    V3_82C7D380 v2;
    char pad5[0x3ba0 - 0x39f4];
    int f3ba0;
    void *f3ba4;
    char pad6[0x5718 - 0x3ba8];
    int f5718;
    int f571c;
} Obj_82C7D380;

int fn_82C7D380(Obj_82C7D380 *o)
{
    V3_82C7D380 *src;
    V3_82C7D380 *old;
    int a, b, c;
    if (o->f571c != 0) {
        o->f571c = 0;
        if (o->f5718 == 0) {
            o->f3ba0 = -1;
        }
        old = o->cur;
        fn_82CAAF00(o->f3ba4, &o->cur, -1);
        if (fn_82CAAF50(o->f3ba4, old) != 0) {
            return -100;
        }
        src = o->cur;
        o->v = *src;
        a = o->v.a;
        b = o->v.b;
        c = o->v.c;
        o->sum = o->base + a;
        o->v2.a = a;
        o->v2.b = b;
        o->v2.c = c;
        fn_82C5E340(o);
    }
    return 0;
}
