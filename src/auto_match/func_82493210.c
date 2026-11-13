extern int fn_825604A0();
extern int fn_82F63108();


void fn_82493210(int param_1)

{
  unsigned int *puVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  
  puVar1 = *(unsigned int **)(param_1 + 0x5c);
  if (puVar1[0x1f] != 0) {
    iVar2 = *(int *)(*(int *)*puVar1 + 8);
    if (*(int *)(iVar2 + 0x22c) != 0) {
      fn_825604A0(iVar2 + 0x20);
      *(unsigned int *)(iVar2 + 0x22c) = 0;
    }
  }
  piVar3 = (int *)puVar1[9];
  if ((int *)puVar1[8] != piVar3) {
    piVar5 = (int *)puVar1[8] + 4;
    do {
      if ((int *)*piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        fn_82F63108();
      }
      (**(int (***)())(*(int *)*piVar5 + 4))();
      piVar4 = piVar5 + 2;
      piVar5 = piVar5 + 6;
    } while (piVar4 != piVar3);
  }
  return;
}

