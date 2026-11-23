#include "havok/hkOArchive.h"

extern "C" void fn_82CFE6A8(hkOArchive *archive, const void *data, int count)
{
    archive->writeArrayGeneric(data, 4, count);
}
