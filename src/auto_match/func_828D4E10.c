unsigned int fn_828D4E10(int *param_1)

{
  int iVar1;
  unsigned int uVar2;
  
  iVar1 = 0;
  if ((int *)*param_1 != (int *)0x0) {
    iVar1 = *(int *)*param_1;
  }
  uVar2 = param_1[2];
  if (*(unsigned int *)(iVar1 + 8) <= uVar2) {
    uVar2 = uVar2 - *(unsigned int *)(iVar1 + 8);
  }
  return *(unsigned int *)(uVar2 * 4 + *(int *)(iVar1 + 4));
}

