typedef struct Impl_82931BF0 Impl_82931BF0;

typedef struct ImplVtbl_82931BF0 {
    int (*equals)(Impl_82931BF0 *self, Impl_82931BF0 *other);
} ImplVtbl_82931BF0;

struct Impl_82931BF0 {
    ImplVtbl_82931BF0 *vt;
};

typedef struct Obj_82931BF0 {
    int pad0;
    int type;               /* 0x04 */
    char pad8[0x8];
    Impl_82931BF0 *impl;    /* 0x10 */
    unsigned int id;        /* 0x14 */
} Obj_82931BF0;

static __forceinline int ImplEquals(Impl_82931BF0 *a, Impl_82931BF0 *b)
{
    if (a != 0)
        return a->vt->equals(a, b);
    return 0 == b;
}

static __forceinline int SameType(Obj_82931BF0 *self, Obj_82931BF0 *other)
{
    return other != 0 && other->type == self->type;
}

unsigned char fn_82931BF0(Obj_82931BF0 *self, Obj_82931BF0 *other)
{
    if (!SameType(self, other))
        return 0;
    if (self->id != other->id)
        return 0;
    return ImplEquals(self->impl, other->impl) != 0;
}
