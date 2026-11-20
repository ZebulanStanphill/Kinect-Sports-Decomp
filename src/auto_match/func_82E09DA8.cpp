#include "havok/hkString.h"

extern "C" void *fn_82CEAC20();
extern "C" bool fn_82E09DA8() {
 void *r=fn_82CEAC20();
 return hkString::strCmp(reinterpret_cast<const char *>(r), "hkClass") && hkString::strCmp(reinterpret_cast<const char *>(r), "hkClassMember") && hkString::strCmp(reinterpret_cast<const char *>(r), "hkClassEnum") && hkString::strCmp(reinterpret_cast<const char *>(r), "hkClassEnumItem");
}
