typedef unsigned char bool;
#define true 1
#define false 0


void fn_8279A230(int param_1,int param_2)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  unsigned int uVar4;
  int iVar5;
  int iVar6;
  
  uVar4 = 0;
  bVar3 = false;
  iVar5 = 0;
  while( true ) {
    if ((((int *)(param_1 + 0x24) == (int *)0x0) || (*(unsigned int *)(param_1 + 0x28) <= uVar4)) ||
       (bVar2 = false, (int)uVar4 < 0)) {
      bVar2 = true;
    }
    if (bVar2) break;
    piVar1 = *(int **)(iVar5 + *(int *)(param_1 + 0x24));
    if (*piVar1 < 0) {
      iVar6 = piVar1[1];
    }
    else {
      iVar6 = piVar1[7];
    }
    if (*(int *)(param_2 + 0x20) == iVar6) {
      bVar3 = true;
      if (*piVar1 < 0) {
        piVar1[2] = piVar1[2] | 0xffffff;
      }
      else {
        piVar1[2] = -1;
      }
    }
    else if (bVar3) break;
    if (uVar4 < *(unsigned int *)(param_1 + 0x28)) {
      uVar4 = uVar4 + 1;
      iVar5 = iVar5 + 4;
    }
  }
  *(unsigned char *)(param_1 + 0x13f) = *(unsigned char *)(param_1 + 0x13f) | 1;
  return;
}

