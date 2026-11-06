typedef struct Impl_822541F8 Impl_822541F8;
typedef struct ImplVtbl_822541F8 {
    Impl_822541F8 *(*copy)(Impl_822541F8 *self, void *where);
} ImplVtbl_822541F8;
struct Impl_822541F8 {
    ImplVtbl_822541F8 *vt;
};

typedef struct Func_822541F8 {
    unsigned int space[4];
    Impl_822541F8 *impl;
    int f14;
} Func_822541F8;

typedef struct Ref_822541F8 {
    void *ptr;
    void *rep;
} Ref_822541F8;

typedef struct Obj_822541F8 {
    void *vt;
    char pad4[0x38 - 4];
    Func_822541F8 f38;
    Func_822541F8 f50;
    unsigned int f68[2];
    unsigned int f70[2];
    unsigned int f78[2];
    Ref_822541F8 f80;
    Ref_822541F8 f88;
    unsigned int f90[2];
    unsigned int f98[2];
} Obj_822541F8;

extern char lbl_82196C58[];
extern char lbl_82197F74[];
extern void fn_8223A4D8(Obj_822541F8 *self, const Obj_822541F8 *src);
extern unsigned char fn_8223AAC0(void *rep);
extern void fn_822315A0(void *rep);
extern void fn_82365BD8(void *dst, const void *src);

static __forceinline void CopyFunc_822541F8(Func_822541F8 *dst, const Func_822541F8 *src)
{
    if (src->impl == 0) {
        dst->impl = 0;
    } else if ((void *)src->impl == (void *)src) {
        dst->impl = src->impl->vt->copy(src->impl, dst);
    } else {
        dst->impl = src->impl->vt->copy(src->impl, 0);
    }
}

static __forceinline void CopyRef_822541F8(Ref_822541F8 *dst, const Ref_822541F8 *src)
{
    void *rep;
    void *ptr;

    dst->ptr = 0;
    dst->rep = 0;
    rep = src->rep;
    ptr = src->ptr;
    if (rep != 0 && fn_8223AAC0(rep)) {
        if (dst->rep != 0) {
            fn_822315A0(dst->rep);
        }
        dst->rep = rep;
        dst->ptr = ptr;
    }
}

Obj_822541F8 *fn_822541F8(Obj_822541F8 *self, const Obj_822541F8 *src)
{
    fn_8223A4D8(self, src);
    self->vt = lbl_82196C58;
    CopyFunc_822541F8(&self->f38, &src->f38);
    CopyFunc_822541F8(&self->f50, &src->f50);
    self->vt = lbl_82197F74;
    fn_82365BD8(self->f68, src->f68);
    fn_82365BD8(self->f70, src->f70);
    fn_82365BD8(self->f78, src->f78);
    CopyRef_822541F8(&self->f80, &src->f80);
    CopyRef_822541F8(&self->f88, &src->f88);
    fn_82365BD8(self->f90, src->f90);
    fn_82365BD8(self->f98, src->f98);
    return self;
}
