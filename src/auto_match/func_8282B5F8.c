typedef struct B {
    char pad0[0x10];
    unsigned int f10;
    char pad14[8];
    unsigned int f1c;
    unsigned int f20;
    unsigned int f24;
} B;

typedef struct A {
    char pad0[0x2c];
    int f2c;
    unsigned int f30;
    char pad34[0x2b8 - 0x34];
    unsigned int f2b8;
    unsigned int f2bc;
    char pad2c0[8];
    unsigned int f2c8;
    unsigned int f2cc;
    unsigned int f2d0;
    unsigned int f2d4;
    char pad2d8[0x3e8 - 0x2d8];
    unsigned char f3e8;
} A;

extern void fn_8282B528(A *a);

void fn_8282B5F8(A *a, B *b)
{
    if (b->f10 != 0) {
        if (b->f10 != a->f2c8 || b->f20 != a->f2d0 || b->f24 != a->f2d4 || b->f1c != a->f2cc) {
            if (a->f2b8 != 0) {
                a->f2c++;
                if (a->f3e8 == 0) {
                    fn_8282B528(a);
                }
                a->f2b8 = 0;
            }
            a->f2c8 = b->f10;
            a->f2d0 = b->f20;
            a->f2d4 = b->f24;
            a->f2cc = b->f1c;
        }
        a->f2bc++;
        a->f2b8++;
        if (a->f2bc == a->f30) {
            a->f2c++;
            if (a->f3e8 == 0) {
                fn_8282B528(a);
            }
        }
    }
}
