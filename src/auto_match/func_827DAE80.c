extern int fn_827D9E98();


void fn_827DAE80(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  RtlEnterCriticalSection(param_1 + 0xbfc);
  do {
    iVar3 = 0;
    piVar1 = (int *)**(int **)(param_1 + 0xb60);
    if (piVar1 == *(int **)(param_1 + 0xb60)) break;
    do {
      iVar2 = fn_827D9E98(piVar1[3]);
      if (iVar2 != 0) {
        iVar3 = iVar3 + 1;
      }
      piVar1 = (int *)*piVar1;
    } while (piVar1 != (int *)*(int *)(param_1 + 0xb60));
  } while (0 < iVar3);
  RtlLeaveCriticalSection(param_1 + 0xbfc);
  return;
}

