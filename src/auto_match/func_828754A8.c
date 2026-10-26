typedef struct { int b[27]; } V;
typedef struct { unsigned char a; V v; } E;
typedef struct { E *p; } Iter;
extern void fn_828752D8(V *d, const V *s);

E *fn_828754A8(E *first, E *last, E *dest)
{
    Iter s, d;

    d.p = dest;
    s.p = first;
    for (; s.p != last; d.p++, s.p++) {
        d.p->a = s.p->a;
        fn_828752D8(&d.p->v, &s.p->v);
    }
    return d.p;
}
