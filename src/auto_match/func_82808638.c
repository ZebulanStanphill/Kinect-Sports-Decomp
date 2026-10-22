typedef struct B {
    char pad0[0xc];
    void *c;
    void *d;
    void *e;
    char pad18[0x26 - 0x18];
    unsigned char f26;
} B;

typedef struct A {
    char pad0[0x24];
    void *c;
    void *d;
    void *d2;
    void *e;
    char pad34[0x45 - 0x34];
    unsigned char f45;
    unsigned char f46;
    unsigned char f47;
    char pad48[4];
    int f4c;
    char pad50[8];
    void *f58;
    char pad5c[8];
    void *f64;
} A;

extern void fn_828042F0(B *b, int x, int y, A *a);
extern void fn_82807110(B *b, A *a, int x, unsigned char c);
extern void fn_82807EC8(A *a, B *b, int x, unsigned char c);
extern void fn_82808220(B *b, int y, A *a);
extern void fn_82809360(A *a, int x, int y);
extern void *lbl_83156DC0;

void fn_82808638(A *a, B *b, int y, int x)
{
    void *e;

    if (a->f64 != 0 && lbl_83156DC0 != 0 && a->f58 == 0) {
        fn_82807110(b, a, x, a->f47);
        fn_82809360(a, x, y);
        return;
    }
    a->f45 = 0;
    a->c = b->c;
    a->d = b->d;
    a->d2 = b->d;
    e = b->e;
    a->e = e;
    if (b->f26 == 0 && a->f4c == 1 && a->f47 == 0xf && a->f58 == 0 && a->d != 0 && e != 0) {
        fn_828042F0(b, x, y, a);
    } else {
        fn_82807EC8(a, b, x, a->f47);
        fn_82808220(b, y, a);
    }
}
