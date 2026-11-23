#include "havok/hkOArchive.h"

extern "C" void fn_82CFE508(hkOArchive *archive, double value)
{
    archive->writeArrayGeneric(&value, sizeof(value), 1);
}
