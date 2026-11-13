extern int fn_823E1488();
extern int fn_8265CA20();


void fn_823DF780(int param_1)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  
  puVar1 = *(unsigned int **)(*(int *)(param_1 + 4) + 4);
  while (*(char *)((int)puVar1 + 0x51) == '\0') {
    fn_823E1488(param_1,puVar1[2]);
    puVar2 = (unsigned int *)*puVar1;
    fn_8265CA20(puVar1);
    puVar1 = puVar2;
  }
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(unsigned int *)*(unsigned int *)(param_1 + 4) = *(unsigned int *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(unsigned int *)(param_1 + 8) = 0;
  puVar1 = *(unsigned int **)(*(int *)(param_1 + 4) + 4);
  while (*(char *)((int)puVar1 + 0x51) == '\0') {
    fn_823E1488(param_1,puVar1[2]);
    puVar2 = (unsigned int *)*puVar1;
    fn_8265CA20(puVar1);
    puVar1 = puVar2;
  }
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(unsigned int *)*(unsigned int *)(param_1 + 4) = *(unsigned int *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(unsigned int *)(param_1 + 8) = 0;
  fn_8265CA20(*(unsigned int *)(param_1 + 4));
  return;
}

