typedef struct Impl_82932B80 Impl_82932B80;

typedef struct ImplVtbl_82932B80 {
    int (*equals)(Impl_82932B80 *self, Impl_82932B80 *other);
} ImplVtbl_82932B80;

struct Impl_82932B80 {
    ImplVtbl_82932B80 *vt;
};

typedef struct Obj_82932B80 {
    char pad0[0x4];
    int type; /* 0x04 */
    char pad8[0x8];
    int value10; /* 0x10 */
    Impl_82932B80 *impl14; /* 0x14 */
    Impl_82932B80 *impl18; /* 0x18 */
    Impl_82932B80 *impl1c; /* 0x1c */
    Impl_82932B80 *impl20; /* 0x20 */
    Impl_82932B80 *impl24; /* 0x24 */
    Impl_82932B80 *impl28; /* 0x28 */
    Impl_82932B80 *impl2c; /* 0x2c */
    unsigned int value30; /* 0x30 */
} Obj_82932B80;

static __forceinline int ImplEquals(Impl_82932B80 *a, Impl_82932B80 *b)
{
    if (a != 0)
        return a->vt->equals(a, b);
    return 0 == b;
}

static __forceinline int SameType(Obj_82932B80 *self, Obj_82932B80 *other)
{
    return other != 0 && other->type == self->type;
}

unsigned char fn_82932B80(Obj_82932B80 *self, Obj_82932B80 *other)
{
    if (!SameType(self, other))
        return 0;
    if (self->value10 != other->value10
        || self->value30 != other->value30)
        return 0;
    if (ImplEquals(self->impl14, other->impl14)
        && ImplEquals(self->impl18, other->impl18)
        && ImplEquals(self->impl1c, other->impl1c)
        && ImplEquals(self->impl20, other->impl20)
        && ImplEquals(self->impl24, other->impl24)
        && ImplEquals(self->impl28, other->impl28)
        && ImplEquals(self->impl2c, other->impl2c))
        return 1;
    return 0;
}
