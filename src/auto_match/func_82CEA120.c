void fn_82CEA120(int *param_1,int param_2,unsigned __int64 param_3)

{
  int iVar1;
  unsigned __int64 uVar2;
  
  uVar2 = (param_3 & 0xffffffff) >> 3;
  *param_1 = param_2;
  param_1[1] = -0x80000000;
  param_1[2] = (int)uVar2 + -1;
  if ((int)uVar2 == 0) {
    return;
  }
  iVar1 = 0;
  do {
    *(unsigned int *)(iVar1 + *param_1) = 0xffffffff;
    iVar1 = iVar1 + 8;
    uVar2 = uVar2 - 1;
  } while (uVar2 != 0);
  return;
}

