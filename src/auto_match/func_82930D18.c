typedef struct Impl_82930D18 Impl_82930D18;

typedef struct ImplVtbl_82930D18 {
    int (*equals)(Impl_82930D18 *self, Impl_82930D18 *other);
} ImplVtbl_82930D18;

struct Impl_82930D18 {
    ImplVtbl_82930D18 *vt;
};

typedef struct Obj_82930D18 {
    char pad0[0x4];
    int type; /* 0x04 */
    char pad8[0x8];
    int value10; /* 0x10 */
    unsigned int value14; /* 0x14 */
    Impl_82930D18 *impl18; /* 0x18 */
    Impl_82930D18 *impl1c; /* 0x1c */
    Impl_82930D18 *impl20; /* 0x20 */
} Obj_82930D18;

static __forceinline int ImplEquals(Impl_82930D18 *a, Impl_82930D18 *b)
{
    if (a != 0)
        return a->vt->equals(a, b);
    return 0 == b;
}

static __forceinline int SameType(Obj_82930D18 *self, Obj_82930D18 *other)
{
    return other != 0 && other->type == self->type;
}

unsigned char fn_82930D18(Obj_82930D18 *self, Obj_82930D18 *other)
{
    if (!SameType(self, other))
        return 0;
    if (self->value10 != other->value10
        || self->value14 != other->value14)
        return 0;
    if (ImplEquals(self->impl18, other->impl18)
        && ImplEquals(self->impl1c, other->impl1c)
        && ImplEquals(self->impl20, other->impl20))
        return 1;
    return 0;
}
