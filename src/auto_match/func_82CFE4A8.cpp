#include "havok/hkOArchive.h"

extern "C" void fn_82CFE4A8(hkOArchive *archive, hkUint64 value)
{
    archive->writeArrayGeneric(&value, sizeof(value), 1);
}
