extern int lbl_821C9510[];


int * fn_825D0540(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 1;
  do {
    param_1 = (int *)(*param_1 + (int)param_1);
    iVar1 = param_1[1];
    if (lbl_821C9510[iVar1] == 2) {
      iVar2 = iVar2 + 1;
    }
    else if (iVar1 == 0x18) {
      if (iVar2 == 1) {
        return param_1;
      }
      iVar2 = iVar2 + -1;
    }
  } while (iVar1 != 0);
  return (int *)0x0;
}

