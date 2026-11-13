extern int fn_82822330();
extern int fn_828223C8();


void fn_82827850(int param_1,int param_2,unsigned __int64 param_3)

{
  int iVar1;
  unsigned int aiStack_20 [2];
  
  fn_82822330(param_3,param_1);
  iVar1 = *(int *)(param_2 + 0x28) + 1;
  *(int *)(param_2 + 0x28) = iVar1;
  *(int *)(param_1 + 0xc) = iVar1;
  *(int *)(param_1 + 8) = param_2;
  fn_828223C8(param_1,aiStack_20);
  if (aiStack_20[0] == 0) {
    *(int *)(param_2 + 0x308) = param_1;
  }
  return;
}

