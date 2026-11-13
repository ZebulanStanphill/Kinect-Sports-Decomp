extern int fn_82465390();
extern int fn_8265CA20();
extern unsigned int lbl_821BC734;


/* WARNING: Removing unreachable block (ram,0x8246bd88) */

void fn_8246BD40(unsigned int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  *param_1 = &lbl_821BC734;
  fn_82465390(param_1[2],param_1 + 0x17);
  piVar3 = param_1 + 7;
  iVar2 = *piVar3;
  if (iVar2 != param_1[8]) {
    for (iVar1 = iVar2; iVar1 != param_1[8]; iVar1 = iVar1 + 0x28) {
    }
    param_1[8] = iVar2;
  }
  iVar2 = *piVar3;
  if (iVar2 != 0) {
    for (; iVar2 != param_1[8]; iVar2 = iVar2 + 0x28) {
    }
    fn_8265CA20();
  }
  *piVar3 = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  return;
}

