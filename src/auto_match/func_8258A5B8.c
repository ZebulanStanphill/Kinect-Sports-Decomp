typedef struct Elem_8258A5B8 { int p0; int p4, p8, pc; void *f10; int f14; int f18; } Elem_8258A5B8;
typedef struct Vec3_8258A5B8 { Elem_8258A5B8 **first, **last, **end; } Vec3_8258A5B8;
typedef struct Obj_8258A5B8 {
    int p0;
    Vec3_8258A5B8 vec;
    int p10, p14;
    char sub[4];
} Obj_8258A5B8;
extern void fn_8259C558(void *);
extern void fn_8265CA20(void *);
extern void fn_82A1E658(int);
extern void *memmove(void *, const void *, unsigned);
static __forceinline Elem_8258A5B8 **Move(Elem_8258A5B8 **last, Elem_8258A5B8 **end, Elem_8258A5B8 **dst)
{
    int n = end - last;
    memmove(dst, last, n * sizeof(void *));
    return dst + n;
}
Obj_8258A5B8 *fn_8258A5B8(Obj_8258A5B8 *v)
{
    Elem_8258A5B8 **p;
    Vec3_8258A5B8 *vec;
    for (p = v->vec.first; p != v->vec.last; p++) {
        Elem_8258A5B8 *e = *p;
        if (e != 0) {
            if (e->f10 != 0) fn_8265CA20(e->f10);
            e->f10 = 0;
            e->f14 = 0;
            e->f18 = 0;
            fn_82A1E658(e->p0);
            fn_8265CA20(e);
        }
    }
    vec = &v->vec;
    if (vec->first != vec->last)
        vec->last = Move(vec->last, vec->last, vec->first);
    fn_8259C558(v->sub);
    if (vec->first != 0) fn_8265CA20(vec->first);
    vec->first = 0;
    vec->last = 0;
    vec->end = 0;
    fn_8265CA20(v);
    return v;
}
