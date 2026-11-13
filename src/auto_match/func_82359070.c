extern int fn_8248F9F8();


void fn_82359070(int param_1,unsigned int *param_2)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  
  puVar1 = *(unsigned int **)(param_1 + 0x94);
  if (puVar1 == (unsigned int *)0x0) {
    if (param_2 != (unsigned int *)0x0) {
      (**(int (***)())*param_2)(param_2,1);
    }
  }
  else {
    fn_8248F9F8(param_2,*puVar1,param_2[0xc]);
    puVar2 = (unsigned int *)puVar1[7];
    if (puVar2 != (unsigned int *)0x0) {
      (**(int (***)())*puVar2)(puVar2,1);
    }
    puVar1[7] = param_2;
  }
  return;
}

