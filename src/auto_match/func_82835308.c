extern void *fn_828252D0(int size);
extern void fn_828252D8(void *p);
extern void fn_828223C8(void *node, void *out);
extern unsigned char fn_82824738(void *a, void *v, void **out);

typedef struct Elem {
    int f0;
    int idx4;
    int f8;
    int fc;
    int idx10;
} Elem;

typedef struct Vec {
    Elem *begin;
    Elem *end;
} Vec;

typedef struct Node {
    char pad[0x48];
    Vec *v;
} Node;

typedef struct A {
    char pad[0xac];
    int fac;
    char padb0[0x3c8 - 0xb0];
    int *tbl;
} A;

typedef struct B {
    char pad[0xa4];
    int fa4;
    int pada8;
    int fac;
    char padb0[0x3bc - 0xb0];
    void ***p3bc;
} B;

void fn_82835308(A *a, B *b, Node *n)
{
    void **tmp;
    Node *cur;
    void *val;
    Vec **pv;
    unsigned int count;
    unsigned int i;
    Elem *e;
    int k;
    void **arr; void **slot;
    void *p;

    a->fac = b->fac + a->fac;
    tmp = fn_828252D0(b->fa4 << 2);
    while (fn_828223C8(n, &cur), cur != 0) {
        pv = &cur->v;
        count = (*pv)->end - (*pv)->begin;
        n = cur;
        for (i = 0; i < count; i++) {
            e = &(*pv)->begin[i];
            e->idx4 = a->tbl[e->idx4];
            k = e->idx10;
            arr = *b->p3bc;
            slot = &arr[k]; p = *slot;
            if (p == 0) {
                val = tmp[k];
            } else if (fn_82824738(a, p, &val)) {
                tmp[e->idx10] = val;
                *slot = 0;
            }
            e->idx10 = (int)val;
            n = cur;
        }
    }
    fn_828252D8(tmp);
}
