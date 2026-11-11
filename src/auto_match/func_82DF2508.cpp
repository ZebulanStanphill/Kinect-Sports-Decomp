// Havok: sets the vector at +0x30; when the new value differs from the old one by more
// than the epsilon lbl_82006848 in x, y or z (hkVector4::equals3 shape), the owner at +0x18
// is notified through fn_82D89BD8 first, if it has one and that owner is attached (+8).
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

extern "C" {
__vector4 __vspltw(__vector4 v, unsigned int i);
__vector4 __vspltisw(int value);
__vector4 __vsubfp(__vector4 a, __vector4 b);
__vector4 __vand(__vector4 a, __vector4 b);
__vector4 __vor(__vector4 a, __vector4 b);
__vector4 __vcmpgefp(__vector4 a, __vector4 b);
__vector4 __vcmpequwR(__vector4 a, __vector4 b, unsigned int *cr);

extern const __vector4 lbl_821CA820;     // 0x7fffffff in every word
extern const __vector4 lbl_8323B330[16]; // hkVector4Comparison mask table
extern const float lbl_82006848;         // default epsilon
}

class hkVector4Comparison {
public:
    enum Mask { MASK_XYZ = 14 };
    __forceinline int allAreSet(Mask m) const
    {
        unsigned int cr;
        __vcmpequwR(__vor(mask, lbl_8323B330[m]), __vspltisw(-1), &cr);
        return cr & 0x80;
    }
    __vector4 mask;
};

class hkVector4 {
public:
    __forceinline void operator=(const hkVector4 &v) { q = v.q; }
    __forceinline void setAll(float x) { q.vector4_f32[0] = x; q = __vspltw(q, 0); }
    __forceinline void setSub4(const hkVector4 &a, const hkVector4 &b) { q = __vsubfp(a.q, b.q); }
    __forceinline void setAbs4(const hkVector4 &a) { q = __vand(a.q, lbl_821CA820); }
    __forceinline hkVector4Comparison compareLessThanEqual4(const hkVector4 &a) const
    {
        hkVector4Comparison c;
        c.mask = __vcmpgefp(a.q, q);
        return c;
    }
    __forceinline int equals3(const hkVector4 &v, float epsilon) const
    {
        hkVector4 t;
        hkVector4 e;
        t.setSub4(*this, v);
        t.setAbs4(t);
        e.setAll(epsilon);
        return t.compareLessThanEqual4(e).allAreSet(hkVector4Comparison::MASK_XYZ);
    }
    __vector4 q;
};

struct Owner_82DF2508 {
    char pad00[8];
    void *world;                     // 0x08
};

struct Obj_82DF2508 {
    char pad00[0x18];
    Owner_82DF2508 *owner;           // 0x18
    char pad1c[0x14];
    hkVector4 value;                 // 0x30
};

extern "C" void fn_82D89BD8(Owner_82DF2508 *owner);

extern "C" void fn_82DF2508(Obj_82DF2508 *self, const hkVector4 &value)
{
    if (!value.equals3(self->value, lbl_82006848)) {
        if (self->owner != 0 && self->owner->world != 0) {
            fn_82D89BD8(self->owner);
        }
    }
    self->value = value;
}
