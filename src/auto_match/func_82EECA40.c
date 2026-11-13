extern int fn_82EEDD60();


unsigned __int64 fn_82EECA40(int param_1,short param_2,unsigned __int64 param_3,short *param_4)

{
  unsigned __int64 uVar1;
  int aiStack_20 [4];
  
  param_1 = param_1 - *(int *)(param_1 + -4);
  uVar1 = 0;
  aiStack_20[0] = 0;
  if (param_4 == (short *)0x0) {
    uVar1 = 0xffffffff80070057;
  }
  else if (param_2 == -1) {
    uVar1 = fn_82EEDD60(param_1 + *(int *)(*(int *)(param_1 + -0x44) + 8) + -0x44,0xffff,
                              param_3,aiStack_20,0,0,1);
    if (-1 < (int)uVar1) {
      *param_4 = *(short *)(aiStack_20[0] + 0x14);
    }
  }
  else {
    *param_4 = param_2;
  }
  return uVar1;
}

