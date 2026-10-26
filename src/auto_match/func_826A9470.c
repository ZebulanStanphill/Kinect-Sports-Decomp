typedef struct Obj { int a, b; int ref; } Obj;
typedef struct Ptr { Obj *p; int rest; } Ptr;
extern void fn_826944C8(Obj *o);
extern void fn_826C3768(int *d, int *s);

Ptr *fn_826A9470(Ptr *dst, Ptr *src)
{
    Obj *n = src->p;
    Obj *old;
    n->ref++;
    old = dst->p;
    if (--old->ref == 0) {
        fn_826944C8(old);
    }
    dst->p = n;
    fn_826C3768(&dst->rest, &src->rest);
    return dst;
}
