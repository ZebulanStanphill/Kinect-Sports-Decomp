void fn_82461790(int param_1,int *param_2)

{
  unsigned int *piVar1;
  __int64 lVar2;
  
  if (*param_2 != 0x44) {
    return;
  }
  piVar1 = (int *)(param_1 + 0x1d8);
  lVar2 = 2;
  do {
    if ((piVar1[-2] != 0) && (piVar1[-2] == param_2[2])) {
      piVar1[-2] = 0;
    }
    if ((*piVar1 != 0) && (*piVar1 == param_2[2])) {
      *piVar1 = 0;
    }
    piVar1 = piVar1 + 1;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return;
}

