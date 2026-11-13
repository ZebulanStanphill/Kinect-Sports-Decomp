typedef struct Rep_82374590 Rep_82374590;
typedef struct SP_82374590 {
    void *ptr;
    Rep_82374590 *rep;
} SP_82374590;
typedef struct Vec_82374590 {
    SP_82374590 *first;
    SP_82374590 *last;
} Vec_82374590;
typedef struct Obj_82374590 {
    char pad0[0x184];
    Vec_82374590 items;
} Obj_82374590;
extern void fn_822315A0(Rep_82374590 *r);

static __forceinline void swapRep(Rep_82374590 **a, Rep_82374590 **b) { Rep_82374590 *t = *a; *a = *b; *b = t; }
static __forceinline void swapPtr(void **a, void **b) { void *t = *a; *a = *b; *b = t; }

static __forceinline SP_82374590 *moveRange(SP_82374590 *first, SP_82374590 *last, SP_82374590 *dest)
{
    for (; first != last; first++, dest++) {
        SP_82374590 tmp;
        Rep_82374590 *old;
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

static __forceinline void destroyRange(SP_82374590 *first, SP_82374590 *last)
{
    for (; first != last; first++) {
        if (first->rep != 0) {
            fn_822315A0(first->rep);
        }
    }
}

static __forceinline void eraseRange(Vec_82374590 *v, SP_82374590 *first, SP_82374590 *last)
{
    if (first != last) {
        SP_82374590 *p = moveRange(last, v->last, first);
        destroyRange(p, v->last);
        v->last = p;
    }
}

void fn_82374590(Obj_82374590 *o)
{
    Vec_82374590 *v = &o->items;
    eraseRange(v, v->first, v->last);
}
