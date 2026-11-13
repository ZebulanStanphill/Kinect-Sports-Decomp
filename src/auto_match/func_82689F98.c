extern int fn_8268C2D0();
extern int fn_8268C750();


int fn_82689F98(int param_1,int param_2)

{
  fn_8268C2D0();
  fn_8268C750(param_1 + 4,param_2 + 4);
  *(float *)(param_1 + 8) = *(float *)(param_2 + 8);
  *(unsigned int *)(param_1 + 0xc) = *(unsigned int *)(param_2 + 0xc);
  return param_1;
}

