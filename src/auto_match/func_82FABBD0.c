typedef struct Holder {
    void *ptr;
} Holder;

typedef struct Obj {
    void *vtbl;
    int pad[6];
    Holder child;
} Obj;

extern char lbl_8216CC64[];
extern char lbl_8217D040[];
extern void fn_82FA9208(void *p);
extern void fn_8265CA20(void *p);

static void Holder_dtor(Holder *h)
{
    if (h->ptr != 0) {
        fn_82FA9208(h->ptr);
        h->ptr = 0;
    }
}

Obj *fn_82FABBD0(Obj *p, unsigned int flags)
{
    p->vtbl = lbl_8216CC64;
    Holder_dtor(&p->child);
    p->vtbl = lbl_8217D040;
    if (flags & 1) {
        fn_8265CA20(p);
    }
    return p;
}
