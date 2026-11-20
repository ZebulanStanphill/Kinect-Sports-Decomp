#include "havok/hkClass.h"

extern "C" {

extern int *lbl_832654E4;
extern int *lbl_832654E8;
extern int *lbl_832654EC;
void fn_82E090E0(int self, int param_2, int param_3)
{
  int *piVar1;
  const char *uVar2;
  int iVar3;

  piVar1 = lbl_832654E4;
  iVar3 = *lbl_832654E4;
  uVar2 = ((const hkClass *)(param_3))->getName();
  (*(int (**)(int *, int, const char *))(iVar3 + 0x1c))(piVar1, param_3, uVar2);
  (*(int (**)(int *, int))(*lbl_832654E8 + 0xc))(lbl_832654E8, param_2);
  iVar3 = ((const hkClass *)(param_3))->getNumInterfaces();
  if (0 < iVar3) {
    (*(int (**)(int *, int, int))(*lbl_832654EC + 0xc))(lbl_832654EC, *(int *)(param_2 + 0xc), param_3);
  }
}

}
