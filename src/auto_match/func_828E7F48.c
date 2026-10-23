extern void *fn_8265C9E0(unsigned int size);
extern void *fn_828E71B8(void *p, void *a);
extern int lbl_82027474;

typedef struct {
    void *vtbl;
    int pad[5];
} Obj;

Obj *fn_828E7F48(void *param_1)
{
    Obj *p;

    p = (Obj *)fn_8265C9E0(0x18);
    if (p != 0) {
        fn_828E71B8(p, param_1);
        p->vtbl = &lbl_82027474;
        return p;
    }
    return 0;
}
