#define true 1


int fn_8300F938(int param_1,unsigned int param_2)

{
  unsigned int *puVar1;
  
  for (puVar1 = *(unsigned int **)(param_1 + 0x50); puVar1 != (unsigned int *)0x0;
      puVar1 = (unsigned int *)*puVar1) {
    if (*(int *)(puVar1[2] + 0x28) == param_2) {
      return puVar1[2];
    }
  }
  puVar1 = *(unsigned int **)(param_1 + 0x70);
  while( true ) {
    if (puVar1 == (unsigned int *)0x0) {
      return 0;
    }
    if (*(int *)(puVar1[2] + 0x28) == param_2) break;
    puVar1 = (unsigned int *)*puVar1;
  }
  return puVar1[2];
}

