extern void *fn_8265C9E0(unsigned int size);
extern char lbl_821B7A80[];

typedef struct {
    void *vtbl;
    int a;
    int b;
} Obj;

Obj *fn_823FB7E0(Obj *src)
{
    Obj *p;

    p = fn_8265C9E0(0xc);
    if (p != 0) {
        p->vtbl = lbl_821B7A80;
        p->a = src->a;
        p->b = src->b;
        return p;
    }
    return 0;
}
