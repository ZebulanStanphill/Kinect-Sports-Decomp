extern int fn_8265C990();


void fn_82903DB8(int param_1)

{
  unsigned int *puVar1;
  
  puVar1 = *(unsigned int **)(param_1 + 8);
  if (puVar1 != (unsigned int *)0x0) {
    (*(int (**)())*puVar1)(puVar1,1);
  }
  fn_8265C990(*(unsigned int *)(param_1 + 0x18),0x24810000);
  fn_8265C990(*(unsigned int *)(param_1 + 0x90),0x24810000);
  fn_8265C990(*(unsigned int *)(param_1 + 0x98),0x24810000);
  fn_8265C990(*(unsigned int *)(param_1 + 0xa0),0x24810000);
  return;
}

