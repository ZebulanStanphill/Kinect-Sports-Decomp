extern void fn_826944C8(void *);
extern void fn_8265CA20(void *);
typedef struct Rc { int a; int b; int count; } Rc;
typedef struct Obj {  Rc *rc; } Obj;
Obj *fn_826F8490(Obj *self, unsigned int flags)
{
    Rc *r = self->rc;
    if (--r->count == 0) fn_826944C8(r);
    if (flags & 1) fn_8265CA20(self);
    return self;
}
