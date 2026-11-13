void fn_82B43A00(unsigned int *param_1,unsigned int *param_2)

{
  unsigned int *puVar1;
  __int64 lVar2;
  unsigned int *puVar3;
  
  puVar3 = (unsigned int *)*param_1;
  if ((~(unsigned int)puVar3 & 1) == 0) {
    *param_1 = *param_2 | (unsigned int)puVar3;
    return;
  }
  param_2 = (unsigned int *)*param_2;
  if (puVar3 + *puVar3 + 1 <= puVar3 + 1) {
    return;
  }
  lVar2 = (unsigned __int64)((unsigned int)((int)(puVar3 + *puVar3 + 1) + (-1 - (int)(puVar3 + 1))) >> 2) + 1;
  do {
    param_2 = param_2 + 1;
    puVar1 = puVar3 + 1;
    puVar3 = puVar3 + 1;
    *puVar3 = *param_2 | *puVar1;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return;
}

