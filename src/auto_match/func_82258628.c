typedef struct Impl_82258628 Impl_82258628;
typedef struct ImplVt_82258628 {
    Impl_82258628 *(*copy)(Impl_82258628 *self, void *where);
} ImplVt_82258628;
struct Impl_82258628 {
    ImplVt_82258628 *vt;
};

typedef struct Func_82258628 {
    int space[4];
    Impl_82258628 *impl;
    int pad;
} Func_82258628;

typedef struct Ref_82258628 {
    int v;
    void *p;
} Ref_82258628;

typedef struct Obj_82258628 {
    void *vt;
    int base[13];
    Func_82258628 f1;     /* 0x38 */
    Func_82258628 f2;     /* 0x50 */
    Ref_82258628 r1;      /* 0x68 */
    Ref_82258628 r2;      /* 0x70 */
} Obj_82258628;

extern void fn_8223A4D8(Obj_82258628 *dst, Obj_82258628 *src);
extern unsigned char fn_8223AAC0(void *p);
extern void fn_822315A0(void *p);
extern char lbl_82196C58[];
extern char lbl_821982A0[];

static __forceinline void copyFunc_82258628(Func_82258628 *d, Func_82258628 *s)
{
    if (s->impl == 0) {
        d->impl = 0;
    } else if (s->impl == (Impl_82258628 *)s) {
        d->impl = s->impl->vt->copy(s->impl, d);
    } else {
        d->impl = s->impl->vt->copy(s->impl, 0);
    }
}

static __forceinline void copyRef_82258628(Ref_82258628 *d, Ref_82258628 *s)
{
    d->v = 0;
    d->p = 0;
    {
        void *p = s->p;
        int v = s->v;
        if (p != 0 && fn_8223AAC0(p)) {
            if (d->p != 0) {
                fn_822315A0(d->p);
            }
            d->p = p;
            d->v = v;
        }
    }
}

Obj_82258628 *fn_82258628(Obj_82258628 *dst, Obj_82258628 *src)
{
    fn_8223A4D8(dst, src);
    dst->vt = lbl_82196C58;
    copyFunc_82258628(&dst->f1, &src->f1);
    copyFunc_82258628(&dst->f2, &src->f2);
    dst->vt = lbl_821982A0;
    copyRef_82258628(&dst->r1, &src->r1);
    copyRef_82258628(&dst->r2, &src->r2);
    return dst;
}
