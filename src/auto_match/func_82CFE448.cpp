#include "havok/hkOArchive.h"

extern "C" void fn_82CFE448(hkOArchive *archive, hkUint32 value)
{
    archive->writeArrayGeneric(&value, sizeof(value), 1);
}
