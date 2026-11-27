// hkPackfileObjectUpdateTracker::addChunk(void *p, int n, HK_MEMORY_CLASS c) (slot +0x10): forwards to the
// packfile data (82E0E320, hkPackfileData's addChunk).
#include "havok/hkPackfileObjectUpdateTracker.h"

extern "C" void fn_82E0E320(hkPackfileData *data, void *p, int n, HK_MEMORY_CLASS c);

void hkPackfileObjectUpdateTracker::addChunk(void *p, int n, HK_MEMORY_CLASS c)
{
    fn_82E0E320(m_packfileData, p, n, c);
}
