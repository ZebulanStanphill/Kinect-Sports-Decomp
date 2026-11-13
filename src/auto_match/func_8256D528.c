unsigned int * fn_8256D528(unsigned int *param_1)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  unsigned char auStack_20 [4];
  int iStack_1c;

  puVar2 = (unsigned int *)Function_82365BD8(auStack_20);
  uVar1 = puVar2[1];
  puVar2[1] = param_1[1];
  param_1[1] = uVar1;
  uVar1 = *puVar2;
  *puVar2 = *param_1;
  *param_1 = uVar1;
  if (iStack_1c != 0) {
    Function_822315A0();
  }
  return param_1;
}
