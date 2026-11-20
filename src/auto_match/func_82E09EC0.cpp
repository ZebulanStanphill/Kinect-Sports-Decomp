#include "havok/hkClass.h"
#include "havok/hkString.h"

extern "C" int fn_82CEAFA8(const hkClass *klass, const char *name);   // hkClass::getMemberByName
extern "C" unsigned int lbl_8323AEC8;


extern "C" char lbl_8204EF40[];
extern "C" void fn_82E09EC0(const hkClass *param_1)

{
  const char *uVar1;
  int iVar2;
  
  uVar1 = param_1->getName();
  iVar2 = hkString::strCmp(uVar1, "hctAttributeDescription");
  if ((iVar2 == 0) &&
     (iVar2 = fn_82CEAFA8(param_1,lbl_8204EF40), *(unsigned int *)(iVar2 + 4) == 0)) {
    *(unsigned int **)(iVar2 + 4) = &lbl_8323AEC8;
  }
  return;
}

