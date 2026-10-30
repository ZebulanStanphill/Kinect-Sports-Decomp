typedef int (*code)();
extern int fn_82CEAC20();
extern int fn_82CEACC8();
extern int *lbl_832654E4;
extern int *lbl_832654E8;
extern int *lbl_832654EC;
void fn_82E090E0(int param_1, int param_2, int param_3)
{
  int *piVar1;
  unsigned int uVar2;
  int iVar3;

  piVar1 = lbl_832654E4;
  iVar3 = *lbl_832654E4;
  uVar2 = fn_82CEAC20(param_3);
  (*(code *)(iVar3 + 0x1c))(piVar1, param_3, uVar2);
  (*(code *)(*lbl_832654E8 + 0xc))(lbl_832654E8, param_2);
  iVar3 = fn_82CEACC8(param_3);
  if (0 < iVar3) {
    (*(code *)(*lbl_832654EC + 0xc))(lbl_832654EC, *(int *)(param_2 + 0xc), param_3);
  }
}
