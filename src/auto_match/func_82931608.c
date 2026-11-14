typedef struct Impl_82931608 Impl_82931608;

typedef struct ImplVtbl_82931608 {
    int (*equals)(Impl_82931608 *self, Impl_82931608 *other);
} ImplVtbl_82931608;

struct Impl_82931608 {
    ImplVtbl_82931608 *vt;
};

typedef struct Obj_82931608 {
    char pad0[0x4];
    int type; /* 0x04 */
    char pad8[0x8];
    Impl_82931608 *impl10; /* 0x10 */
    Impl_82931608 *impl14; /* 0x14 */
} Obj_82931608;

static __forceinline int ImplEquals(Impl_82931608 *a, Impl_82931608 *b)
{
    if (a != 0)
        return a->vt->equals(a, b);
    return 0 == b;
}

static __forceinline int SameType(Obj_82931608 *self, Obj_82931608 *other)
{
    return other != 0 && other->type == self->type;
}

unsigned char fn_82931608(Obj_82931608 *self, Obj_82931608 *other)
{
    if (!SameType(self, other))
        return 0;
    if (ImplEquals(self->impl10, other->impl10)
        && ImplEquals(self->impl14, other->impl14))
        return 1;
    return 0;
}
