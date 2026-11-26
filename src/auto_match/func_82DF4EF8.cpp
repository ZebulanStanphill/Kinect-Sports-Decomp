// hkpSerializedTrack1nInfo::~hkpSerializedTrack1nInfo: unless an array does not own its storage, frees every
// 0x200-byte sector and destroys and frees every 0x20-byte sub-track; then the arrays are destroyed.
#include "havok/hkpSerializedTrack1nInfo.h"

// Only what the destructor needs: hkpSerializedSubTrack1nInfo is an hkpSerializedTrack1nInfo with two ints.
struct hkpSerializedSubTrack1nInfo : public hkpSerializedTrack1nInfo {
    int m_sectorIndex;
    int m_offsetInSector;
};

hkpSerializedTrack1nInfo::~hkpSerializedTrack1nInfo() {
 if ((m_sectors.m_capacityAndFlags & (int)0x80000000)==0) {
  for(int n=0;n<m_sectors.m_size;n++) {
   hkpAgent1nSector *p=m_sectors[n];
   if(p) hkMemoryRouter::getInstance().heap().blockFree(p,0x200);
  }
 }
 if ((m_subTracks.m_capacityAndFlags & (int)0x80000000)==0) {
  for(int n=0;n<m_subTracks.m_size;n++) {
   hkpSerializedSubTrack1nInfo *p=m_subTracks[n];
   if(p) { p->~hkpSerializedSubTrack1nInfo(); hkMemoryRouter::getInstance().heap().blockFree(p,0x20); }
  }
 }
}
