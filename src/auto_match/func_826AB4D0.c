extern int fn_826824B0();


unsigned int * fn_826AB4D0(unsigned int *param_1,unsigned int *param_2)

{
  int iVar1;
  
  *param_1 = *param_2;
  iVar1 = param_2[1];
  if (iVar1 != 0) {
    *(unsigned int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1U & 0x8fffffff;
  }
  if (param_1[1] != 0) {
    fn_826824B0(param_1[1]);
  }
  param_1[1] = param_2[1];
  return param_1;
}

