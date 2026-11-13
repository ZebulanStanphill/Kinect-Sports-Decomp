extern int fn_822315A0();
extern unsigned int iStack00000014;


void fn_827E26D0(int param_1)

{
  unsigned int *puVar1;
  int iStack00000014;
  
  iStack00000014 = param_1;
  if (*(int **)(param_1 + 0x24) != (int *)0x0) {
    (**(int (***)())(**(int **)(param_1 + 0x24) + 8))();
    puVar1 = *(unsigned int **)(param_1 + 0x24);
    if (puVar1 != (unsigned int *)0x0) {
      (**(int (***)())*puVar1)(puVar1,1);
    }
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    fn_822315A0();
  }
  return;
}

