#include "havok/hkBase.h"
extern "C" void fn_82CFF298(void *self);   // hkMemoryTrack::clear (out of line)

class hkMemoryTrack_82CFF478 {
public:
    int m_numBytesPerSector;
    int m_numBytesLastSector;
    hkArray<hkUint8 *> m_sectors;
};

extern "C" void fn_82CFF478(hkMemoryTrack_82CFF478 *self)
{
    fn_82CFF298(self);
    self->m_sectors.~hkArray<hkUint8 *>();
}
