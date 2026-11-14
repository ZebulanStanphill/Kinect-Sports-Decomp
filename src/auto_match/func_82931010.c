typedef struct Impl_82931010 Impl_82931010;

typedef struct ImplVtbl_82931010 {
    int (*equals)(Impl_82931010 *self, Impl_82931010 *other);
} ImplVtbl_82931010;

struct Impl_82931010 {
    ImplVtbl_82931010 *vt;
};

typedef struct Obj_82931010 {
    int pad0;
    int type;               /* 0x04 */
    char pad8[0x8];
    int a;                  /* 0x10 */
    Impl_82931010 *impl0;   /* 0x14 */
    Impl_82931010 *impl1;   /* 0x18 */
    Impl_82931010 *impl2;   /* 0x1c */
    Impl_82931010 *impl3;   /* 0x20 */
    unsigned int b;         /* 0x24 */
    unsigned int c;         /* 0x28 */
    int d;                  /* 0x2c */
    int e;                  /* 0x30 */
} Obj_82931010;

static __forceinline int ImplEquals(Impl_82931010 *a, Impl_82931010 *b)
{
    if (a != 0)
        return a->vt->equals(a, b);
    return 0 == b;
}

static __forceinline int SameType(Obj_82931010 *self, Obj_82931010 *other)
{
    return other != 0 && other->type == self->type;
}

unsigned char fn_82931010(Obj_82931010 *self, Obj_82931010 *other)
{
    if (!SameType(self, other))
        return 0;
    if (self->a != other->a || self->b != other->b || self->c != other->c || self->d != other->d
        || self->e != other->e)
        return 0;
    if (ImplEquals(self->impl0, other->impl0) && ImplEquals(self->impl1, other->impl1)
        && ImplEquals(self->impl2, other->impl2) && ImplEquals(self->impl3, other->impl3))
        return 1;
    return 0;
}
