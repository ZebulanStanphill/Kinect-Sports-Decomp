extern int fn_82F68B7C();


void fn_82DD8618(unsigned char *param_1,int param_2)

{
  unsigned char bVar1;
  __int64 lVar2;
  int iVar3;
  unsigned char *pbVar4;
  
  bVar1 = param_1[2];
  iVar3 = bVar1 - 1;
  param_1[2] = (unsigned char)iVar3;
  pbVar4 = param_1 + iVar3 * 8 + 4;
  *(unsigned int *)(param_1 + param_2 * 8 + 4) = *(unsigned int *)pbVar4;
  *(unsigned int *)(param_1 + param_2 * 8 + 8) = *(unsigned int *)(param_1 + iVar3 * 8 + 8);
  lVar2 = (__int64)((int)((unsigned int)param_1[1] + (unsigned int)*param_1 + -1) >> 1);
  if (-1 < lVar2) {
    lVar2 = lVar2 + 1;
    iVar3 = ((unsigned int)bVar1 * 8 + 4) - (int)pbVar4;
    do {
      *(unsigned int *)pbVar4 = *(unsigned int *)(pbVar4 + (int)(param_1 + iVar3));
      pbVar4 = pbVar4 + 4;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  fn_82F68B7C();
  return;
}

