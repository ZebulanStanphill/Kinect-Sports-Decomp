typedef struct Impl_82930B00 Impl_82930B00;

typedef struct ImplVtbl_82930B00 {
    int (*equals)(Impl_82930B00 *self, Impl_82930B00 *other);
} ImplVtbl_82930B00;

struct Impl_82930B00 {
    ImplVtbl_82930B00 *vt;
};

typedef struct Obj_82930B00 {
    int pad0;
    int type;               /* 0x04 */
    char pad8[0x8];
    unsigned int a;         /* 0x10 */
    unsigned int b;         /* 0x14 */
    unsigned int c;         /* 0x18 */
    unsigned int d;         /* 0x1c */
    unsigned int f;         /* 0x20 */
    unsigned int e;         /* 0x24 */
    Impl_82930B00 *impl;    /* 0x28 */
} Obj_82930B00;

static __forceinline int ImplEquals(Impl_82930B00 *a, Impl_82930B00 *b)
{
    if (a != 0)
        return a->vt->equals(a, b);
    return 0 == b;
}

static __forceinline int SameType(Obj_82930B00 *self, Obj_82930B00 *other)
{
    return other != 0 && other->type == self->type;
}

unsigned char fn_82930B00(Obj_82930B00 *self, Obj_82930B00 *other)
{
    if (!SameType(self, other))
        return 0;
    if (self->a != other->a || self->b != other->b || self->c != other->c || self->d != other->d
        || self->e != other->e || self->f != other->f)
        return 0;
    return ImplEquals(self->impl, other->impl) != 0;
}
