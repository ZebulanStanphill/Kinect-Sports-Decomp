typedef struct { int v[4]; } E;
typedef struct { E *first; E *last; E *end; int alloc; } Vec;
extern E *fn_825175A8(E *first, E *last, E *dest);
extern void fn_82237848(E *first, E *last, int *alloc);

void fn_82517238(Vec *v)
{
    if (v->first != v->last) {
        E *n = fn_825175A8(v->last, v->last, v->first);
        fn_82237848(n, v->last, &v->alloc);
        v->last = n;
    }
}
