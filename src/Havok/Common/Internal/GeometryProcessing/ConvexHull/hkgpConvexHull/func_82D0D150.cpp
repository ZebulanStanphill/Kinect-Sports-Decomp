#include "havok/hkQuadReal.h"

class hkVector4 { public:
 __forceinline void set(float x, float y, float z, float w) {
  __vector4 t;
  t.vector4_f32[0] = x; t.vector4_f32[1] = y; t.vector4_f32[2] = z; t.vector4_f32[3] = w;
  q = t;
 }
 __forceinline float dot4xyz1(const hkVector4 &v) const {
  float r;
  __stvewx(__vaddfp(__vmsum3fp(q, v.q), __vspltw(q, 3)), &r, 0);
  return r;
 }
 __vector4 q;
};

class Shape_82D0D150;

extern "C" void fn_82D0C930(const Shape_82D0D150 *self, const hkVector4 &direction, hkVector4 &vertexOut);
extern "C" float fn_82D0D050(const Shape_82D0D150 *self, const hkVector4 &plane);

extern "C" float fn_82D0D150(const Shape_82D0D150 *self, const float *direction)
{
    hkVector4 plane;
    hkVector4 vertex;

    plane.set(direction[0], direction[1], direction[2], 0.0f);
    fn_82D0C930(self, plane, vertex);
    return plane.dot4xyz1(vertex) - fn_82D0D050(self, plane);
}
