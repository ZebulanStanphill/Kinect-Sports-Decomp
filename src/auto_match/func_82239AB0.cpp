typedef struct Impl_82239AB0 Impl_82239AB0;
typedef struct ImplVtbl_82239AB0 {
    Impl_82239AB0 *(*copy)(Impl_82239AB0 *self, void *where);
} ImplVtbl_82239AB0;
struct Impl_82239AB0 {
    ImplVtbl_82239AB0 *vt;
};

typedef struct Func_82239AB0 {
    unsigned int space[4];
    Impl_82239AB0 *impl;
    int f14;
} Func_82239AB0;

typedef struct Handler_82239AB0 {
    void *vt;
    char pad4[0x34];
    Func_82239AB0 f38;
    Func_82239AB0 f50;
    unsigned int f68[2];
} Handler_82239AB0;

typedef struct HandlerA_82239AB0 {
    Handler_82239AB0 base;
    unsigned int f70[2];
} HandlerA_82239AB0;

typedef struct HandlerB_82239AB0 {
    Handler_82239AB0 base;
    unsigned int f70[2];
} HandlerB_82239AB0;

typedef struct Obj_82239AB0 {
    void *vt;
    char pad4[0x24];
    void *vt28;                  /* 0x28 */
    int pad2c;
    char f30[0x318];             /* 0x30 */
    HandlerA_82239AB0 a;         /* 0x348 */
    HandlerB_82239AB0 b;         /* 0x3c0 */
} Obj_82239AB0;

extern "C" char lbl_82196C50[];
extern "C" char lbl_821968A4[];
extern "C" char lbl_82196C58[];
extern "C" char lbl_82197F34[];
extern "C" char lbl_82196C68[];

/* Each vtable address is rebuilt with lis/addi at every store in the original; the second
   name for the same symbol keeps MSVC from keeping it in a saved register. */
namespace v2 {
extern "C" char lbl_82196C58[];
extern "C" char lbl_82197F34[];
extern "C" char lbl_82196C68[];
}

extern "C" void fn_82239CB0(Obj_82239AB0 *self, const Obj_82239AB0 *src);
extern "C" void fn_82239D08(void *dst, const void *src);
extern "C" void fn_8223A4D8(Handler_82239AB0 *self, const Handler_82239AB0 *src);
extern "C" void fn_82365BD8(void *dst, const void *src);
extern "C" void fn_8223A060(void *dst, const void *src);

static __forceinline void CopyFunc_82239AB0(Func_82239AB0 *dst, const Func_82239AB0 *src)
{
    if (src->impl == 0) {
        dst->impl = 0;
    } else if ((void *)src->impl == (void *)src) {
        dst->impl = src->impl->vt->copy(src->impl, dst);
    } else {
        dst->impl = src->impl->vt->copy(src->impl, 0);
    }
}

static __forceinline void CopyHandler_82239AB0(Handler_82239AB0 *self, const Handler_82239AB0 *src, char *base, char *vt)
{
    fn_8223A4D8(self, src);
    self->vt = base;
    CopyFunc_82239AB0(&self->f38, &src->f38);
    CopyFunc_82239AB0(&self->f50, &src->f50);
    self->vt = vt;
    fn_82365BD8(self->f68, src->f68);
}

static __forceinline void CopyHandlerA_82239AB0(HandlerA_82239AB0 *self, const HandlerA_82239AB0 *src)
{
    CopyHandler_82239AB0(&self->base, &src->base, lbl_82196C58, lbl_82197F34);
    fn_82365BD8(self->f70, src->f70);
    self->base.vt = v2::lbl_82197F34;
}

extern "C" Obj_82239AB0 *fn_82239AB0(Obj_82239AB0 *self, const Obj_82239AB0 *src)
{
    fn_82239CB0(self, src);
    self->vt = lbl_82196C50;
    self->vt28 = lbl_821968A4;
    fn_82239D08(self->f30, src->f30);
    CopyHandlerA_82239AB0(&self->a, &src->a);
    CopyHandler_82239AB0(&self->b.base, &src->b.base, v2::lbl_82196C58, lbl_82196C68);
    self->b.base.vt = v2::lbl_82196C68;
    fn_8223A060(self->b.f70, src->b.f70);
    return self;
}
