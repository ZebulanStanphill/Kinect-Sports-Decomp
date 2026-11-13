extern int fn_826E6D78();
extern int fn_82F68CC0();


int fn_826E6F60(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if (*(int *)(param_1 + 0x4c) < *(int *)(param_1 + 0x40)) {
    iVar1 = *(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x4c);
    iVar4 = param_3;
    if (iVar1 <= param_3) {
      iVar4 = iVar1;
    }
    iVar2 = iVar4;
    if (*(int *)(param_1 + 0x50) < iVar1) {
      iVar2 = (*(int *)(param_1 + 0x54) - iVar1) + *(int *)(param_1 + 0x50);
      iVar3 = *(int *)(param_1 + 0x54) - iVar2;
      if (iVar4 < iVar3) {
        iVar3 = iVar4;
      }
      fn_82F68CC0(param_2,iVar2 + param_1 + 0x58,iVar3);
      iVar2 = iVar4 - iVar3;
      iVar1 = iVar1 - iVar3;
      param_2 = iVar3 + param_2;
    }
    if (0 < iVar2) {
      fn_82F68CC0(param_2,(*(int *)(param_1 + 0x50) - iVar1) + param_1 + 0x58,iVar2);
      param_2 = iVar2 + param_2;
    }
    param_3 = param_3 - iVar4;
    *(int *)(param_1 + 0x4c) = iVar4 + *(int *)(param_1 + 0x4c);
  }
  if (0 < param_3) {
    iVar1 = fn_826E6D78(param_1,param_2,param_3);
    if (iVar1 < 0x800) {
      if (0 < iVar1) {
        iVar2 = 0x800 - *(int *)(param_1 + 0x50);
        if (iVar1 <= iVar2) {
          iVar2 = iVar1;
        }
        if (0 < iVar2) {
          fn_82F68CC0(*(int *)(param_1 + 0x50) + param_1 + 0x58,param_2,iVar2);
          param_2 = iVar2 + param_2;
          *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + iVar2;
        }
        if (iVar2 < iVar1) {
          *(int *)(param_1 + 0x50) = iVar1 - iVar2;
          fn_82F68CC0(param_1 + 0x58,param_2);
        }
        if ((*(int *)(param_1 + 0x54) < 0x800) &&
           (iVar2 = *(int *)(param_1 + 0x54) + iVar1, *(int *)(param_1 + 0x54) = iVar2,
           0x800 < iVar2)) {
          *(unsigned int *)(param_1 + 0x54) = 0x800;
        }
      }
    }
    else {
      *(unsigned int *)(param_1 + 0x50) = 0x800;
      *(unsigned int *)(param_1 + 0x54) = 0x800;
      fn_82F68CC0(param_1 + 0x58,iVar1 + param_2 + -0x800,0x800);
    }
    iVar4 = iVar1 + iVar4;
    *(unsigned int *)(param_1 + 0x4c) = *(unsigned int *)(param_1 + 0x40);
  }
  return iVar4;
}

