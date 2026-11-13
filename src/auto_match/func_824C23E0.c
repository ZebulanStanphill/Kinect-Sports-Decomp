extern int fn_82F63108();


void fn_824C23E0(int param_1)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned int **ppuVar3;
  unsigned int *apuStack_20 [2];
  
  if (*(int *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    fn_82F63108();
  }
  (**(int (***)())(**(int **)(param_1 + 0x20) + 4))(apuStack_20);
  puVar2 = apuStack_20[0];
  ppuVar3 = (unsigned int **)(param_1 + 8);
  if (ppuVar3 != apuStack_20) {
    puVar1 = *ppuVar3;
    apuStack_20[0] = (unsigned int *)0x0;
    if (puVar2 == puVar1) {
      return;
    }
    if (puVar1 != (unsigned int *)0x0) {
      (**(int (***)())*puVar1)(puVar1,1);
    }
    *ppuVar3 = puVar2;
  }
  if (apuStack_20[0] != (unsigned int *)0x0) {
    (**(int (***)())*apuStack_20[0])(apuStack_20[0],1);
  }
  return;
}

