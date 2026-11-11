// Havok convex shape: extent of the shape along a direction. Builds the plane (x, y, z, 0)
// from the direction, takes the supporting vertex's distance to it (fn_82D0C930) and
// subtracts the distance on the opposite side (fn_82D0D050).
typedef __declspec(passinreg) __declspec(align(16)) union __vector4 { float f[4]; unsigned int u[4]; } __vector4;
extern "C" __vector4 __vspltw(__vector4, unsigned int);
extern "C" __vector4 __vaddfp(__vector4, __vector4);
extern "C" __vector4 __vmsum3fp(__vector4, __vector4);
extern "C" void __stvewx(__vector4, void *, int);

class hkVector4 { public:
 __forceinline void set(float x, float y, float z, float w) {
  __vector4 t;
  t.f[0] = x; t.f[1] = y; t.f[2] = z; t.f[3] = w;
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
