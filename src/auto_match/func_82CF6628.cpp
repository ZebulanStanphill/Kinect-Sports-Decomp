// Havok hkQsTransform::isApproximatelyEqual: translation and scale within epsilon in x, y and z,
// rotation (flipped to the same hemisphere as the other one) within epsilon in all four components.
#include "havok/hkBaseTypes.h"
typedef unsigned int hkBool32;
typedef __declspec(passinreg) __declspec(align(16)) union __vector4 { float f[4]; unsigned int u[4]; } __vector4;
extern "C" {
__vector4 __lvlx(const void *base, int offset);
__vector4 __vspltw(__vector4, unsigned int);
__vector4 __vspltisw(int);
__vector4 __vsubfp(__vector4, __vector4);
__vector4 __vmulfp(__vector4, __vector4);
__vector4 __vmsum4fp(__vector4, __vector4);
__vector4 __vand(__vector4, __vector4);
__vector4 __vor(__vector4, __vector4);
__vector4 __vcmpgefp(__vector4, __vector4);
__vector4 __vcmpequwR(__vector4, __vector4, unsigned int *);
void __stvewx(__vector4, void *, int);
extern const __vector4 lbl_821CA820;        // sign-clearing mask
extern __vector4 lbl_8323B330[16];          // per-mask vectors OR-ed in before the all-set test
}

class hkSimdReal { public:
 __forceinline hkSimdReal(const float &x) { r = __vspltw(__lvlx(&x, 0), 0); }
 __forceinline hkSimdReal(__vector4 v) : r(v) {}
 __forceinline operator float() const { float f; __stvewx(r, &f, 0); return f; }
 __vector4 r;
};

class hkVector4Comparison { public:
 enum Mask { MASK_XYZ = 14, MASK_XYZW = 15 };
 __forceinline hkBool32 allAreSet(Mask m) const {
  unsigned int cr;
  __vcmpequwR(__vor(mask, lbl_8323B330[m]), __vspltisw(-1), &cr);
  return cr & 0x80;
 }
 __vector4 mask;
};

class hkVector4 { public:
 __forceinline void operator=(const hkVector4 &v) { q = v.q; }
 __forceinline void setAll(float v) { q.f[0] = v; q = __vspltw(q, 0); }
 __forceinline void setSub4(const hkVector4 &a, const hkVector4 &b) { q = __vsubfp(a.q, b.q); }
 __forceinline void setAbs4(const hkVector4 &a) { q = __vand(a.q, lbl_821CA820); }
 __forceinline void mul4(hkSimdReal s) { q = __vmulfp(q, s.r); }
 __forceinline hkSimdReal dot4(const hkVector4 &a) const { return hkSimdReal(__vmsum4fp(q, a.q)); }
 __forceinline hkVector4Comparison compareLessThanEqual4(const hkVector4 &a) const {
  hkVector4Comparison c;
  c.mask = __vcmpgefp(a.q, q);
  return c;
 }
 __forceinline hkBool32 equals3(const hkVector4 &v, float epsilon) const {
  hkVector4 t;
  t.setSub4(*this, v);
  t.setAbs4(t);
  hkVector4 e;
  e.setAll(epsilon);
  return t.compareLessThanEqual4(e).allAreSet(hkVector4Comparison::MASK_XYZ);
 }
 __forceinline hkBool32 equals4(const hkVector4 &v, float epsilon) const {
  hkVector4 t;
  t.setSub4(*this, v);
  t.setAbs4(t);
  hkVector4 e;
  e.setAll(epsilon);
  return t.compareLessThanEqual4(e).allAreSet(hkVector4Comparison::MASK_XYZW);
 }
 __vector4 q;
};

class hkQuaternion { public:
 hkVector4 m_vec;
};

class hkQsTransform { public:
 hkVector4 m_translation;
 hkQuaternion m_rotation;
 hkVector4 m_scale;
};

extern "C" hkBool fn_82CF6628(const hkQsTransform *self, const hkQsTransform &other, float epsilon)
{
    if (!self->m_translation.equals3(other.m_translation, epsilon)) {
        return false;
    }
    if (!self->m_scale.equals3(other.m_scale, epsilon)) {
        return false;
    }
    hkVector4 rot;
    rot = self->m_rotation.m_vec;
    if (rot.dot4(other.m_rotation.m_vec) < 0.0f) {
        rot.mul4(-1.0f);
    }
    return rot.equals4(other.m_rotation.m_vec, epsilon) != 0;
}
