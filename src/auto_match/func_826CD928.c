extern int fn_826824B0();


unsigned int * fn_826CD928(unsigned int *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 0x14);
  if (iVar1 != 0) {
    *(unsigned int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1U & 0x8fffffff;
  }
  *param_1 = *(unsigned int *)(param_2 + 0x14);
  if (param_3 != 0) {
    *(unsigned int *)(param_3 + 8) = *(int *)(param_3 + 8) + 1U & 0x8fffffff;
  }
  if (*(int *)(param_2 + 0x14) != 0) {
    fn_826824B0();
  }
  *(int *)(param_2 + 0x14) = param_3;
  return param_1;
}

