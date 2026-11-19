extern int fopen();


void fn_82CFB470(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  
  uVar1 = fopen(param_2,param_3);
  *(unsigned int *)(param_1 + 8) = uVar1;
  return;
}

