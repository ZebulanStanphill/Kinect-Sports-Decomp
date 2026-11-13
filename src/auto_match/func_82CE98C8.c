extern int fn_82CE96B0();


void fn_82CE98C8(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  unsigned __int64 *puVar3;
  unsigned __int64 *puVar4;
  __int64 lVar5;
  
  iVar1 = param_1[1];
  if (iVar1 <= param_1[4]) {
    iVar2 = 8;
    if (iVar1 != 0) {
      iVar2 = iVar1 << 1;
    }
    fn_82CE96B0(param_1,iVar2);
  }
  if (param_1[2] == 0) {
    param_1[2] = param_1[1];
  }
  iVar1 = param_1[2];
  puVar3 = (unsigned __int64 *)(param_2 + -8);
  param_1[2] = iVar1 + -1;
  lVar5 = 0x10;
  puVar4 = (unsigned __int64 *)((iVar1 + -1) * 0x80 + *param_1 + -8);
  do {
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
    *puVar4 = *puVar3;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  param_1[4] = param_1[4] + 1;
  return;
}

