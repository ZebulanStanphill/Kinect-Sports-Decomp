#include "havok/hkpShape.h"
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
class hkpEntity;
class hkpBinaryAction: public hkReferencedObject { public: hkpBinaryAction(hkpEntity *,hkpEntity *,hkUlong); char pad[24]; };
class hkpUnaryAction: public hkReferencedObject { public: hkpUnaryAction(hkpEntity *,hkUlong); char pad[24]; };
class hkpReorientAction: public hkpUnaryAction { public:
 hkVector4 rotationAxis,upAxis; float strength,damping;
 HK_FORCE_INLINE hkpReorientAction(hkpEntity *e,const hkVector4 &a,const hkVector4 &b,float s,float d):hkpUnaryAction(e,0) { rotationAxis=a; upAxis=b; strength=s; damping=d; }
};
extern "C" hkpReorientAction *fn_82DF4A98(hkpReorientAction *self, hkpEntity *e,const hkVector4 &a,const hkVector4 &b,float strength,float damping) { self->hkpReorientAction::hkpReorientAction(e,a,b,strength,damping); return self; }
