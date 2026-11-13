extern unsigned int lbl_820121E0;


void fn_8273E6E0(int *param_1,unsigned int *param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)*param_2;
  *param_1 = iVar1;
  *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
  piVar2 = (int *)(param_2[1] + 4);
  if (param_2[1] == 0) {
    piVar2 = (int *)0x0;
  }
  iVar1 = *piVar2;
  if (iVar1 != 0) {
    *(unsigned int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1U & 0x8fffffff;
  }
  param_1[2] = *piVar2;
  param_1[1] = (int)&lbl_820121E0;
  return;
}

