typedef struct { int a, b, c; } Elem_82834EA0;
typedef struct { Elem_82834EA0 *first; Elem_82834EA0 *last; } Vec_82834EA0;
typedef struct { Elem_82834EA0 *ptr; } Iter_82834EA0;

static __forceinline Elem_82834EA0 *Copy(Elem_82834EA0 *s, Elem_82834EA0 *e, Elem_82834EA0 *d)
{
    for (; s != e; s++, d++)
        *d = *s;
    return d;
}

static __forceinline void Destroy(Elem_82834EA0 *p, Elem_82834EA0 *e)
{
    for (; p != e; p++)
        ;
}

Iter_82834EA0 *fn_82834EA0(Iter_82834EA0 *out, Vec_82834EA0 *v, Elem_82834EA0 *first, Elem_82834EA0 *last)
{
    out->ptr = first;
    if (first != last) {
        Elem_82834EA0 *p = Copy(last, v->last, first);
        Destroy(p, v->last);
        v->last = p;
    }
    return out;
}
