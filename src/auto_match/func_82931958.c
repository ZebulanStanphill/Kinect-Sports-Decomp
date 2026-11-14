typedef struct Impl_82931958 Impl_82931958;

typedef struct ImplVtbl_82931958 {
    int (*equals)(Impl_82931958 *self, Impl_82931958 *other);
} ImplVtbl_82931958;

struct Impl_82931958 {
    ImplVtbl_82931958 *vt;
};

typedef struct Obj_82931958 {
    char pad0[0x4];
    int type; /* 0x04 */
    char pad8[0x8];
    unsigned int value10; /* 0x10 */
    Impl_82931958 *impl14; /* 0x14 */
    Impl_82931958 *impl18; /* 0x18 */
    Impl_82931958 *impl1c; /* 0x1c */
} Obj_82931958;

static __forceinline int ImplEquals(Impl_82931958 *a, Impl_82931958 *b)
{
    if (a != 0)
        return a->vt->equals(a, b);
    return 0 == b;
}

static __forceinline int SameType(Obj_82931958 *self, Obj_82931958 *other)
{
    return other != 0 && other->type == self->type;
}

unsigned char fn_82931958(Obj_82931958 *self, Obj_82931958 *other)
{
    if (!SameType(self, other))
        return 0;
    if (self->value10 != other->value10)
        return 0;
    if (ImplEquals(self->impl14, other->impl14)
        && ImplEquals(self->impl18, other->impl18)
        && ImplEquals(self->impl1c, other->impl1c))
        return 1;
    return 0;
}
