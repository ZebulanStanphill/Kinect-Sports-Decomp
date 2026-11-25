#include "havok/hkpShape.h"
#include "havok/hkVector4.h"
class hkpMultiSphereShape : public hkpShape { public:
 HK_FORCE_INLINE hkpMultiSphereShape(const hkVector4 *spheres, int count) : hkpShape((hkpShapeType)22) {
  for(int i=0;i<count;++i) m_spheres[i]=spheres[i];
  m_numSpheres=count;
 }
 int m_numSpheres;
 hkVector4 m_spheres[8];
};
extern "C" hkpMultiSphereShape *fn_82D4C700(hkpMultiSphereShape *self, const hkVector4 *spheres, int count) { self->hkpMultiSphereShape::hkpMultiSphereShape(spheres,count); return self; }
