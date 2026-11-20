#include "havok/hkOArchive.h"

// hkOArchive::writeArrayGeneric(const void *buf, int elemSize, int nelem) keeps its fn_ name
// (Matching C callers).
extern "C" void fn_82CFDFE0(hkOArchive *archive, const void *buf, int elemSize, int nelem);

void hkOArchive::write16(hkInt16 i)
{
    fn_82CFDFE0(this, &i, sizeof(i), 1);
}
