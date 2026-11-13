extern int fn_8288CCB8();


unsigned int fn_8288DCC0(int param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  int aiStack_20 [4];
  
  fn_8288CCB8(aiStack_20,param_1 + 4,param_2);
  uVar1 = 0;
  if (aiStack_20[0] != *(unsigned int *)(param_1 + 8)) {
    uVar1 = *(unsigned int *)(aiStack_20[0] + 0x14);
  }
  return uVar1;
}

