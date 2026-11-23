#include "havok/hkOArchive.h"

void hkOArchive::write32(hkInt32 i)
{
    writeArrayGeneric(&i, sizeof(i), 1);
}
