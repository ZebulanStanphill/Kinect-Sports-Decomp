#include "havok/hkBase.h"
extern "C" const float lbl_82002AE0;
class hkpWorldCinfo : public hkReferencedObject {
public:
 HK_FORCE_INLINE hkpWorldCinfo(hkFinishLoadedObjectFlag f) : hkReferencedObject(f) {
  if(f.m_finishing && value==0.0f) value=lbl_82002AE0;
 }
 char pad[0x1c];float value;
};
extern "C" void fn_82D8E840(hkpWorldCinfo *self,int finishing) {hkFinishLoadedObjectFlag f;f.m_finishing=finishing; self->hkpWorldCinfo::hkpWorldCinfo(f);}
