unsigned __int64 fn_82C07E78(int param_1,unsigned int param_2,unsigned int *param_3)

{
  unsigned short uVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  __int64 lVar4;
  
  puVar3 = param_3 + -1;
  lVar4 = 9;
  do {
    puVar3 = puVar3 + 1;
    *puVar3 = 0;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  uVar2 = *(unsigned int *)(param_1 + 4);
  param_3[6] = param_1;
  param_3[7] = param_2;
  param_3[8] = 1;
  *param_3 = uVar2;
  if (*(int *)(param_1 + 4) != 1) {
    if (*(int *)(param_1 + 4) != 2) {
      return 0xffffffff805000b8;
    }
    param_3[2] = 0;
    param_3[3] = *(unsigned int *)(*(int *)(param_1 + 8) + 8);
    uVar2 = *(unsigned int *)(*(int *)(param_1 + 8) + 0xc);
    param_3[1] = 7;
    param_3[4] = uVar2;
    return 0;
  }
  param_3[2] = *(unsigned int *)(*(int *)(param_1 + 8) + 4);
  uVar1 = *(unsigned short *)(*(int *)(param_1 + 8) + 0xe);
  param_3[1] = 3;
  *(char *)(param_3 + 3) = (char)uVar1;
  return 0;
}

