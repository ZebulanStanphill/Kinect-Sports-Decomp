#define true 1


int * fn_824C5838(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int **ppiVar4;
  int *piVar5;
  int *piVar6;
  int *piStack_40;
  int *apiStack_3c [1];
  
  piVar1 = *(int **)(param_1 + 0x2c);
  piVar2 = *(int **)(param_1 + 0x28);
  apiStack_3c[0] = piVar1;
  piVar5 = piVar2;
  piVar6 = piVar2;
  if (piVar2 != piVar1) {
    do {
      piVar6 = piVar5;
      if (*piVar5 == *(int *)(param_1 + 0x38)) break;
      piVar5 = piVar5 + 2;
      piVar6 = piVar5;
    } while (piVar5 != piVar1);
  }
  while( true ) {
    piStack_40 = piVar5 + 2;
    if (piStack_40 == piVar1) {
      piStack_40 = piVar2;
    }
    ppiVar4 = apiStack_3c;
    if (piStack_40 != piVar6) {
      ppiVar4 = &piStack_40;
    }
    piVar5 = *ppiVar4;
    if (piVar5 == piVar1) break;
    iVar3 = (**(int (***)())(*(int *)*piVar5 + 0xc))();
    if (iVar3 != 0) {
      return piVar5;
    }
  }
  return (int *)(param_1 + 0x38);
}

