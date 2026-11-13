typedef struct Impl_829317E8 Impl_829317E8;

typedef struct ImplVtbl_829317E8 {
    int (*equals)(Impl_829317E8 *self, Impl_829317E8 *other);
} ImplVtbl_829317E8;

struct Impl_829317E8 {
    ImplVtbl_829317E8 *vt;
};

typedef struct Obj_829317E8 {
    int pad0;
    int type;               /* 0x04 */
    char pad8[0x8];
    Impl_829317E8 *impl;    /* 0x10 */
} Obj_829317E8;

static __forceinline int ImplEquals(Impl_829317E8 *a, Impl_829317E8 *b)
{
    if (a != 0)
        return a->vt->equals(a, b);
    return 0 == b;
}

static __forceinline int SameType(Obj_829317E8 *self, Obj_829317E8 *other)
{
    return other != 0 && other->type == self->type;
}

unsigned char fn_829317E8(Obj_829317E8 *self, Obj_829317E8 *other)
{
    if (!SameType(self, other))
        return 0;
    return ImplEquals(self->impl, other->impl) != 0;
}
