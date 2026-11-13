extern int fn_826AF7B8();


void fn_826B0B48(int *param_1,int *param_2)

{
  unsigned int iVar1;
  int *piVar2;
  
  fn_826AF7B8(param_1,param_1,(unsigned __int64)(unsigned int)param_1[1] + 1);
  piVar2 = (int *)(param_1[1] * 4 + *param_1 + -4);
  if (piVar2 != (int *)0x0) {
    iVar1 = *param_2;
    if (iVar1 != 0) {
      *(unsigned int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1U & 0x8fffffff;
    }
    *piVar2 = *param_2;
  }
  return;
}

