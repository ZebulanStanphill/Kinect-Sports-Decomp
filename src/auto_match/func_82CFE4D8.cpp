#include "havok/hkOArchive.h"

extern "C" void fn_82CFE4D8(hkOArchive *archive, hkReal value)
{
    archive->writeArrayGeneric(&value, sizeof(value), 1);
}
