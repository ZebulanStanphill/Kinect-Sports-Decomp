// hkStdioStreamWriter::seekTellSupported (vtable slot +0x18): always true.
#include "havok/hkBase.h"
#include "havok/hkStdioStreamWriter.h"

hkBool hkStdioStreamWriter::seekTellSupported() const { return true; }
