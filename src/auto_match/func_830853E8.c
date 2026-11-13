void fn_830853E8(int *param_1,int param_2,int *param_3,unsigned int *param_4)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  int iVar4;
  unsigned int *puVar5;
  int iVar6;
  
  if (7 < param_2) {
    iVar4 = *param_1;
    puVar5 = (unsigned int *)(iVar4 + 0x40);
    if (*(int *)(iVar4 + 0x40) < 0) {
      *(unsigned __int64 *)(iVar4 + 0x20) = *(unsigned __int64 *)puVar5;
      *(unsigned int *)(iVar4 + 0x20) =
           ((int)((int)puVar5 + ((*puVar5 & 0x7ffffffc) - iVar4) + -0x20) >> 3) << 3 |
           *(unsigned int *)(iVar4 + 0x20) & 0x80000003;
    }
    else {
      *(unsigned __int64 *)(iVar4 + 0x20) = *(unsigned __int64 *)puVar5;
    }
    uVar1 = *param_4;
    puVar5 = (unsigned int *)((int)(((unsigned __int64)uVar1 + 8 & 0xffffffff) << 3) + iVar4);
    if ((int)*puVar5 < 0) {
      uVar2 = *puVar5;
      *(unsigned __int64 *)(iVar4 + 0x28) = *(unsigned __int64 *)puVar5;
      *(unsigned int *)(iVar4 + 0x28) =
           ((int)((int)puVar5 + ((uVar2 & 0x7ffffffc) - iVar4) + -0x28) >> 3) << 3 |
           *(unsigned int *)(iVar4 + 0x28) & 0x80000003;
    }
    else {
      *(unsigned __int64 *)(iVar4 + 0x28) = *(unsigned __int64 *)puVar5;
    }
    uVar3 = (unsigned __int64)param_4[1] + (unsigned __int64)uVar1 + 8;
    puVar5 = (unsigned int *)((int)((uVar3 & 0xffffffff) << 3) + iVar4);
    if ((int)*puVar5 < 0) {
      uVar1 = *puVar5;
      *(unsigned __int64 *)(iVar4 + 0x30) = *(unsigned __int64 *)puVar5;
      *(unsigned int *)(iVar4 + 0x30) =
           ((int)((int)puVar5 + ((uVar1 & 0x7ffffffc) - iVar4) + -0x30) >> 3) << 3 |
           *(unsigned int *)(iVar4 + 0x30) & 0x80000003;
    }
    else {
      *(unsigned __int64 *)(iVar4 + 0x30) = *(unsigned __int64 *)puVar5;
    }
    puVar5 = (unsigned int *)((int)((param_4[2] + uVar3 & 0xffffffff) << 3) + iVar4);
    if ((int)*puVar5 < 0) {
      uVar1 = *puVar5;
      *(unsigned __int64 *)(iVar4 + 0x38) = *(unsigned __int64 *)puVar5;
      *(unsigned int *)(iVar4 + 0x38) =
           ((int)((int)puVar5 + ((uVar1 & 0x7ffffffc) - iVar4) + -0x38) >> 3) << 3 |
           *(unsigned int *)(iVar4 + 0x38) & 0x80000003;
    }
    else {
      *(unsigned __int64 *)(iVar4 + 0x38) = *(unsigned __int64 *)puVar5;
    }
  }
  if (param_3 == (int *)0x0) {
    return;
  }
  iVar4 = param_3[2];
  if (param_3[2] <= param_3[3]) {
    iVar4 = param_3[3];
  }
  iVar6 = param_3[1];
  if (param_3[1] < *param_3) {
    iVar6 = *param_3;
  }
  if (iVar6 <= iVar4) {
    iVar6 = iVar4;
  }
  param_1[3] = iVar6;
  return;
}

