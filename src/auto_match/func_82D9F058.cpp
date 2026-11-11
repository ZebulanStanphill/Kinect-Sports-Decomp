// Havok: samples an hkArray<hkVector4> at a fractional index, interpolating linearly
// between neighbouring elements (the last element is returned as it is).
typedef __declspec(passinreg) __declspec(align(16)) union __vector4 { float f[4]; unsigned int u[4]; } __vector4;
extern "C" __vector4 __lvlx(const void *, int);
extern "C" __vector4 __vspltw(__vector4, unsigned int);
extern "C" __vector4 __vsubfp(__vector4, __vector4);
extern "C" __vector4 __vmulfp(__vector4, __vector4);
extern "C" __vector4 __vmaddfp(__vector4, __vector4, __vector4);

extern "C" const __vector4 lbl_82132D10;    // Havok's (1, 1, 1, 1)

class hkSimdReal { public:
 __forceinline hkSimdReal(const float &x) { q = __vspltw(__lvlx(&x, 0), 0); }
 __vector4 q;
};

class hkVector4 { public:
 __forceinline void operator=(const hkVector4 &v) { q = v.q; }
 __forceinline void setInterpolate4(const hkVector4 &a, const hkVector4 &b, const hkSimdReal &t) {
  __vector4 bt = __vspltw(t.q, 0);
  __vector4 at = __vsubfp(lbl_82132D10, bt);
  q = __vmaddfp(bt, b.q, __vmulfp(at, a.q));
 }
 __vector4 q;
};

struct Samples_82D9F058 {
    char pad0[0x20];
    hkVector4 *data;     // hkArray<hkVector4>
    int size;
};

extern "C" int fn_82CECDD8(float);

extern "C" void fn_82D9F058(const Samples_82D9F058 *self, float t, hkVector4 &out)
{
    int i;
    int next;
    float frac;

    if (t < 0.0f) {
        i = 0;
    } else {
        i = fn_82CECDD8(t);
    }
    frac = t - (float)i;
    next = i + 1;
    if (next < self->size) {
        out.setInterpolate4(self->data[i], self->data[next], frac);
    } else {
        out = self->data[i];
    }
}
