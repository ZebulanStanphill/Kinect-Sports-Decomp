extern int fn_82520780();
extern unsigned int lbl_821917C0;


int fn_82304720(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  
  piVar5 = *(int **)(param_1 + 0x1e0);
  iVar4 = 4;
  if (*piVar5 == 1) {
    iVar4 = 2;
    piVar5[1] = 1;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x1e4);
    if (iVar1 == 1) {
      iVar4 = 1;
      *(unsigned int *)(param_1 + 0x1e4) = 2;
    }
    else if (iVar1 == 2) {
      iVar4 = 2;
    }
    else if (iVar1 == 3) {
      iVar4 = 3;
    }
    else if (iVar1 == 4) {
      iVar4 = 3;
      iVar1 = fn_82520780((double)(float)piVar5[3],0xffffffff83265a28);
      if (iVar1 != 0) {
        iVar4 = 1;
      }
      *(int *)(param_1 + 0x1e4) = iVar4;
    }
  }
  if ((param_2 != 0) && (iVar4 == 3)) {
    *(unsigned int *)(param_1 + 0x1b0) = 0;
    piVar5 = (int *)(param_1 + 0x170);
    iVar1 = fn_82520780((double)lbl_821917C0,0xffffffff83265a28);
    if (iVar1 != 0) {
      piVar3 = piVar5 + *(unsigned int *)(param_1 + 0x1b0);
      for (piVar2 = piVar5; (piVar2 != piVar3 && (*piVar2 != *(int *)(param_1 + 0x1e8)));
          piVar2 = piVar2 + 1) {
      }
      if ((piVar2 == piVar3) && (*(unsigned int *)(param_1 + 0x1b0) < 0x10)) {
        *piVar3 = *(int *)(param_1 + 0x1e8);
        *(int *)(param_1 + 0x1b0) = *(int *)(param_1 + 0x1b0) + 1;
      }
      piVar2 = piVar5 + *(unsigned int *)(param_1 + 0x1b0);
      for (; (piVar5 != piVar2 && (*piVar5 != *(int *)(param_1 + 0x1ec))); piVar5 = piVar5 + 1) {
      }
      if ((piVar5 == piVar2) && (*(unsigned int *)(param_1 + 0x1b0) < 0x10)) {
        *piVar2 = *(int *)(param_1 + 0x1ec);
        *(int *)(param_1 + 0x1b0) = *(int *)(param_1 + 0x1b0) + 1;
      }
    }
  }
  *(unsigned int *)(*(int *)(param_1 + 0x1e0) + 8) = (unsigned int)LZCOUNT(iVar4 + -1) >> 5;
  return iVar4;
}

