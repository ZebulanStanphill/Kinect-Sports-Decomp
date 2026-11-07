typedef struct Elem_8269D1E8 {
    int v[4];
} Elem_8269D1E8;

typedef struct Vec_8269D1E8 {
    Elem_8269D1E8 *data;
    unsigned int size;
} Vec_8269D1E8;

extern void fn_8269CF58(Vec_8269D1E8 *v, Vec_8269D1E8 *v2, unsigned int newSize);
extern void fn_82695DA0(Elem_8269D1E8 *dst, Elem_8269D1E8 *src);

static __forceinline void copyN_8269D1E8(Elem_8269D1E8 *d, Elem_8269D1E8 *s, unsigned int n)
{
    for (; 0 < n; --n, ++s, ++d) {
        if (d != 0) {
            fn_82695DA0(d, s);
        }
    }
}

void fn_8269D1E8(Vec_8269D1E8 *v, Elem_8269D1E8 *src, unsigned int n)
{
    if (n != 0) {
        unsigned int old = v->size;
        fn_8269CF58(v, v, old + n);
        copyN_8269D1E8(v->data + old, src, n);
    }
}
