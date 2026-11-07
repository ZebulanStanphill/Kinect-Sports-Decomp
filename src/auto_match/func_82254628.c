typedef struct Impl_82254628 Impl_82254628;
typedef struct ImplVt_82254628 {
    Impl_82254628 *(*copy)(Impl_82254628 *self, void *where);
} ImplVt_82254628;
struct Impl_82254628 {
    ImplVt_82254628 *vt;
};

typedef struct Func_82254628 {
    int space[4];
    Impl_82254628 *impl;
    int pad;
} Func_82254628;

typedef struct Ref_82254628 {
    int v;
    void *p;
} Ref_82254628;

typedef struct Obj_82254628 {
    void *vt;
    int base[13];
    Func_82254628 f1;     /* 0x38 */
    Func_82254628 f2;     /* 0x50 */
    int h1[2];            /* 0x68 */
    int h2[2];            /* 0x70 */
    int h3[2];            /* 0x78 */
    Ref_82254628 r1;      /* 0x80 */
    Ref_82254628 r2;      /* 0x88 */
} Obj_82254628;

extern void fn_8223A4D8(Obj_82254628 *dst, Obj_82254628 *src);
extern unsigned char fn_8223AAC0(void *p);
extern void fn_822315A0(void *p);
extern void fn_82365BD8(void *dst, void *src);
extern char lbl_82196C58[];
extern char lbl_82197F94[];

static __forceinline void copyFunc_82254628(Func_82254628 *d, Func_82254628 *s)
{
    if (s->impl == 0) {
        d->impl = 0;
    } else if (s->impl == (Impl_82254628 *)s) {
        d->impl = s->impl->vt->copy(s->impl, d);
    } else {
        d->impl = s->impl->vt->copy(s->impl, 0);
    }
}

static __forceinline void copyRef_82254628(Ref_82254628 *d, Ref_82254628 *s)
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

Obj_82254628 *fn_82254628(Obj_82254628 *dst, Obj_82254628 *src)
{
    fn_8223A4D8(dst, src);
    dst->vt = lbl_82196C58;
    copyFunc_82254628(&dst->f1, &src->f1);
    copyFunc_82254628(&dst->f2, &src->f2);
    dst->vt = lbl_82197F94;
    fn_82365BD8(dst->h1, src->h1);
    fn_82365BD8(dst->h2, src->h2);
    fn_82365BD8(dst->h3, src->h3);
    copyRef_82254628(&dst->r1, &src->r1);
    copyRef_82254628(&dst->r2, &src->r2);
    return dst;
}
