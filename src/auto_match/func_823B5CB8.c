extern int fn_822315A0();


void fn_823B5CB8(int param_1)

{
  unsigned int *puVar1;
  
  puVar1 = *(unsigned int **)(param_1 + 8);
  if (puVar1 != (unsigned int *)0x0) {
    (*(int (**)())*puVar1)(puVar1,1);
  }
  if (*(unsigned int *)(param_1 + 4) != 0) {
    fn_822315A0(*(unsigned int *)(param_1 + 4));
  }
  return;
}

