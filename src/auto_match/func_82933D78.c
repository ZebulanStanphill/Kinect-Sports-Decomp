typedef struct Impl_82933D78 Impl_82933D78;

typedef struct ImplVtbl_82933D78 {
    int (*equals)(Impl_82933D78 *self, Impl_82933D78 *other);
} ImplVtbl_82933D78;

struct Impl_82933D78 {
    ImplVtbl_82933D78 *vt;
};

typedef struct Obj_82933D78 {
    char pad0[0x4];
    int type; /* 0x04 */
    char pad8[0x8];
    Impl_82933D78 *impl10; /* 0x10 */
    Impl_82933D78 *impl14; /* 0x14 */
    Impl_82933D78 *impl18; /* 0x18 */
} Obj_82933D78;

static __forceinline int ImplEquals(Impl_82933D78 *a, Impl_82933D78 *b)
{
    if (a != 0)
        return a->vt->equals(a, b);
    return 0 == b;
}

static __forceinline int SameType(Obj_82933D78 *self, Obj_82933D78 *other)
{
    return other != 0 && other->type == self->type;
}

unsigned char fn_82933D78(Obj_82933D78 *self, Obj_82933D78 *other)
{
    if (!SameType(self, other))
        return 0;
    if (ImplEquals(self->impl10, other->impl10)
        && ImplEquals(self->impl14, other->impl14)
        && ImplEquals(self->impl18, other->impl18))
        return 1;
    return 0;
}
