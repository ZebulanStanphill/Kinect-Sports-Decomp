unsigned int fn_82A40AD8(int *param_1)

{
  unsigned int *puVar1;
  int iVar2;
  unsigned int uVar3;
  
  puVar1 = (unsigned int *)param_1[0x33];
  if (puVar1 != (unsigned int *)0x0) {
    iVar2 = puVar1[1];
    uVar3 = *puVar1;
    param_1[0x33] = iVar2;
    if (iVar2 == 0) {
      param_1[0x34] = 0;
    }
    else {
      *(unsigned int *)(iVar2 + 8) = 0;
    }
    puVar1[1] = *param_1;
    *param_1 = (int)puVar1;
    param_1[0x35] = param_1[0x35] + -1;
    return uVar3;
  }
  return 0;
}

