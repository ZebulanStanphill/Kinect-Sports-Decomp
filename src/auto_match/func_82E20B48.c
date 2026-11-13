extern int fn_8265CA20();
extern int fn_82E20530();


void fn_82E20B48(int param_1)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  
  puVar2 = *(unsigned int **)(param_1 + 0xc);
  while (puVar2 != (unsigned int *)0x0) {
    puVar1 = (unsigned int *)*puVar2;
    fn_82E20530(puVar2);
    fn_8265CA20(puVar2);
    puVar2 = puVar1;
  }
  *(unsigned int *)(param_1 + 0xc) = 0;
  return;
}

