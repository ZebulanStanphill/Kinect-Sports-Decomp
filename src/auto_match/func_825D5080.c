typedef struct Obj_825D5080 { void *vtable; } Obj_825D5080;
extern void fn_825D50C0(Obj_825D5080 *self);
extern void fn_8265CA20(void *p);
Obj_825D5080 *fn_825D5080(Obj_825D5080 *self, unsigned int flags)
{
    fn_825D50C0(self);
    if (flags & 1)
        fn_8265CA20(self);
    return self;
}
