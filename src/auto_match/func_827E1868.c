extern unsigned int *auStack_20;
extern int fn_822315A0();
extern int fn_827D5108();
extern int fn_827E2628();
extern int fn_827E2790();
extern unsigned int iStack_1c;


void fn_827E1868(int param_1)

{
  unsigned int *puVar1;
  unsigned char auStack_20 [4];
  int iStack_1c;
  
  if ((*(int **)(param_1 + 0x40) != (int *)0x0) &&
     ((**(int (***)())(**(int **)(param_1 + 0x40) + 0xc))(), *(char *)(param_1 + 0x39) == '\0')) {
    puVar1 = *(unsigned int **)(param_1 + 0x40);
    if (puVar1 != (unsigned int *)0x0) {
      (**(int (***)())*puVar1)(puVar1,1);
    }
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    puVar1 = (unsigned int *)fn_827E2790(auStack_20);
    fn_827D5108(*puVar1,3);
    if (iStack_1c != 0) {
      fn_822315A0();
    }
    fn_827E2628(*(unsigned int *)(param_1 + 0x28));
  }
  return;
}

