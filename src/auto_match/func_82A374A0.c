extern int fn_8265C990();


void fn_82A374A0(int *param_1)

{
  int *piVar1;
  __int64 lVar2;
  int *piVar3;
  
  lVar2 = 2;
  piVar1 = param_1;
  do {
    piVar3 = piVar1 + 10;
    if (*piVar3 != 0) {
      if (piVar1[5] == 0x103) {
        NtWaitForSingleObjectEx(*piVar3,1,0,0);
        piVar1[5] = piVar1[6];
        piVar1[4] = piVar1[7];
      }
      NtClose(*piVar3);
      piVar1[6] = 0;
      piVar1[7] = 0;
      piVar1[8] = 0;
      piVar1[9] = 0;
      *piVar3 = 0;
    }
    if ((param_1[0x16] != 0) && (piVar1[3] != 0)) {
      fn_8265C990(piVar1[3],0x24830000);
    }
    piVar1[3] = 0;
    lVar2 = lVar2 + -1;
    piVar1[5] = 0;
    piVar1 = piVar3;
  } while (lVar2 != 0);
  *param_1 = 0;
  param_1[0x16] = 0;
  return;
}

