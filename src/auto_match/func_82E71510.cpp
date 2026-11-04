#include "game/Writer_82E6FC00.h"

extern "C" {
void fn_82E71510(Writer_82E6FC00 *param_1, __int64 param_2, unsigned __int64 param_3, unsigned int *param_4)
{
  long iVar1;
  int lVar2;
  unsigned __int64 auStack_30;

  if (param_1->size - param_3 <= 0xffffffff) {
    lVar2 = param_1->size - param_3;
  }
  else {
    lVar2 = -1;
  }
  auStack_30 = 0;
  iVar1 = param_1->Seek(param_2, &auStack_30, 0);
  if (((iVar1 >= 0) && (iVar1 = param_1->Put(auStack_30, lVar2), iVar1 >= 0)) &&
     (param_4 != 0)) {
    *param_4 = lVar2;
  }
  return;
}
}
