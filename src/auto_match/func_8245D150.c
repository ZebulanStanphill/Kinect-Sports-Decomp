unsigned __int64 fn_8245D150(int param_1,unsigned int *param_2,unsigned int *param_3)

{
  int iVar1;
  unsigned __int64 uVar2;
  int iVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  int iVar6;
  
  uVar5 = 0;
  if (param_2 != (unsigned int *)0x0) {
    *param_2 = 0;
  }
  if (param_3 != (unsigned int *)0x0) {
    *param_3 = 0;
  }
  uVar4 = (unsigned __int64)*(unsigned int *)(param_1 + 0x10);
  iVar1 = -1;
  uVar2 = uVar4;
  if (uVar4 != 0) {
    iVar3 = 0;
    do {
      iVar6 = iVar3 + *(int *)(param_1 + 4);
      if ((*(int *)(iVar6 + 0xc) != 0) && (*(int *)(iVar6 + 0x18) == 0)) {
        if (iVar1 < *(int *)(iVar6 + 8)) {
          uVar2 = uVar5;
          iVar1 = *(int *)(iVar6 + 8);
        }
      }
      uVar5 = uVar5 + 1;
      iVar3 = iVar3 + 0x20;
    } while ((uVar5 & 0xffffffff) < uVar4);
  }
  if ((uVar2 & 0xffffffff) < uVar4) {
    if (param_2 != (unsigned int *)0x0) {
      *param_2 = *(unsigned int *)((int)((uVar2 & 0xffffffff) << 5) + *(int *)(param_1 + 4));
    }
    if (param_3 != (unsigned int *)0x0) {
      *param_3 = *(unsigned int *)((int)((uVar2 & 0xffffffff) << 5) + *(int *)(param_1 + 4) + 4);
    }
  }
  return uVar2;
}

