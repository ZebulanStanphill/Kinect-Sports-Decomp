typedef struct Elem_8233D1D8 {
    void *ptr;
    void *aux;
} Elem_8233D1D8;

typedef struct Vec_8233D1D8 {
    Elem_8233D1D8 *first;
    Elem_8233D1D8 *last;
    Elem_8233D1D8 *end;
} Vec_8233D1D8;

extern void fn_822C9E38(Vec_8233D1D8 *v);

static unsigned char Inside_8233D1D8(Vec_8233D1D8 *v, Elem_8233D1D8 *p)
{
    return p < v->last && v->first <= p;
}

static __forceinline void Swap_8233D1D8(void **a, void **b)
{
    void *t = *a;
    *a = *b;
    *b = t;
}

static __forceinline void Move_8233D1D8(Elem_8233D1D8 *dst, Elem_8233D1D8 *src)
{
    dst->ptr = 0;
    dst->aux = 0;
    if (dst != src) {
        Swap_8233D1D8(&dst->aux, &src->aux);
        Swap_8233D1D8(&dst->ptr, &src->ptr);
    }
}

static __forceinline void Construct_8233D1D8(Elem_8233D1D8 *dst, Elem_8233D1D8 *src)
{
    if (dst != 0) {
        Move_8233D1D8(dst, src);
    }
}

void fn_8233D1D8(Vec_8233D1D8 *v, Elem_8233D1D8 *val)
{
    int idx;

    if (Inside_8233D1D8(v, val)) {
        idx = val - v->first;
        if (v->last == v->end) {
            fn_822C9E38(v);
        }
        Construct_8233D1D8(v->last, v->first + idx);
    } else {
        if (v->last == v->end) {
            fn_822C9E38(v);
        }
        Construct_8233D1D8(v->last, val);
    }
    v->last++;
}
