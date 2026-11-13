void fn_82CEA610(int *param_1,int param_2,unsigned __int64 param_3)

{
  int iVar1;
  unsigned __int64 uVar2;
  
  uVar2 = (param_3 & 0xffffffff) >> 4;
  *param_1 = param_2;
  param_1[1] = -0x80000000;
  param_1[2] = (int)uVar2 + -1;
  if ((int)uVar2 == 0) {
    return;
  }
  iVar1 = 0;
  do {
    *(unsigned __int64 *)(iVar1 + *param_1) = 0xffffffffffffffff;
    iVar1 = iVar1 + 0x10;
    uVar2 = uVar2 - 1;
  } while (uVar2 != 0);
  return;
}

