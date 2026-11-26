#include "havok/hkVector4.h"
#include "havok/hkpAction.h"
class hkpReorientAction: public hkpUnaryAction { public:
 hkVector4 rotationAxis,upAxis; float strength,damping;
 HK_FORCE_INLINE hkpReorientAction(hkpEntity *e,const hkVector4 &a,const hkVector4 &b,float s,float d):hkpUnaryAction(e,0) { rotationAxis=a; upAxis=b; strength=s; damping=d; }
};
extern "C" hkpReorientAction *fn_82DF4A98(hkpReorientAction *self, hkpEntity *e,const hkVector4 &a,const hkVector4 &b,float strength,float damping) { self->hkpReorientAction::hkpReorientAction(e,a,b,strength,damping); return self; }
