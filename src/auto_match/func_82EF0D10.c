extern int fn_82EF0A88();


unsigned __int64 fn_82EF0D10(int param_1,short *param_2)

{
  unsigned __int64 uVar1;
  short sVar2;
  int aiStack_20 [2];
  
  if (param_2 == (short *)0x0) {
    uVar1 = 0xffffffff80070057;
  }
  else {
    aiStack_20[0] = 0;
    uVar1 = fn_82EF0A88(param_1,aiStack_20);
    if (-1 < (int)uVar1) {
      sVar2 = (short)*(unsigned int *)(param_1 + 0x1ac);
      if (aiStack_20[0] != 0) {
        sVar2 = sVar2 + -2;
      }
      *param_2 = sVar2;
    }
  }
  return uVar1;
}

