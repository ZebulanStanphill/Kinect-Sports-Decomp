#include "havok/hkOArchive.h"

extern "C" void fn_82CFE698(hkOArchive *archive, const void *data, int count)
{
    archive->writeArrayGeneric(data, 2, count);
}
