typedef struct Rep Rep;
typedef struct SP {
    void *ptr;
    Rep *rep;
} SP;
extern void fn_822315A0(Rep *r);

static void swapRep(Rep **a, Rep **b) { Rep *t = *a; *a = *b; *b = t; }
static void swapPtr(void **a, void **b) { void *t = *a; *a = *b; *b = t; }

SP *fn_828B6DD0(SP *first, SP *last, SP *dest)
{
    for (; first != last; first++, dest++) {
        SP tmp;
        Rep *old;
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
