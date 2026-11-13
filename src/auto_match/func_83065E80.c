#define true 1


void fn_83065E80(int param_1,unsigned int *param_2)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  
  puVar2 = *(unsigned int **)(param_1 + 4);
  puVar3 = (unsigned int *)0x0;
  while( true ) {
    puVar1 = puVar2;
    if (puVar1 == (unsigned int *)0x0) {
      return;
    }
    if (puVar1 == param_2) break;
    puVar2 = (unsigned int *)*puVar1;
    puVar3 = puVar1;
  }
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) - puVar1[1];
  if (puVar3 == (unsigned int *)0x0) {
    *(unsigned int *)(param_1 + 4) = *puVar1;
  }
  else {
    *puVar3 = *puVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x83065ee8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(int (***)())(**(int **)(param_1 + 8) + 4))(*(int **)(param_1 + 8),puVar1);
  return;
}

