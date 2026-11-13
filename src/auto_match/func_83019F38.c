#define true 1


unsigned __int64 fn_83019F38(int *param_1,int param_2,int *param_3)

{
  unsigned int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = (int *)*param_1;
  piVar2 = (int *)0x0;
  while( true ) {
    piVar1 = piVar3;
    if (piVar1 == (int *)0x0) {
      return 2;
    }
    if ((piVar1[1] == param_2) && (piVar1[2] == *param_3)) break;
    piVar3 = (int *)*piVar1;
    piVar2 = piVar1;
  }
  if (piVar1 == (int *)*param_1) {
    *param_1 = *piVar1;
  }
  else {
    *piVar2 = *piVar1;
  }
  if (piVar1 == (int *)param_1[1]) {
    param_1[1] = (int)piVar2;
  }
  *piVar1 = param_1[2];
  param_1[2] = (int)piVar1;
  param_1[5] = param_1[5] + -1;
  return 1;
}

