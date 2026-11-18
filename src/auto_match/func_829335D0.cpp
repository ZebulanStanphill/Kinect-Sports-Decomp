/* Value equality: same type and same 16-byte value, or (kind 4) equal referenced objects. */
extern "C" int memcmp(const void *a, const void *b, unsigned int size);

struct Impl_829335D0 {
    virtual int Equals(const Impl_829335D0 *other) const;
};

struct Value_829335D0 {
    int kind; /* 0x0 */
    int pad4;
    Impl_829335D0 *impl; /* 0x8 */
    int padc;
};

static __forceinline int ImplEquals(const Impl_829335D0 *a, const Impl_829335D0 *b)
{
    if (a != 0) {
        return a->Equals(b);
    }
    return 0 == b;
}

struct Obj_829335D0 {
    int pad0;
    int type; /* 0x4 */
    char pad8[0x8];
    Value_829335D0 value; /* 0x10 */

    bool Equals(const Obj_829335D0 *other) const;
};

bool Obj_829335D0::Equals(const Obj_829335D0 *other) const
{
    if (other == 0 || other->type != type) {
        return false;
    }
    if (value.kind != other->value.kind) {
        return false;
    }
    if (memcmp(&value, &other->value, sizeof(Value_829335D0)) == 0) {
        return true;
    }
    if (value.kind == 4 && ImplEquals(value.impl, other->value.impl)) {
        return true;
    }
    return false;
}
