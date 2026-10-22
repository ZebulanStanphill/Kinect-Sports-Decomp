typedef struct Rep Rep;
typedef struct Obj {
    void *vt;
    int f4;
    void *f8;
    Rep *rep;
} Obj;
extern void fn_8265CA20(void *p);
extern void fn_8289DF30(Rep *r);
extern void fn_828E3760(void *p);
extern char lbl_82024338[];
extern char lbl_8217C318[];

Obj *fn_828E5150(Obj *self, unsigned int flags)
{
    self->vt = lbl_82024338;
    fn_828E3760(self->f8);
    if (self->rep != 0) {
        fn_8289DF30(self->rep);
    }
    self->vt = lbl_8217C318;
    if (flags & 1) {
        fn_8265CA20(self);
    }
    return self;
}
