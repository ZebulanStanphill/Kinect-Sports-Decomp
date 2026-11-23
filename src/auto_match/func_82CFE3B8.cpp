#include "havok/hkOArchive.h"

void hkOArchive::write16(hkInt16 i)
{
    writeArrayGeneric(&i, sizeof(i), 1);
}
