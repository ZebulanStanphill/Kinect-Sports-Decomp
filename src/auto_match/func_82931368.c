typedef struct Impl_82931368 Impl_82931368;

typedef struct ImplVtbl_82931368 {
    int (*equals)(Impl_82931368 *self, Impl_82931368 *other);
} ImplVtbl_82931368;

struct Impl_82931368 {
    ImplVtbl_82931368 *vt;
};

typedef struct Obj_82931368 {
    char pad0[0x4];
    int type; /* 0x04 */
    char pad8[0x8];
    Impl_82931368 *impl10; /* 0x10 */
    Impl_82931368 *impl14; /* 0x14 */
    unsigned int value18; /* 0x18 */
    unsigned int value1c; /* 0x1c */
    unsigned int value20; /* 0x20 */
    Impl_82931368 *impl24; /* 0x24 */
} Obj_82931368;

static __forceinline int ImplEquals(Impl_82931368 *a, Impl_82931368 *b)
{
    if (a != 0)
        return a->vt->equals(a, b);
    return 0 == b;
}

static __forceinline int SameType(Obj_82931368 *self, Obj_82931368 *other)
{
    return other != 0 && other->type == self->type;
}

unsigned char fn_82931368(Obj_82931368 *self, Obj_82931368 *other)
{
    if (!SameType(self, other))
        return 0;
    if (self->value1c != other->value1c
        || self->value18 != other->value18
        || self->value20 != other->value20)
        return 0;
    if (ImplEquals(self->impl10, other->impl10)
        && ImplEquals(self->impl14, other->impl14)
        && ImplEquals(self->impl24, other->impl24))
        return 1;
    return 0;
}
