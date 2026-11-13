unsigned int fn_82A50948(int *param_1)

{
  unsigned int *puVar1;
  int iVar2;
  unsigned int uVar3;
  
  puVar1 = (unsigned int *)param_1[7];
  if (puVar1 != (unsigned int *)0x0) {
    iVar2 = puVar1[2];
    uVar3 = *puVar1;
    param_1[7] = iVar2;
    if (iVar2 == 0) {
      param_1[6] = 0;
    }
    else {
      *(unsigned int *)(iVar2 + 4) = 0;
    }
    puVar1[1] = *param_1;
    *param_1 = (int)puVar1;
    param_1[8] = param_1[8] + -1;
    return uVar3;
  }
  return 0;
}

