extern int fn_82626A18();


void fn_82627300(unsigned __int64 param_1,int param_2,unsigned int *param_3)

{
  unsigned int uVar1;
  
  *(int *)(param_2 + 0xa4) = *(int *)(param_2 + 0xa4) + 1;
  uVar1 = fn_82626A18();
  *param_3 = uVar1;
  return;
}

