#include "havok/hkOArchive.h"

extern "C" void fn_82CFE6C8(hkOArchive *archive, const void *data, int count)
{
    archive->writeArrayGeneric(data, 8, count);
}
