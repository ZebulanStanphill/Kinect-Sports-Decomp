extern int fn_828B9180();


void fn_828B68E8(unsigned int *param_1,unsigned int *param_2,unsigned int *param_3)

{
  unsigned int uVar1;
  double dVar2;
  double dVar3;
  
  uVar1 = *param_1;
  dVar2 = (double)fn_828B9180(*param_2);
  dVar3 = (double)fn_828B9180(uVar1);
  if (dVar3 < dVar2) {
    uVar1 = param_2[1];
    param_2[1] = param_1[1];
    param_1[1] = uVar1;
    uVar1 = *param_2;
    *param_2 = *param_1;
    *param_1 = uVar1;
  }
  uVar1 = *param_2;
  dVar2 = (double)fn_828B9180(*param_3);
  dVar3 = (double)fn_828B9180(uVar1);
  if (dVar3 < dVar2) {
    uVar1 = param_3[1];
    param_3[1] = param_2[1];
    param_2[1] = uVar1;
    uVar1 = *param_3;
    *param_3 = *param_2;
    *param_2 = uVar1;
  }
  uVar1 = *param_1;
  dVar2 = (double)fn_828B9180(*param_2);
  dVar3 = (double)fn_828B9180(uVar1);
  if (dVar3 < dVar2) {
    uVar1 = param_2[1];
    param_2[1] = param_1[1];
    param_1[1] = uVar1;
    uVar1 = *param_2;
    *param_2 = *param_1;
    *param_1 = uVar1;
  }
  return;
}

