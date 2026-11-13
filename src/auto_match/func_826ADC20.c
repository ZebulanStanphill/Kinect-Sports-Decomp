extern int fn_8267BE38();


void fn_826ADC20(int param_1)

{
  unsigned int *puVar1;
  
  puVar1 = *(unsigned int **)(param_1 + 4);
  if (puVar1 != (unsigned int *)0x0) {
    fn_8267BE38(*puVar1);
    fn_8267BE38(puVar1);
  }
  return;
}

