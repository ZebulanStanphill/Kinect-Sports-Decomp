void fn_82D046D0(unsigned int *param_1,int param_2)

{
  int iVar1;
  unsigned char *puVar2;
  
  if (param_2 < 1) {
    return;
  }
  puVar2 = (unsigned char *)*param_1;
  iVar1 = param_1[1] - param_2;
  param_1[1] = iVar1;
  if (0 < iVar1) {
    do {
      *puVar2 = puVar2[param_2];
      puVar2 = puVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    return;
  }
  return;
}

