extern int fn_8265C990();


void fn_82E916B0(unsigned int *param_1)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  
  puVar2 = (unsigned int *)param_1[2];
  while (puVar2 != (unsigned int *)0x0) {
    puVar1 = (unsigned int *)*puVar2;
    fn_8265C990(puVar2,0x248c8000);
    puVar2 = puVar1;
  }
  puVar2 = (unsigned int *)*param_1;
  while (puVar2 != (unsigned int *)0x0) {
    puVar1 = (unsigned int *)*puVar2;
    fn_8265C990(puVar2,0x248c8000);
    puVar2 = puVar1;
  }
  return;
}

