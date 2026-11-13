extern int fn_83033020();


void fn_8300F998(int param_1,unsigned __int64 param_2)

{
  unsigned int *puVar1;
  
  for (puVar1 = *(unsigned int **)(param_1 + 0x50); puVar1 != (unsigned int *)0x0;
      puVar1 = (unsigned int *)*puVar1) {
    if ((*(unsigned int *)(*(int *)(puVar1[2] + 8) + 0x14) & 0xffffff00) == 0x501100) {
      fn_83033020(*(int *)(puVar1[2] + 8),param_2);
    }
  }
  for (puVar1 = *(unsigned int **)(param_1 + 0x70); puVar1 != (unsigned int *)0x0;
      puVar1 = (unsigned int *)*puVar1) {
    if ((*(unsigned int *)(*(int *)(puVar1[2] + 8) + 0x14) & 0xffffff00) == 0x501100) {
      fn_83033020(*(int *)(puVar1[2] + 8),param_2);
    }
  }
  return;
}

