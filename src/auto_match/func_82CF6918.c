void fn_82CF6918(int param_1,int param_2,unsigned int param_3)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  
  uVar2 = param_3 >> 2;
  if (param_3 < 4) {
    return;
  }
  puVar1 = (unsigned int *)((uVar2 - 1) * 4 + param_1);
  do {
    *puVar1 = *(unsigned int *)((param_2 - param_1) + (int)puVar1);
    puVar1 = puVar1 + -1;
    uVar2 = uVar2 - 1;
  } while (uVar2 != 0);
  return;
}

