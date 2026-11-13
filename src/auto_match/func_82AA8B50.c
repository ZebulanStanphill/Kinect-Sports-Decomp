unsigned __int64 fn_82AA8B50(int param_1,unsigned int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = *(int **)(param_1 + 0xe8);
  iVar2 = *(int *)(param_1 + 0x24);
  iVar3 = iVar2 + 0x28;
  if (piVar1[1] < iVar3) {
    return 0xfffffffffffffff5;
  }
  piVar1[2] = iVar3;
  if (piVar1[1] < iVar2 + 0x2c) {
    return 0xfffffffffffffff4;
  }
  iVar2 = *piVar1 + iVar3;
  *(unsigned char *)param_2 = *(unsigned char *)(*piVar1 + iVar3);
  *(unsigned char *)((int)param_2 + 1) = *(unsigned char *)(iVar2 + 1);
  *(unsigned char *)((int)param_2 + 2) = *(unsigned char *)(iVar2 + 2);
  *(unsigned char *)((int)param_2 + 3) = *(unsigned char *)(iVar2 + 3);
  piVar1[2] = piVar1[2] + 4;
  *param_2 = (unsigned int)(unsigned char)*param_2 << 0x18 | (unsigned int)*(unsigned char *)((int)param_2 + 2) << 0x10 |
             (unsigned int)*(unsigned char *)((int)param_2 + 1) << 8 | (unsigned int)*(unsigned char *)param_2;
  return 0;
}

