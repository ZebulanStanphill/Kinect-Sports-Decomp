#include "havok/hkClass.h"

extern "C" hkClass lbl_8323AE68;
extern "C" hkClass lbl_8323AEC8;
extern "C" unsigned __int64 fn_82E12ED8(int *param_1,const hkClass *param_2)

{
  const char *uVar1;
  const char *uVar2;
  int iVar3;
  unsigned r;
  
  uVar1 = lbl_8323AE68.getName();
  uVar2 = param_2->getName();
  iVar3 = hkString::strCmp(uVar2, uVar1);
  if (iVar3 != 0) {
    uVar1 = lbl_8323AEC8.getName();
    uVar2 = param_2->getName();
    iVar3 = hkString::strCmp(uVar2, uVar1);
    if (iVar3 != 0) {
      iVar3 = *param_1;
      uVar1 = param_2->getName();
      r = ((unsigned (*)(int *, const char *))*(int *)(iVar3 + 0x10))(param_1,uVar1);
      if (r == 0) {
        (*(void (*)(int *, const hkClass *, int))*(int *)(*param_1 + 0x1c))(param_1,param_2,0);
      }
    }
  }
  return 0;
}
