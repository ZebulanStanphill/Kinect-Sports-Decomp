#include "havok/hkBase.h"
enum hkpShapeType {};
class hkpShapeContainer { public: enum ReferencePolicy {}; };
class hkpConvexShape: public hkReferencedObject { public: unsigned user,type; float m_radius; };
typedef __declspec(passinreg) __declspec(align(16)) union __vector4 { float f[4]; unsigned int u[4]; } __vector4;
extern "C" __vector4 __vxor(__vector4, __vector4);
extern "C" __vector4 __vspltw(__vector4, unsigned int);
extern "C" __vector4 __vaddfp(__vector4, __vector4);
extern "C" __vector4 __vsubfp(__vector4, __vector4);
extern "C" __vector4 __vmulfp(__vector4, __vector4);
class hkVector4 { public:
 HK_FORCE_INLINE void operator=(const hkVector4 &v) { q=v.q; }
 HK_FORCE_INLINE void setZero() { q=__vxor(q,q); }
 HK_FORCE_INLINE void setAll(float x) { q.f[0]=x; q=__vspltw(q,0); }
 __vector4 q;
};
class hkTransform { public: hkVector4 rotation[3],translation; HK_FORCE_INLINE void operator=(const hkTransform &b) { rotation[0]=b.rotation[0]; rotation[1]=b.rotation[1]; rotation[2]=b.rotation[2]; translation=b.translation; } };
class hkpConvexTransformShapeBase: public hkpConvexShape { public: hkpConvexTransformShapeBase(hkpShapeType,float,const hkpConvexShape *,hkpShapeContainer::ReferencePolicy); char pad[12]; };
class hkpConvexTransformShape: public hkpConvexTransformShapeBase { public:
 hkTransform transform;
 HK_FORCE_INLINE hkpConvexTransformShape(const hkpConvexShape *s,const hkTransform &t,hkpShapeContainer::ReferencePolicy policy):hkpConvexTransformShapeBase((hkpShapeType)12,s->m_radius,s,policy) { transform=t; }
};
extern "C" hkpConvexTransformShape *fn_82D3D180(hkpConvexTransformShape *self,const hkpConvexShape *s,const hkTransform &t,hkpShapeContainer::ReferencePolicy p) { self->hkpConvexTransformShape::hkpConvexTransformShape(s,t,p); return self; }
