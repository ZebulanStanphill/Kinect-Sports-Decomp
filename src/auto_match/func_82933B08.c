typedef struct Impl_82933B08 Impl_82933B08;

typedef struct ImplVtbl_82933B08 {
    int (*equals)(Impl_82933B08 *self, Impl_82933B08 *other);
} ImplVtbl_82933B08;

struct Impl_82933B08 {
    ImplVtbl_82933B08 *vt;
};

typedef struct Obj_82933B08 {
    char pad0[0x4];
    int type; /* 0x04 */
    char pad8[0x8];
    Impl_82933B08 *impl10; /* 0x10 */
    Impl_82933B08 *impl14; /* 0x14 */
    Impl_82933B08 *impl18; /* 0x18 */
    int value1c; /* 0x1c */
} Obj_82933B08;

static __forceinline int ImplEquals(Impl_82933B08 *a, Impl_82933B08 *b)
{
    if (a != 0)
        return a->vt->equals(a, b);
    return 0 == b;
}

static __forceinline int SameType(Obj_82933B08 *self, Obj_82933B08 *other)
{
    return other != 0 && other->type == self->type;
}

unsigned char fn_82933B08(Obj_82933B08 *self, Obj_82933B08 *other)
{
    if (!SameType(self, other))
        return 0;
    if (self->value1c != other->value1c)
        return 0;
    if (ImplEquals(self->impl10, other->impl10)
        && ImplEquals(self->impl14, other->impl14)
        && ImplEquals(self->impl18, other->impl18))
        return 1;
    return 0;
}
