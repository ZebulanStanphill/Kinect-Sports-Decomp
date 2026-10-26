typedef struct { int a, b, c, d; } V;
typedef struct { char pad[0xc]; V v; } N;
extern N *fn_82832EB8(void *);

void fn_828335D0(void *a, V *src)
{
    N *n = fn_82832EB8(a);
    V *p = &n->v;
    if (p != 0) {
        p->a = src->a;
        p->b = src->b;
        p->c = src->c;
        p->d = src->d;
    }
}
