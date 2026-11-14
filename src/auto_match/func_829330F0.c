typedef struct Impl_829330F0 Impl_829330F0;

typedef struct ImplVtbl_829330F0 {
    int (*equals)(Impl_829330F0 *self, Impl_829330F0 *other);
} ImplVtbl_829330F0;

struct Impl_829330F0 {
    ImplVtbl_829330F0 *vt;
};

typedef struct Value_829330F0 {
    int type;
    int pad4;
    double v;
} Value_829330F0;

int fn_82930800(const Value_829330F0 *a, const Value_829330F0 *b);

typedef struct Obj_829330F0 {
    char pad0[0x4];
    int type; /* 0x04 */
    char pad8[0x8];
    Impl_829330F0 *impl10; /* 0x10 */
    unsigned int value14; /* 0x14 */
    unsigned int value18; /* 0x18 */
    int value1c; /* 0x1c */
    Impl_829330F0 *impl20; /* 0x20 */
    Impl_829330F0 *impl24; /* 0x24 */
    int value28; /* 0x28 */
    unsigned int value2c; /* 0x2c */
    Value_829330F0 value; /* 0x30 */
} Obj_829330F0;

static __forceinline int ImplEquals(Impl_829330F0 *a, Impl_829330F0 *b)
{
    if (a != 0)
        return a->vt->equals(a, b);
    return 0 == b;
}

static __forceinline int SameType(Obj_829330F0 *self, Obj_829330F0 *other)
{
    return other != 0 && other->type == self->type;
}

unsigned char fn_829330F0(Obj_829330F0 *self, Obj_829330F0 *other)
{
    if (!SameType(self, other))
        return 0;
    if (self->value14 != other->value14
        || self->value18 != other->value18
        || self->value1c != other->value1c
        || self->value28 != other->value28
        || self->value2c != other->value2c
        || !fn_82930800(&self->value, &other->value))
        return 0;
    if (ImplEquals(self->impl10, other->impl10)
        && ImplEquals(self->impl20, other->impl20)
        && ImplEquals(self->impl24, other->impl24))
        return 1;
    return 0;
}
