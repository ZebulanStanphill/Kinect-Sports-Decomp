double fn_82DDFA78(int param_1,int param_2,float param_3)

{
  float fVar1;
  
  fVar1 = *(float *)(param_2 * 8 + param_1);
  *(float *)(param_2 * 8 + param_1) = (float)param_3;
  return (double)fVar1;
}

