// Havok hkTransform::isApproximatelyEqual: the rotations compare equal (fn_82CEBF80,
// hkMatrix3::isApproximatelyEqual) and the translations are within epsilon in x, y and z.
#include "havok/hkQuadReal.h"

class hkVector4Comparison { public:
 enum Mask { MASK_XYZ = 14 };
 __forceinline hkBool32 allAreSet(Mask m) const {
  unsigned int cr;
  __vcmpequwR(__vor(mask, lbl_8323B330[m]), __vspltisw(-1), &cr);
  return cr & 0x80;
 }
 __vector4 mask;
};

class hkVector4 { public:
 __forceinline void setAll(float v) { q.vector4_f32[0] = v; q = __vspltw(q, 0); }
 __forceinline void setSub4(const hkVector4 &a, const hkVector4 &b) { q = __vsubfp(a.q, b.q); }
 __forceinline void setAbs4(const hkVector4 &a) { q = __vand(a.q, lbl_821CA820); }
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
 __vector4 q;
};

class hkRotation { public:
 hkVector4 col[3];
};

class hkTransform { public:
 hkRotation rotation;
 hkVector4 translation;
};

extern "C" hkBool fn_82CEBF80(const hkRotation *self, const hkRotation &other, float epsilon);

extern "C" hkBool fn_82CE6640(const hkTransform *self, const hkTransform &other, float epsilon)
{
    return fn_82CEBF80(&self->rotation, other.rotation, epsilon)
        && self->translation.equals3(other.translation, epsilon);
}
