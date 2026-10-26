typedef struct { int a, b; } V;
typedef struct { char pad[0xc]; V v; } N;
extern N *fn_83062700(void *);
extern void fn_82831208(void *, void *, void *, N *);
void *fn_82831370(void *r, void *a, void *b, V *src)
{
    N *n = fn_83062700(a);
    V *p = &n->v;
    if (p != 0) {
        p->a = src->a;
        p->b = src->b;
    }
    fn_82831208(r, a, b, n);
    return r;
}
