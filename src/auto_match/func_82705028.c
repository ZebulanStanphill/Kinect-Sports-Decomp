extern int fn_8267BE38();
extern int fn_826CECC8();
extern int fn_82704708();


void fn_82705028(int param_1)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  
  fn_82704708();
  puVar2 = *(unsigned int **)(param_1 + 0x4c);
  while (puVar2 != (unsigned int *)0x0) {
    puVar1 = (unsigned int *)*puVar2;
    fn_826CECC8(puVar2);
    fn_8267BE38(puVar2);
    puVar2 = puVar1;
  }
  return;
}

