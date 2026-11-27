// hkPackfileReader::getContents(const char *className) (Common/Serialize/Packfile/hkPackfileReader.cpp; slot
// +0x14 of ??_7hkPackfileReader@@6B@, inherited by ??_7hkBinaryPackfileReader@@6B@): getContentsWithRegistry
// with the builtin type registry's hkTypeInfoRegistry.
#include "havok/hkPackfileReader.h"
#include "havok/hkDefaultBuiltinTypeRegistry.h"

void *hkPackfileReader::getContents(const char *className)
{
    return getContentsWithRegistry(className, hkBuiltinTypeRegistry::getInstance().getTypeInfoRegistry());
}
