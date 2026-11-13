extern int fn_8268C2D0();
extern int fn_8268C750();


int fn_82689FF0(int param_1,unsigned int *param_2)

{
  int iVar1;
  
  fn_8268C2D0(param_1,*param_2);
  iVar1 = param_2[1];
  fn_8268C750(param_1 + 4,iVar1);
  *(float *)(param_1 + 8) = *(float *)(iVar1 + 4);
  *(unsigned int *)(param_1 + 0xc) = *(unsigned int *)(iVar1 + 8);
  return param_1;
}

