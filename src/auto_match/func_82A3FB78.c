extern int fn_8265C940();


unsigned __int64 fn_82A3FB78(int *param_1)

{
  int iVar2;
  unsigned __int64 uVar1;
  
  iVar2 = fn_8265C940(0x80,0x24970000);
  *param_1 = iVar2;
  if (iVar2 == 0) {
    iVar2 = 0;
    uVar1 = 0xffffffff8007000e;
  }
  else {
    uVar1 = 0;
    iVar2 = 0x10;
  }
  param_1[1] = iVar2;
  param_1[2] = 0;
  return uVar1;
}

