extern void fn_82696330(void *);
extern void fn_826944C8(void *);
extern void fn_8267BE38(void *);
typedef struct Rc { int a; int b; int count; } Rc;
typedef struct Obj { Rc *rc; } Obj;
Obj *fn_826F7940(Obj *self, unsigned int flags)
{
    Rc *r;
    fn_82696330((char *)self + 8);
    r = self->rc;
    if (--r->count == 0) fn_826944C8(r);
    if (flags & 1) fn_8267BE38(self);
    return self;
}
