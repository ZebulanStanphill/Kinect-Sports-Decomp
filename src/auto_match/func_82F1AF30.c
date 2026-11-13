unsigned int fn_82F1AF30(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int uVar2;
  int iVar3;
  
  uVar2 = 0;
  iVar1 = *(int *)(param_1 + 0x2d0);
  iVar3 = (iVar1 * param_3 + param_2) * 0x114 + *(int *)(param_1 + 0x1e54);
  if (*(int *)(iVar3 + 0x74) == 0) {
    goto out;
  }
  uVar2 = 1;
  if ((param_2 != 0) && (*(int *)(iVar3 + -0xa0) != 0)) {
    uVar2 = 3;
  }
  if (((param_3 != 0) && (*(int *)(*(int *)(param_1 + 0x8d8) + param_3 * 4) == 0)) &&
     (*(int *)(iVar3 - iVar1 * 0x114 + 0x74) != 0)) {
    uVar2 = uVar2 | 4;
  }
  if ((uVar2 == 7) && (*(int *)(iVar3 - iVar1 * 0x114 + -0xa0) != 0)) {
    uVar2 = 0xf;
  }
  if (param_4 == 1) {
    if ((uVar2 & 4) != 0) {
      uVar2 = uVar2 | 8;
    }
    return uVar2 | 2;
  }
  if (param_4 == 2) {
    if ((uVar2 & 2) != 0) {
      uVar2 = uVar2 | 8;
    }
    return uVar2 | 4;
  }
  if (param_4 != 3) {
    return uVar2;
  }
  uVar2 |= 0xf;
out:
  return uVar2;
}

