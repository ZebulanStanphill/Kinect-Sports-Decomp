typedef struct Impl_82254E40 Impl_82254E40;
typedef struct ImplVt_82254E40 {
    Impl_82254E40 *(*copy)(Impl_82254E40 *self, void *where);
} ImplVt_82254E40;
struct Impl_82254E40 {
    ImplVt_82254E40 *vt;
};
typedef struct Func_82254E40 {
    int space[4];
    Impl_82254E40 *impl;
    int pad;
} Func_82254E40;
typedef struct Ptr_82254E40 {
    void *ptr;
    void *rep;
} Ptr_82254E40;
typedef struct Obj_82254E40 {
    void *vt;
    char pad04[0x38 - 4];
    Func_82254E40 f1;
    Func_82254E40 f2;
    Ptr_82254E40 p[5];
    Ptr_82254E40 q;
} Obj_82254E40;
extern char lbl_82196C58[];
extern char lbl_82197FE4[];
extern void fn_8223A4D8(Obj_82254E40 *self, Obj_82254E40 *other);
extern void fn_82365BD8(Ptr_82254E40 *self, Ptr_82254E40 *other);
extern unsigned char fn_8223AAC0(void *rep);
extern void fn_822315A0(void *rep);

static __forceinline void copyFunc_82254E40(Func_82254E40 *self, Func_82254E40 *other)
{
    if (other->impl == 0) {
        self->impl = 0;
    } else if (other->impl == (Impl_82254E40 *)other->space) {
        self->impl = other->impl->vt->copy(other->impl, self->space);
    } else {
        self->impl = other->impl->vt->copy(other->impl, 0);
    }
}

static __forceinline void copyPtr_82254E40(Ptr_82254E40 *self, Ptr_82254E40 *other)
{
    void *rep;
    void *ptr;

    self->ptr = 0;
    self->rep = 0;
    rep = other->rep;
    ptr = other->ptr;
    if (rep != 0 && fn_8223AAC0(rep)) {
        if (self->rep != 0) {
            fn_822315A0(self->rep);
        }
        self->rep = rep;
        self->ptr = ptr;
    }
}

Obj_82254E40 *fn_82254E40(Obj_82254E40 *self, Obj_82254E40 *other)
{
    fn_8223A4D8(self, other);
    self->vt = lbl_82196C58;
    copyFunc_82254E40(&self->f1, &other->f1);
    copyFunc_82254E40(&self->f2, &other->f2);
    self->vt = lbl_82197FE4;
    fn_82365BD8(&self->p[0], &other->p[0]);
    fn_82365BD8(&self->p[1], &other->p[1]);
    fn_82365BD8(&self->p[2], &other->p[2]);
    fn_82365BD8(&self->p[3], &other->p[3]);
    fn_82365BD8(&self->p[4], &other->p[4]);
    copyPtr_82254E40(&self->q, &other->q);
    return self;
}
