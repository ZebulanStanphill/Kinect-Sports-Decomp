void fn_82E9B0D0(unsigned __int64 param_1,unsigned int *param_2)

{
  unsigned __int64 uVar1;
  __int64 lVar2;
  int iVar3;
  unsigned int uVar4;
  
  uVar1 = (unsigned __int64)((int)param_1 >> 0x1f);
  lVar2 = (param_1 ^ uVar1) - uVar1;
  if (lVar2 == 0) {
    *param_2 = 0;
    return;
  }
  iVar3 = (int)lVar2;
  if (iVar3 < 3) {
    *param_2 = 1;
    return;
  }
  if (iVar3 < 7) {
    *param_2 = 2;
    return;
  }
  if (iVar3 < 0xf) {
    *param_2 = 3;
    return;
  }
  uVar4 = 4;
  if (0x1e < iVar3) {
    uVar4 = 5;
  }
  *param_2 = uVar4;
  return;
}

