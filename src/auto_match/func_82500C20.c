extern int fn_8252D020();
extern int fn_82A1C0F0();


void fn_82500C20(int param_1)

{
  unsigned int *puVar1;
  
  fn_82A1C0F0(param_1 + 0xf58);
  if (*(unsigned int *)(param_1 + 0xb64) != 0) {
    fn_8252D020(param_1,1);
    *(unsigned int *)(param_1 + 0xb64) = 0;
  }
  puVar1 = *(unsigned int **)(param_1 + 0xb60);
  if (puVar1 != (unsigned int *)0x0) {
    (*(int (**)())*puVar1)(puVar1,1);
    *(unsigned int *)(param_1 + 0xb60) = 0;
  }
  return;
}

