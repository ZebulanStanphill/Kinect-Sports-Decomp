unsigned __int64 fn_82FB2DD0(int *param_1,int *param_2)

{
  int iVar2;
  short sVar3;
  unsigned __int64 uVar1;
  int *piVar4;
  
  iVar2 = (**(int (***)())(*param_2 + 0x14))(param_2);
  sVar3 = (**(int (***)())(*param_1 + 0x158))(param_1);
  if (sVar3 == -1) {
    uVar1 = 9;
  }
  else if (iVar2 == 7) {
    if (param_2[4] == 0) {
      for (piVar4 = (int *)param_1[0x1f];
          (piVar4 != (int *)param_1[0x20] && (*piVar4 != param_2[3])); piVar4 = piVar4 + 2) {
      }
      if ((-(unsigned int)((int *)param_1[0x20] != piVar4) & (unsigned int)(piVar4 + 1)) == 0) {
        uVar1 = 0x17;
        if (param_1[3] != param_2[3]) {
          uVar1 = 1;
        }
      }
      else {
        uVar1 = 5;
      }
    }
    else {
      uVar1 = 0x15;
    }
  }
  else {
    uVar1 = 4;
  }
  return uVar1;
}

