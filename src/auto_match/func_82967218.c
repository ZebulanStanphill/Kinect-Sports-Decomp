extern int fn_82967188();


void fn_82967218(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,int *param_4,int param_5)

{
  int iVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned int uVar4;
  int iVar5;
  int iVar6;
  
  fn_82967188();
  uVar2 = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    iVar3 = 0;
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x18) + iVar3);
      if ((*(int *)(iVar1 + 0x24) == 0) && (uVar4 = 0, *(int *)(iVar1 + 0x14) != 0)) {
        iVar5 = 0;
        do {
          iVar6 = *(int *)(*(int *)(*(int *)(iVar1 + 0x18) + iVar5) * 4 + *(int *)(param_1 + 0x18));
          if (param_5 == *(int *)(iVar1 + 0x38)) {
            if (*(int *)(iVar6 + 0x24) != 0) {
              iVar6 = *param_4 + -0x10000;
LAB_829672c0:
              *param_4 = iVar6;
            }
          }
          else if (param_5 == *(int *)(iVar6 + 0x38)) {
            iVar6 = *param_4 + 0x10000;
            goto LAB_829672c0;
          }
          uVar4 = uVar4 + 1;
          iVar5 = iVar5 + 4;
        } while (uVar4 < *(unsigned int *)(iVar1 + 0x14));
      }
      uVar2 = uVar2 + 1;
      iVar3 = iVar3 + 4;
    } while (uVar2 < *(unsigned int *)(param_1 + 0xc));
  }
  return;
}

