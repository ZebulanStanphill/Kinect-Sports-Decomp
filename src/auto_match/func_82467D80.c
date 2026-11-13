extern int fn_822733C8();
extern int fn_8265CA20();


void fn_82467D80(int param_1)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  
  puVar2 = *(unsigned int **)(*(int *)(param_1 + 4) + 4);
  while (*(char *)((int)puVar2 + 0x11) == '\0') {
    fn_822733C8(param_1,puVar2[2]);
    puVar1 = (unsigned int *)*puVar2;
    fn_8265CA20(puVar2);
    puVar2 = puVar1;
  }
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(unsigned int *)*(unsigned int *)(param_1 + 4) = *(unsigned int *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(unsigned int *)(param_1 + 8) = 0;
  return;
}

