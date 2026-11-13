extern int fn_82522ED8();
extern int fn_8252D020();
extern int fn_82A1C0F0();


void fn_82507370(int param_1)

{
  unsigned int *puVar1;
  
  fn_82A1C0F0(param_1 + 0xf58);
  puVar1 = *(unsigned int **)(param_1 + 0xff0);
  if (puVar1 != (unsigned int *)0x0) {
    (*(int (**)())*puVar1)(puVar1,0);
    fn_82522ED8(puVar1);
  }
  if (*(unsigned int *)(param_1 + 0xb68) != 0) {
    fn_8252D020(param_1,1);
    *(unsigned int *)(param_1 + 0xb68) = 0;
  }
  return;
}

