#include "havok/hkBase.h"
typedef __declspec(passinreg) union __vector4 {float f[4]; unsigned int u[4];} __vector4;
extern "C" __vector4 __vxor(__vector4,__vector4);
class __declspec(align(16)) hkVector4 {public: __vector4 q; HK_FORCE_INLINE void zero(){q=__vxor(q,q);}};

class hkpEntity;
class __declspec(novtable) hkpUnaryAction:public hkReferencedObject {public:hkpUnaryAction(hkpEntity *,unsigned long);char action[0x14];};
class hkpReorientAction:public hkpUnaryAction {public:HK_FORCE_INLINE hkpReorientAction():hkpUnaryAction(0,0){strength=0.0f;damping=0.0f;rotation.zero();up.zero();}
 hkVector4 rotation,up;float strength,damping;
};
extern "C" hkpReorientAction *fn_82DF4A20(hkpReorientAction *self){self->hkpReorientAction::hkpReorientAction();return self;}
