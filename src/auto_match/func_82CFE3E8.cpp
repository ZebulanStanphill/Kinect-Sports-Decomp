#include "havok/hkOArchive.h"

// hkOArchive::write16u by its place after write16, whose code is the same, so it keeps its fn_ name.
extern "C" void fn_82CFE3E8(hkOArchive *archive, hkUint16 value)
{
    archive->writeArrayGeneric(&value, sizeof(value), 1);
}
