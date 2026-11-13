extern unsigned int lbl_8320A778;


void fn_82822A38(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = lbl_8320A778;
  piVar1 = (int *)param_1[1];
  param_1[1] = piVar1[2];
  if ((int *)piVar1[2] != piVar3) {
    *(int *)piVar1[2] = (int)param_1;
  }
  if (piVar1 != piVar3) {
    *piVar1 = *param_1;
  }
  piVar2 = (int *)*param_1;
  if (piVar2 != piVar3) {
    if (param_1 == (int *)piVar2[2]) {
      piVar2[2] = (int)piVar1;
    }
    else {
      piVar2[1] = (int)piVar1;
    }
  }
  piVar1[2] = (int)param_1;
  if (param_1 == piVar3) {
    return;
  }
  *param_1 = (int)piVar1;
  return;
}

