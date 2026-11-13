void fn_828055D0(int *param_1,int param_2,float param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  param_2 = param_2 * 4;
  iVar1 = param_1[1];
  iVar2 = param_1[2];
  iVar3 = param_1[3];
  *(float *)(*param_1 + param_2) = (float)param_3;
  *(float *)(iVar1 + param_2) = (float)param_3;
  *(float *)(iVar2 + param_2) = (float)param_3;
  *(float *)(iVar3 + param_2) = (float)param_3;
  return;
}

