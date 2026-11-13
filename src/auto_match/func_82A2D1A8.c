__int64 fn_82A2D1A8(unsigned int *param_1,int param_2)

{
  __int64 lVar1;
  unsigned __int64 uVar2;
  
  param_1[2] = param_1 + 2;
  param_1[3] = param_1 + 2;
  *(unsigned char *)(param_1 + 4) = 1;
  param_1[5] = 0;
  param_1[6] = param_1 + 6;
  param_1[7] = param_1 + 6;
  if (param_2 == 0) {
    uVar2 = 0x40006ca;
  }
  else {
    uVar2 = 0x40006aa;
  }
  param_1[8] = 0;
  lVar1 = ExCreateThread(param_1,0x8000,0,0,0xffffffff82a2cfa0,param_1,uVar2);
  if (-1 < lVar1) {
    KeSetBasePriorityThread(*param_1,0x10);
  }
  return lVar1;
}

