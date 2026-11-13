typedef struct Rep_824C8148 Rep_824C8148;
typedef struct SP_824C8148 {
    void *ptr;
    Rep_824C8148 *rep;
} SP_824C8148;
typedef struct Vec_824C8148 {
    SP_824C8148 *first;
    SP_824C8148 *last;
} Vec_824C8148;
extern void fn_822315A0(Rep_824C8148 *r);

static __forceinline void swapRep(Rep_824C8148 **a, Rep_824C8148 **b) { Rep_824C8148 *t = *a; *a = *b; *b = t; }
static __forceinline void swapPtr(void **a, void **b) { void *t = *a; *a = *b; *b = t; }

static __forceinline SP_824C8148 *moveRange(SP_824C8148 *first, SP_824C8148 *last, SP_824C8148 *dest)
{
    for (; first != last; first++, dest++) {
        SP_824C8148 tmp;
        Rep_824C8148 *old;
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

static __forceinline void destroyRange(SP_824C8148 *first, SP_824C8148 *last)
{
    for (; first != last; first++) {
        if (first->rep != 0) {
            fn_822315A0(first->rep);
        }
    }
}

static __forceinline void eraseRange(Vec_824C8148 *v, SP_824C8148 *first, SP_824C8148 *last)
{
    if (first != last) {
        SP_824C8148 *p = moveRange(last, v->last, first);
        destroyRange(p, v->last);
        v->last = p;
    }
}

void fn_824C8148(Vec_824C8148 *v)
{
    eraseRange(v, v->first, v->last);
}
