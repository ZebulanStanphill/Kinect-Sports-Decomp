extern int fn_8268BA10();


void fn_82689F38(int param_1,unsigned int *param_2)

{
  int iVar1;
  
  fn_8268BA10(param_1,*param_2);
  iVar1 = param_2[1];
  fn_8268BA10(param_1 + 4,iVar1);
  *(float *)(param_1 + 8) = *(float *)(iVar1 + 4);
  *(unsigned int *)(param_1 + 0xc) = *(unsigned int *)(iVar1 + 8);
  return;
}

