typedef struct { char data[0x2c]; } Elem_828785B0;

typedef struct {
    Elem_828785B0 *first;
    Elem_828785B0 *last;
    Elem_828785B0 *end;
    char alloc[4];
} Vec_828785B0;

extern void fn_828782A8(Elem_828785B0 *first, Elem_828785B0 *last, void *alloc);
extern Elem_828785B0 *fn_82878468(Elem_828785B0 *dst, Elem_828785B0 *src);

Elem_828785B0 **fn_828785B0(Elem_828785B0 **ret, Vec_828785B0 *v, Elem_828785B0 *where)
{
    Elem_828785B0 *last = v->last;
    Elem_828785B0 *src = where + 1;
    Elem_828785B0 *dst = where;
    for (; src != last; ++dst, ++src) {
        fn_82878468(dst, src);
    }
    fn_828782A8(v->last - 1, v->last, v->alloc);
    last = v->last;
    *ret = where;
    v->last = last - 1;
    return ret;
}
