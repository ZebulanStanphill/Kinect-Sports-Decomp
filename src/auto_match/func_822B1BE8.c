typedef struct Str_822B1BE8 {
    char b[0x20];
} Str_822B1BE8;
typedef struct Slot_822B1BE8 {
    char pad0[0xc];
    int mc;
    char pad10[0x58 - 0x10];
    char m58;
    char pad59[3];
    int m5c;
    int m60;
    int m64;
} Slot_822B1BE8;
typedef struct Obj_822B1BE8 {
    char pad0[0xc];
    int mc;
    char pad10[0x58 - 0x10];
    char m58;
    char pad59[3];
    int m5c;
    int m60;
    int m64;
    char pad68[0xcc - 0x68];
    int mcc;
    char padd0[0x118 - 0xd0];
    char m118;
    char pad119[3];
    int m11c;
    int m120;
    int m124;
} Obj_822B1BE8;

extern Str_822B1BE8 *fn_822B27E8(Str_822B1BE8 *, int, const char *);
extern int fn_828EA268(int);
extern void fn_82897DF8(void *, int, Str_822B1BE8 *);
extern void fn_82230300(Str_822B1BE8 *, int, int);

void fn_822B1BE8(Obj_822B1BE8 *o, int a, int b, int c)
{
    Str_822B1BE8 s1;
    Str_822B1BE8 s2;
    Str_822B1BE8 s3;
    Str_822B1BE8 *r;
    Slot_822B1BE8 *sub;

    r = fn_822B27E8(&s1, b, "_desiredState");
    o->m60 = c;
    o->mc = 0;
    o->m58 = 0;
    o->m5c = 0;
    o->m64 = fn_828EA268(c);
    fn_82897DF8(o, a, r);
    fn_82230300(&s1, 1, 0);
    r = fn_822B27E8(&s2, b, "_actualState");
    fn_82897DF8((char *)o + 0x68, a, r);
    fn_82230300(&s2, 1, 0);
    r = fn_822B27E8(&s3, b, "_ownerReadyState");
    sub = (Slot_822B1BE8 *)((char *)o + 0xc0);
    sub->mc = 0;
    sub->m58 = 0;
    sub->m5c = 0;
    sub->m60 = c;
    sub->m64 = fn_828EA268(c);
    fn_82897DF8(sub, a, r);
    fn_82230300(&s3, 1, 0);
}
