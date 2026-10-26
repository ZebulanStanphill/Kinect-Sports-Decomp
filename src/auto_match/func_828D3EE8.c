typedef struct { int b[4]; } V;
typedef struct { int a; V v; } E;
typedef struct { E *p; } Iter;
extern void fn_828D3A40(V *d, const V *s);

E *fn_828D3EE8(E *first, E *last, E *dest)
{
    Iter s, d;

    d.p = dest;
    s.p = first;
    for (; s.p != last; d.p++, s.p++) {
        d.p->a = s.p->a;
        fn_828D3A40(&d.p->v, &s.p->v);
    }
    return d.p;
}
