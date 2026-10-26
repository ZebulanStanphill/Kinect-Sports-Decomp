typedef struct Obj { int a, b; int ref; } Obj;
typedef struct Ptr { Obj *p; unsigned char flag; } Ptr;
typedef struct Src { Obj **pp; unsigned char *flag; } Src;
extern void fn_826944C8(Obj *o);

void fn_8269B610(Ptr *dst, Src *src)
{
    Obj *n = *src->pp;
    Obj *old;
    n->ref++;
    old = dst->p;
    if (--old->ref == 0) {
        fn_826944C8(old);
    }
    dst->p = n;
    dst->flag = *src->flag;
}
