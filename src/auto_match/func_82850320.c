/* WARNING: Inlined function: __savegprlr_25 */

void fn_82850320(int param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  __int64 lVar5;
  
  if (*(int *)(param_1 + 0x90) == 0) {
    return;
  }
  iVar2 = *(int *)(*(int *)(param_1 + 0x90) + 0x1c);
  if (iVar2 == 0) {
    fn_8284FFE0();
    return;
  }
  if (iVar2 == 1) {
    iVar2 = *(int *)(param_1 + 0x90);
    if (iVar2 == 0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = *(int **)(param_2 + 4);
    }
    iVar1 = piVar4[1];
    if (*(int *)(iVar2 + 0x28) == 1) {
      memset(*(unsigned int *)(param_2 + 0x1c),0,*(unsigned int *)(param_1 + 0x94));
      lVar5 = 0;
      iVar3 = fn_82859E38(iVar2,iVar1);
      if (0 < iVar3) {
        do {
          fn_82859E40(iVar2,iVar1,lVar5);
          fn_828600A0(iVar2,iVar1);
          lVar5 = lVar5 + 1;
          iVar3 = fn_82859E38(iVar2,iVar1);
        } while ((int)lVar5 < iVar3);
      }
    }
    else {
      fn_828600A0(iVar2,iVar1);
    }
    *piVar4 = *piVar4 + 1;
    fn_8285A100(iVar2,iVar1,param_4);
    fn_8285FDF0(iVar2,iVar1);
    if (*(int *)(*(int *)(param_1 + 0x90) + 0x28) == 1) {
      fn_8284F8A0(iVar2,iVar1,param_1,param_2);
    }
    return;
  }
  return;
}
