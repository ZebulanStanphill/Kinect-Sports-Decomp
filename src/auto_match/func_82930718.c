typedef struct Impl_82930718 Impl_82930718;

typedef struct ImplVtbl_82930718 {
    int (*equals)(Impl_82930718 *self, Impl_82930718 *other);
} ImplVtbl_82930718;

struct Impl_82930718 {
    ImplVtbl_82930718 *vt;
};

typedef struct Obj_82930718 {
    int pad0;
    int type;               /* 0x04 */
    Impl_82930718 *first;   /* 0x08 */
    Impl_82930718 *second;  /* 0x0c */
    unsigned int id0;       /* 0x10 */
    unsigned int id1;       /* 0x14 */
} Obj_82930718;

static __forceinline int ImplEquals(Impl_82930718 *a, Impl_82930718 *b)
{
    if (a != 0)
        return a->vt->equals(a, b);
    return 0 == b;
}

static __forceinline int SameType(Obj_82930718 *self, Obj_82930718 *other)
{
    return other != 0 && other->type == self->type;
}

unsigned char fn_82930718(Obj_82930718 *self, Obj_82930718 *other)
{
    if (!SameType(self, other))
        return 0;
    if (self->id0 != other->id0)
        return 0;
    if (self->id1 != other->id1)
        return 0;
    if (!ImplEquals(self->first, other->first))
        return 0;
    return ImplEquals(self->second, other->second) != 0;
}
