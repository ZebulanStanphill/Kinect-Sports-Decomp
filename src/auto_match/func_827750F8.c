extern int fn_827742D0();


void fn_827750F8(unsigned int *param_1,int param_2)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  
  puVar2 = (unsigned int *)param_1[1];
  while (puVar2 != param_1) {
    puVar1 = (unsigned int *)puVar2[1];
    fn_827742D0(puVar2,0);
    *puVar2 = *(unsigned int *)(param_2 + 0xc);
    *(unsigned int **)(param_2 + 0xc) = puVar2;
    puVar2 = puVar1;
  }
  *param_1 = param_1;
  param_1[1] = param_1;
  return;
}

