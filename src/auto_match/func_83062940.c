typedef struct Cont_83062940 Cont_83062940;

typedef struct Proxy_83062940 {
    Cont_83062940 *cont;
} Proxy_83062940;

struct Cont_83062940 {
    Proxy_83062940 *proxy;
};

typedef struct Base_83062940 {
    Proxy_83062940 **pproxy;
} Base_83062940;

typedef struct Iter_83062940 {
    Proxy_83062940 *proxy;
    int f4;
    int index;
} Iter_83062940;

static __forceinline Cont_83062940 *GetCont_83062940(Base_83062940 *b)
{
    Cont_83062940 *c = 0;
    Proxy_83062940 *p;

    if (b->pproxy != 0) {
        p = *b->pproxy;
        if (p != 0) {
            c = p->cont;
        }
    }
    return c;
}

static __forceinline void Init_83062940(Iter_83062940 *out, Cont_83062940 *c, int index)
{
    out->proxy = 0;
    out->f4 = 0;
    if (c != 0 && c->proxy != 0) {
        out->proxy = (Proxy_83062940 *)c->proxy->cont;
    }
    out->index = index;
}

void fn_83062940(Iter_83062940 *out, Iter_83062940 *it, int n)
{
    Init_83062940(out, GetCont_83062940((Base_83062940 *)it), it->index - n);
}
