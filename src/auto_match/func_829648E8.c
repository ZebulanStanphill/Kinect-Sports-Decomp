extern void fn_8265C990(void *p, unsigned int flags);
extern void fn_829639F0(void *p);
extern void fn_82964180(void *p);
extern void fn_82BA02A8(void *p);
extern char lbl_8203878C[];

typedef struct Obj {
    void *vtbl;
    unsigned int n0;
    unsigned int n1;
    unsigned int n2;
    void **a0;
    void **a1;
    void **a2;
} Obj;

void fn_829648E8(Obj *o)
{
    unsigned int i, j, k;
    void *p;

    o->vtbl = lbl_8203878C;
    if (o->a0 != 0) {
        for (i = 0; i < o->n0; i++) {
            p = o->a0[i];
            if (p != 0) {
                fn_82BA02A8(p);
                fn_8265C990(p, 0x24810000);
            }
        }
        fn_8265C990(o->a0, 0x24810000);
    }
    if (o->a1 != 0) {
        for (j = 0; j < o->n1; j++) {
            p = o->a1[j];
            if (p != 0) {
                fn_82BA02A8(p);
                fn_82964180(p);
            }
        }
        fn_8265C990(o->a1, 0x24810000);
    }
    if (o->a2 != 0) {
        for (k = 0; k < o->n2; k++) {
            p = o->a2[k];
            if (p != 0) {
                fn_82BA02A8(p);
                fn_829639F0(p);
            }
        }
        fn_8265C990(o->a2, 0x24810000);
    }
}
