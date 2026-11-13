typedef struct Rep_82522588 { int pad; long uses; } Rep_82522588;
typedef struct Ptr_82522588 {
    void *ptr;
    Rep_82522588 *rep;
} Ptr_82522588;
extern long _InterlockedIncrement(long volatile *);
extern void fn_822315A0(Rep_82522588 *);

Ptr_82522588 *fn_82522588(Ptr_82522588 *out, Ptr_82522588 *src)
{
    Rep_82522588 *r = src->rep;
    void *p = src->ptr;
    out->ptr = 0;
    out->rep = 0;
    if (r != 0)
        _InterlockedIncrement(&r->uses);
    if (out->rep != 0)
        fn_822315A0(out->rep);
    out->rep = r;
    out->ptr = p;
    return out;
}
