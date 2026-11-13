typedef unsigned char bool;
#define true 1
#define false 0


bool fn_82415198(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 == (int *)0x0) {
    return false;
  }
  if (*piVar1 == 10) {
    if (piVar1[2] == 0) {
      return false;
    }
    iVar2 = *(int *)(piVar1[2] + 8);
  }
  else {
    if (piVar1 == (int *)0x0) {
      return false;
    }
    piVar3 = *(int **)(param_1 + 8);
    if ((piVar3 != (int *)0x0) && (*piVar3 + *piVar1 == 10)) {
      return piVar3[2] != 0;
    }
    if (piVar1 == (int *)0x0) {
      return false;
    }
    iVar2 = *(int *)(param_1 + 8);
  }
  if (iVar2 == 0) {
    return false;
  }
  return true;
}

