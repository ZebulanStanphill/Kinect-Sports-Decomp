extern int fn_82A4FA40();


void fn_82A50210(int param_1,unsigned __int64 param_2)

{
  unsigned int *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = *(int **)(param_1 + 0x20);
  iVar2 = 0;
  iVar3 = 0;
  if (piVar4 != (int *)0x0) {
    do {
      if (iVar3 < 0) {
        return;
      }
      if (piVar4 == (int *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *piVar4;
        piVar4 = (int *)piVar4[1];
      }
      iVar2 = (*(int (**)())**(unsigned int **)**(unsigned int **)(iVar3 + 8))
                        ((unsigned int *)**(unsigned int **)(iVar3 + 8),param_2);
      iVar3 = iVar2;
    } while (piVar4 != (int *)0x0);
    if (iVar2 < 0) {
      return;
    }
  }
  puVar1 = *(unsigned int **)(param_1 + 0x80);
  if (puVar1 != (unsigned int *)0x0) {
    iVar2 = (**(int (***)())*puVar1)(puVar1,param_2);
  }
  if ((-1 < iVar2) && (*(int *)(param_1 + 0x34) != 0)) {
    fn_82A4FA40(*(int *)(param_1 + 0x34),param_2);
  }
  return;
}

