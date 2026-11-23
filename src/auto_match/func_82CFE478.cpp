#include "havok/hkOArchive.h"

extern "C" void fn_82CFE478(hkOArchive *archive, hkInt64 value)
{
    archive->writeArrayGeneric(&value, sizeof(value), 1);
}
