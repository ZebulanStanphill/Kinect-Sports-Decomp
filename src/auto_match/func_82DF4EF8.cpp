#include "havok/hkBase.h"
class hkpSerializedTrack1nInfo {
public:
 ~hkpSerializedTrack1nInfo();
 hkArray<void *> sectors;
 hkArray<hkpSerializedTrack1nInfo *> subtracks;
};
hkpSerializedTrack1nInfo::~hkpSerializedTrack1nInfo() {
 if ((sectors.m_capacityAndFlags & (int)0x80000000)==0) {
  for(int n=0;n<sectors.m_size;n++) {
   void *p=sectors[n];
   if(p) hkMemoryRouter::getInstance().heap().blockFree(p,0x200);
  }
 }
 if ((subtracks.m_capacityAndFlags & (int)0x80000000)==0) {
  for(int n=0;n<subtracks.m_size;n++) {
   hkpSerializedTrack1nInfo *p=subtracks[n];
   if(p) { p->~hkpSerializedTrack1nInfo(); hkMemoryRouter::getInstance().heap().blockFree(p,0x20); }
  }
 }
}
