extern int fn_8249D878();


unsigned __int64 fn_8249C848(int param_1,unsigned __int64 param_2,unsigned int *param_3)

{
  int iVar1;
  int iVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned int uVar5;
  
  uVar4 = 0;
  uVar5 = 0;
  if ((*(unsigned int *)(param_1 + 0x50) & param_2) != 0) {
    if (*(int *)(param_1 + 0x88) == 0) {
      uVar4 = *(unsigned int *)(param_1 + 0x60) & param_2;
      uVar5 = (unsigned int)uVar4;
    }
    else {
      if ((*(unsigned int *)(param_1 + 100) & param_2) == 0) {
        if (*(int *)(param_1 + 8) != 0) goto LAB_8249c8c4;
        uVar4 = (unsigned __int64)((*(unsigned int *)(param_1 + 0x68) & param_2) != 0);
      }
      else {
        uVar4 = 1;
      }
      uVar5 = 0;
    }
  }
LAB_8249c8c4:
  if ((int)param_2 == 8) {
    iVar1 = *(int *)(param_1 + 0x110);
    uVar3 = fn_8249D878(0);
    iVar2 = *(int *)(iVar1 + 0x14);
    if (*(int *)(iVar1 + 0x10) != iVar2) {
      uVar3 = (unsigned __int64)*(unsigned int *)(iVar2 + -8);
    }
    uVar4 = uVar3 & uVar4;
  }
  if (param_3 != (unsigned int *)0x0) {
    *param_3 = -(unsigned int)(param_2 != 0x20) & uVar5;
  }
  return uVar4;
}

