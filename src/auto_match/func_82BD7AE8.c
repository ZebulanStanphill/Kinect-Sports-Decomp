extern int fn_82BD7F98();


void fn_82BD7AE8(int param_1,unsigned int param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  
  if (param_2 == 2) {
    uVar1 = *(unsigned int *)(param_1 + 4);
  }
  else {
    uVar1 = *(unsigned int *)((param_2 + 2) * 4 + param_1);
  }
  fn_82BD7F98(uVar1,param_3);
  return;
}

