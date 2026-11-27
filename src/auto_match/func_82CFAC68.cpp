// hkStdioStreamReader::tell (vtable slot +0x2C): ftell (fn_82F6BAB8) of the file.
#include "havok/hkBase.h"
#include "havok/hkStdioStreamReader.h"

extern "C" int fn_82F6BAB8(void *f);   // ftell

int hkStdioStreamReader::tell() const { return fn_82F6BAB8(m_handle); }
