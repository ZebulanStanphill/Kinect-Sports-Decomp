extern int fn_8268C2D0();


int fn_8271A528(int param_1,unsigned int *param_2)

{
  unsigned int *puVar1;
  
  fn_8268C2D0(param_1,*param_2);
  puVar1 = (unsigned int *)param_2[1];
  *(unsigned int *)(param_1 + 4) = *puVar1;
  *(unsigned int *)(param_1 + 8) = puVar1[1];
  return param_1;
}

