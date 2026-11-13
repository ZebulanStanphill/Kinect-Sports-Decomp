extern int fn_82C4E0F8();


unsigned __int64 fn_82C4E3B0(__int64 *param_1)

{
  unsigned char bVar1;
  int iVar2;
  int iVar3;
  unsigned char *pbVar4;
  
  pbVar4 = *(unsigned char **)((int)param_1 + 0xc);
  if (pbVar4 <= *(unsigned char **)(param_1 + 2)) {
    do {
      iVar2 = *(int *)(param_1 + 1);
      bVar1 = *pbVar4;
      pbVar4 = pbVar4 + 1;
      iVar3 = iVar2 + 8;
      *(int *)(param_1 + 1) = iVar3;
      *param_1 = ((unsigned __int64)bVar1 << ((__int64)(0x28 - iVar2) & 0x7fU)) + *param_1;
    } while (pbVar4 <= *(unsigned char **)(param_1 + 2));
    *(unsigned char **)((int)param_1 + 0xc) = pbVar4;
    if (-1 < iVar3) {
      return 0;
    }
  }
  if (*(int *)(param_1 + 3) != 1) {
    if (*(int *)(param_1 + 1) < -0x10) {
      if (*(int *)((int)param_1 + 0x14) == 0) {
        *(unsigned int *)((int)param_1 + 0x14) = 2;
      }
      *(unsigned int *)(param_1 + 1) = 0x7f;
    }
    return 0;
  }
  fn_82C4E0F8();
  return 1;
}

