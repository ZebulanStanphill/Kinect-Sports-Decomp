extern int fn_8252AE68();
extern int fn_82F63CA0();


void fn_824644A0(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  if (*param_2 == 0x42) {
    iVar2 = param_2[2];
    if (((*(int *)(param_1 + 4) != 5) && (*(int *)(param_1 + 4) != 6)) &&
       ((iVar2 == *(int *)(param_1 + 0x24) || (iVar2 == *(int *)(param_1 + 0x20))))) {
      fn_8252AE68(iVar2,1);
    }
    if (iVar2 == *(int *)(param_1 + 0x1c)) {
      fn_8252AE68(iVar2,1);
    }
  }
  else if (*param_2 == 0x44) {
    piVar1 = *(int **)(param_1 + 0x58);
    piVar4 = *(int **)(param_1 + 0x54);
    if (piVar4 != piVar1) {
      do {
        if (*piVar4 == param_2[2]) break;
        piVar4 = piVar4 + 1;
      } while (piVar4 != piVar1);
      piVar3 = piVar4;
      if (piVar4 != piVar1) {
        while (piVar3 = piVar3 + 1, piVar3 != piVar1) {
          if (*piVar3 != param_2[2]) {
            *piVar4 = *piVar3;
            piVar4 = piVar4 + 1;
          }
        }
      }
    }
    if (piVar4 != piVar1) {
      iVar2 = *(int *)(param_1 + 0x58) - (int)piVar1 >> 2;
      fn_82F63CA0(piVar4,piVar1,iVar2 * 4);
      *(int **)(param_1 + 0x58) = piVar4 + iVar2;
    }
  }
  return;
}

