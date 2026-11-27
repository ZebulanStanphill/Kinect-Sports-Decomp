// hkStdioStreamWriter::tell (vtable slot +0x20): ftell (fn_82F6BAB8) of the file.
#include "havok/hkBase.h"
#include "havok/hkStdioStreamWriter.h"

extern "C" int fn_82F6BAB8(void *f);   // ftell

int hkStdioStreamWriter::tell() const { return fn_82F6BAB8(m_handle); }
