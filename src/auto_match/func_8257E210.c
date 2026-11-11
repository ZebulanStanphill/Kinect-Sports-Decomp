typedef struct Obj_8257E210 { void *vtable; } Obj_8257E210;
extern char lbl_821C5560[];
extern void fn_825D50C0(Obj_8257E210 *self);
extern void fn_8265CA20(void *p);
Obj_8257E210 *fn_8257E210(Obj_8257E210 *self, unsigned int flags)
{
    self->vtable = lbl_821C5560;
    fn_825D50C0(self);
    if (flags & 1)
        fn_8265CA20(self);
    return self;
}
