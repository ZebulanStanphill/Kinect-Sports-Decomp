typedef struct Obj { int a, b; int ref; } Obj;
typedef struct Ptr { Obj *p; int x4; int rest; } Ptr;
typedef struct Src { Obj **pp; int v; } Src;
extern void fn_826944C8(Obj *o);
extern void fn_82695FA0(int *d, int v);

void fn_826A94C8(Ptr *dst, Src *src)
{
    Obj *n = *src->pp;
    Obj *old;
    n->ref++;
    old = dst->p;
    if (--old->ref == 0) {
        fn_826944C8(old);
    }
    dst->p = n;
    fn_82695FA0(&dst->rest, src->v);
}
