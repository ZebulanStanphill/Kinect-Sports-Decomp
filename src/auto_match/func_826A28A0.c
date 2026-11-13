extern int fn_826824B0();


void fn_826A28A0(unsigned int *param_1,unsigned int *param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = *(unsigned int *)*param_2;
  piVar1 = (int *)param_2[1];
  iVar2 = *piVar1;
  if (iVar2 != 0) {
    *(unsigned int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 1U & 0x8fffffff;
  }
  if (param_1[1] != 0) {
    fn_826824B0(param_1[1]);
  }
  param_1[1] = *piVar1;
  return;
}

