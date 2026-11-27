// hkStdioStreamReader::seekTellSupported (vtable slot +0x24): always true.
#include "havok/hkBase.h"
#include "havok/hkStdioStreamReader.h"

hkBool hkStdioStreamReader::seekTellSupported() const { return true; }
