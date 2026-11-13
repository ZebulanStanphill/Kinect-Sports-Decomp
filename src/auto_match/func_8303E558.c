#define true 1


unsigned __int64 fn_8303E558(int param_1,unsigned int param_2,short *param_3)

{
  unsigned short sVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 4);
  sVar1 = 0;
  while( true ) {
    if (piVar2 == *(int **)(param_1 + 8)) {
      return 0;
    }
    if (*piVar2 == param_2) break;
    piVar2 = piVar2 + 2;
    sVar1 = sVar1 + 1;
  }
  *param_3 = sVar1;
  return 1;
}

