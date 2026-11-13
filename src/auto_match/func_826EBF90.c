extern int fn_826EBC78();


void fn_826EBF90(int param_1,int param_2,unsigned int param_3)

{
  unsigned int uVar1;
  
  if (param_3 < *(unsigned int *)(param_1 + 4)) {
    uVar1 = param_3;
    if (param_3 >= (unsigned __int64)(*(unsigned int *)(param_1 + 8) >> 1)) goto code_r0x826ebfe4;
  }
  else {
    if (param_3 < *(unsigned int *)(param_1 + 8)) goto code_r0x826ebfe4;
    uVar1 = (param_3 >> 2) + param_3;
  }
  fn_826EBC78(param_1,param_2,uVar1);
code_r0x826ebfe4:
  *(int *)(param_1 + 4) = (int)param_3;
  return;
}

