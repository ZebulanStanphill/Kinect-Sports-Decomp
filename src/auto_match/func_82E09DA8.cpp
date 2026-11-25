#include "havok/hkClass.h"

extern "C" bool fn_82E09DA8(const hkClass *klass) {
 const char *r=klass->getName();
 return hkString::strCmp(r, "hkClass") && hkString::strCmp(r, "hkClassMember") && hkString::strCmp(r, "hkClassEnum") && hkString::strCmp(r, "hkClassEnumItem");
}
