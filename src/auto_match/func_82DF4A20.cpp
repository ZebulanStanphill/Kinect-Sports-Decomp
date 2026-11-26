#include "havok/hkBase.h"
#include "havok/hkQuadReal.h"
#include "havok/hkpAction.h"
class __declspec(align(16)) hkVector4 {public: __vector4 q; HK_FORCE_INLINE void zero(){q=__vxor(q,q);}};

class hkpReorientAction:public hkpUnaryAction {public:HK_FORCE_INLINE hkpReorientAction():hkpUnaryAction(0,0){strength=0.0f;damping=0.0f;rotation.zero();up.zero();}
 hkVector4 rotation,up;float strength,damping;
};
extern "C" hkpReorientAction *fn_82DF4A20(hkpReorientAction *self){self->hkpReorientAction::hkpReorientAction();return self;}
