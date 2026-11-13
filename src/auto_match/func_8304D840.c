unsigned __int64 fn_8304D840(int *param_1,int *param_2)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  if (((piVar1 + 3 <= param_2) && (*piVar1 == 0x52494658)) &&
     (*param_1 = (int)(piVar1 + 2), piVar1[2] == 0x57415645)) {
    *param_1 = (int)(piVar1 + 3);
    return 1;
  }
  return 7;
}

