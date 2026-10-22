typedef struct S {
    int f0;
    int f4;
    char pad8[0x24 - 0x8];
    void *f24;
    void *f28;
    char pad2c[0x30 - 0x2c];
    void *f30;
    void *f34;
    unsigned char f38;
    unsigned char f39;
    char pad3a[0x3c - 0x3a];
    int f3c;
    void *f40;
} S;

extern void fn_82F61118(S *p);
extern void fn_82BFE3B0(void *p);
extern void fn_82BFE830(void *p);
extern void fn_82A1E658(void *p);
extern void fn_8265C990(void *p, int n);

int fn_82F61288(S *p)
{
    fn_82F61118(p);
    p->f4 = 0;
    if (p->f39) {
        if (p->f34) {
            fn_82BFE3B0(p->f34);
            p->f34 = 0;
        }
        p->f39 = 0;
    }
    if (p->f38) {
        if (p->f30) {
            fn_82BFE830(p->f30);
            p->f30 = 0;
        }
        p->f38 = 0;
    }
    if (p->f24) {
        fn_82A1E658(p->f24);
        p->f24 = 0;
    }
    if (p->f28) {
        fn_82A1E658(p->f28);
        p->f28 = 0;
    }
    if (p->f40) {
        fn_8265C990(p->f40, p->f3c);
        p->f40 = 0;
    }
    p->f0 = 0;
    return 0;
}
