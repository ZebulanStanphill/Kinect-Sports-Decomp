typedef struct Impl_82932FA8 Impl_82932FA8;

typedef struct ImplVtbl_82932FA8 {
    int (*equals)(Impl_82932FA8 *self, Impl_82932FA8 *other);
} ImplVtbl_82932FA8;

struct Impl_82932FA8 {
    ImplVtbl_82932FA8 *vt;
};

typedef struct Obj_82932FA8 {
    int pad0;
    int type;               /* 0x04 */
    char pad8[0x8];
    int id;                 /* 0x10 */
    Impl_82932FA8 *impl;    /* 0x14 */
} Obj_82932FA8;

static __forceinline int ImplEquals(Impl_82932FA8 *a, Impl_82932FA8 *b)
{
    if (a != 0)
        return a->vt->equals(a, b);
    return 0 == b;
}

static __forceinline int SameType(Obj_82932FA8 *self, Obj_82932FA8 *other)
{
    return other != 0 && other->type == self->type;
}

unsigned char fn_82932FA8(Obj_82932FA8 *self, Obj_82932FA8 *other)
{
    if (!SameType(self, other))
        return 0;
    if (self->id != other->id)
        return 0;
    return ImplEquals(self->impl, other->impl) != 0;
}
