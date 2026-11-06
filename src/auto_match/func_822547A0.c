typedef struct Impl_822547A0 Impl_822547A0;

typedef struct ImplVtbl_822547A0 {
    Impl_822547A0 *(*Copy)(Impl_822547A0 *self, void *where);
} ImplVtbl_822547A0;

struct Impl_822547A0 {
    ImplVtbl_822547A0 *vt;
};

typedef struct Func_822547A0 {
    int space[4];
    Impl_822547A0 *impl;
    int pad14;
} Func_822547A0;

typedef struct Ptr_822547A0 {
    void *ptr;
    void *ctrl;
} Ptr_822547A0;

typedef struct Obj_822547A0 {
    void *vt;
    int pad4[13];
    Func_822547A0 f1;
    Func_822547A0 f2;
    Ptr_822547A0 p1;
    Ptr_822547A0 p2;
    Ptr_822547A0 p3;
    Ptr_822547A0 p4;
    Ptr_822547A0 weak;
    Ptr_822547A0 p5;
} Obj_822547A0;

extern char lbl_82196C58[];
extern char lbl_82197FA4[];
extern void fn_8223A4D8(Obj_822547A0 *self, Obj_822547A0 *other);
extern unsigned char fn_8223AAC0(void *ctrl);
extern void fn_822315A0(void *ctrl);
extern void fn_82365BD8(Ptr_822547A0 *dst, Ptr_822547A0 *src);

static void CopyFunc_822547A0(Func_822547A0 *dst, Func_822547A0 *src)
{
    if (src->impl == 0) {
        dst->impl = 0;
    } else if (src->impl == (Impl_822547A0 *)src) {
        dst->impl = src->impl->vt->Copy(src->impl, dst);
    } else {
        dst->impl = src->impl->vt->Copy(src->impl, 0);
    }
}

Obj_822547A0 *fn_822547A0(Obj_822547A0 *self, Obj_822547A0 *other)
{
    Ptr_822547A0 *w;
    void *ctrl;
    void *ptr;

    fn_8223A4D8(self, other);
    self->vt = lbl_82196C58;
    CopyFunc_822547A0(&self->f1, &other->f1);
    CopyFunc_822547A0(&self->f2, &other->f2);
    self->vt = lbl_82197FA4;
    fn_82365BD8(&self->p1, &other->p1);
    fn_82365BD8(&self->p2, &other->p2);
    fn_82365BD8(&self->p3, &other->p3);
    fn_82365BD8(&self->p4, &other->p4);
    w = &self->weak;
    w->ptr = 0;
    w->ctrl = 0;
    ctrl = other->weak.ctrl;
    ptr = other->weak.ptr;
    if (ctrl != 0 && fn_8223AAC0(ctrl)) {
        if (w->ctrl != 0) {
            fn_822315A0(w->ctrl);
        }
        w->ctrl = ctrl;
        w->ptr = ptr;
    }
    fn_82365BD8(&self->p5, &other->p5);
    return self;
}
