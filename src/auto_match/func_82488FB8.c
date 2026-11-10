typedef struct Rep_82488FB8 Rep_82488FB8;
typedef struct SP_82488FB8 {
    void *ptr;
    Rep_82488FB8 *rep;
} SP_82488FB8;
typedef struct Vec_82488FB8 {
    SP_82488FB8 *first;
    SP_82488FB8 *last;
} Vec_82488FB8;
extern void fn_822315A0(Rep_82488FB8 *r);
extern void fn_82231540(SP_82488FB8 *first, SP_82488FB8 *last);

static __forceinline void swapRep(Rep_82488FB8 **a, Rep_82488FB8 **b) { Rep_82488FB8 *t = *a; *a = *b; *b = t; }
static __forceinline void swapPtr(void **a, void **b) { void *t = *a; *a = *b; *b = t; }

static __forceinline SP_82488FB8 *moveRange(SP_82488FB8 *first, SP_82488FB8 *last, SP_82488FB8 *dest)
{
    for (; first != last; first++, dest++) {
        SP_82488FB8 tmp;
        Rep_82488FB8 *old;
        tmp.ptr = 0;
        tmp.rep = 0;
        if (&tmp != first) {
            swapRep(&tmp.rep, &first->rep);
            swapPtr(&tmp.ptr, &first->ptr);
        }
        old = dest->rep;
        dest->rep = tmp.rep;
        dest->ptr = tmp.ptr;
        if (old != 0) {
            fn_822315A0(old);
        }
    }
    return dest;
}

static __forceinline void eraseRange(Vec_82488FB8 *v, SP_82488FB8 *first, SP_82488FB8 *last)
{
    if (first != last) {
        SP_82488FB8 *p = moveRange(last, v->last, first);
        fn_82231540(p, v->last);
        v->last = p;
    }
}

void fn_82488FB8(Vec_82488FB8 *v)
{
    eraseRange(v, v->first, v->last);
}
