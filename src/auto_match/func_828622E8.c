void fn_828622E8(int param_1,unsigned __int64 param_2,int param_3,unsigned __int64 param_4,int param_5,
                  unsigned int *param_6)

{
  unsigned int *puVar1;
  
  if (param_3 != 1) {
    return;
  }
  puVar1 = (unsigned int *)(param_5 * 0xc + param_1);
  *puVar1 = *param_6;
  puVar1[1] = param_6[1];
  puVar1[2] = param_6[2];
  return;
}

