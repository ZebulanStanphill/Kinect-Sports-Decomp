unsigned __int64 fn_83032130(int param_1,int *param_2)

{
  int iVar2;
  unsigned __int64 uVar1;
  int *piVar3;
  
  iVar2 = (**(int (***)())(*param_2 + 0x14))(param_2);
  if (iVar2 == 0) {
    uVar1 = 4;
  }
  else if (param_2[4] == 0) {
    for (piVar3 = *(int **)(param_1 + 0x7c);
        (piVar3 != *(int **)(param_1 + 0x80) && (*piVar3 != param_2[3])); piVar3 = piVar3 + 2) {
    }
    if ((-(unsigned int)(*(int **)(param_1 + 0x80) != piVar3) & (unsigned int)(piVar3 + 1)) == 0) {
      uVar1 = 0x17;
      if (*(int *)(param_1 + 0xc) != param_2[3]) {
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
  return uVar1;
}

