#include "havok/hkBase.h"
#include "havok/hkTransform.h"
#include "havok/hkpShape.h"
class hkpConvexTransformShapeBase: public hkpConvexShape { public: hkpConvexTransformShapeBase(hkpShapeType,float,const hkpConvexShape *,hkpShapeContainer::ReferencePolicy); char pad[12]; };
class hkpConvexTransformShape: public hkpConvexTransformShapeBase { public:
 hkTransform transform;
 HK_FORCE_INLINE hkpConvexTransformShape(const hkpConvexShape *s,const hkTransform &t,hkpShapeContainer::ReferencePolicy policy):hkpConvexTransformShapeBase((hkpShapeType)12,s->m_radius,s,policy) { transform=t; }
};
extern "C" hkpConvexTransformShape *fn_82D3D180(hkpConvexTransformShape *self,const hkpConvexShape *s,const hkTransform &t,hkpShapeContainer::ReferencePolicy p) { self->hkpConvexTransformShape::hkpConvexTransformShape(s,t,p); return self; }
