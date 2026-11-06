typedef struct A_83056B10 A_83056B10;
typedef struct B_83056B10 B_83056B10;
typedef struct C_83056B10 C_83056B10;
typedef struct Obj_83056B10 {
    int f0;
    int f4;
    A_83056B10 *f8;
    B_83056B10 *fc;
    C_83056B10 *f10;
    char lk14[0x14];
    char lk28[0x14];
    char lk3c[4];
} Obj_83056B10;
extern void fn_8305B280(void *lk);
extern void fn_83059900(A_83056B10 *p);
extern void fn_83058710(B_83056B10 *p);
extern void fn_8305B020(C_83056B10 *p);
extern void fn_83057318(void *p);

void fn_83056B10(Obj_83056B10 *p)
{
    A_83056B10 *a;
    B_83056B10 *b;
    C_83056B10 *c;

    if (p->f8 != 0) {
        fn_8305B280(p->lk14);
        a = p->f8;
        if (a != 0) {
            fn_83059900(a);
            fn_83057318(a);
        }
        p->f8 = 0;
    } else if (p->fc != 0) {
        fn_8305B280(p->lk28);
        b = p->fc;
        if (b != 0) {
            fn_83058710(b);
            fn_83057318(b);
        }
        p->fc = 0;
    } else if (p->f10 != 0) {
        fn_8305B280(p->lk3c);
        c = p->f10;
        if (c != 0) {
            fn_8305B020(c);
            fn_83057318(c);
        }
        p->f10 = 0;
    }
}
