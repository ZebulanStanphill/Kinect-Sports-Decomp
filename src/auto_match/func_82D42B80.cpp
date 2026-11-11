// Havok finish constructor of an object with a rotation quaternion (+0x20) and a translation
// (+0x30), probably hkpExtendedMeshShape::ShapesSubpart:
// when finishing, recomputes the flags kept in the translation's w (bit 0: translation is not
// equal to the global vector lbl_8323B1A0 within 0.001, bit 1: rotation angle is not below 0.001).
#include "havok/hkBaseTypes.h"
typedef unsigned int hkBool32;
typedef __declspec(passinreg) __declspec(align(16)) union __vector4 { float f[4]; unsigned int u[4]; } __vector4;
extern "C" {
__vector4 __vspltw(__vector4, unsigned int);
__vector4 __vspltisw(int);
__vector4 __vsubfp(__vector4, __vector4);
__vector4 __vand(__vector4, __vector4);
__vector4 __vor(__vector4, __vector4);
__vector4 __vcmpgefp(__vector4, __vector4);
__vector4 __vcmpequwR(__vector4, __vector4, unsigned int *);
extern const __vector4 lbl_821CA820;        // sign-clearing mask
extern __vector4 lbl_8323B330[16];          // per-mask vectors OR-ed in before the all-set test (.data, filled at run time)
extern __vector4 lbl_8323B1A0;              // global vector the translation is compared with (.data, filled at run time)
extern const float lbl_82006848;
}

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
 __forceinline void setAll(float v) { q.f[0] = v; q = __vspltw(q, 0); }
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
 __forceinline void setInt24W(int value) { q.u[3] = (unsigned int)value | 0x3f000000; }
 __vector4 q;
};

class hkQuaternion { public:
 hkVector4 vec;
};

extern "C" float fn_82CE5620(const hkQuaternion *self);    // hkQuaternion::getAngle

class Subpart_82D42B80 { public:
 char pad0[0x20];
 hkQuaternion rotation;      // 0x20
 hkVector4 translation;      // 0x30
};

extern "C" Subpart_82D42B80 *fn_82D42B80(Subpart_82D42B80 *self, int finishing)
{
    if (finishing) {
        float eps = lbl_82006848;
        int flags = self->translation.equals3(*(const hkVector4 *)&lbl_8323B1A0, eps) ? 0 : 1;
        int rot = fn_82CE5620(&self->rotation) < eps ? 0 : 2;
        self->translation.setInt24W(rot | flags);
    }
    return self;
}
