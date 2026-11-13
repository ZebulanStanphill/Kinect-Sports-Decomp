extern unsigned int lbl_8218EC10;


void fn_82564018(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = lbl_8218EC10;
  fVar1 = *param_1;
  fVar2 = *param_3;
  if ((((fVar1 <= *param_2) || (fVar2 <= fVar1)) && ((*param_2 <= fVar1 || (fVar1 <= fVar2)))) &&
     (lbl_8218EC10 <= ABS(fVar2 - fVar1))) {
    fVar1 = fVar2;
  }
  *param_3 = fVar1;
  fVar1 = param_1[1];
  fVar2 = param_3[1];
  if ((((fVar1 <= param_2[1]) || (fVar2 <= fVar1)) && ((param_2[1] <= fVar1 || (fVar1 <= fVar2))))
     && (fVar3 <= ABS(fVar2 - fVar1))) {
    fVar1 = fVar2;
  }
  param_3[1] = fVar1;
  fVar1 = param_3[2];
  fVar2 = param_1[2];
  if ((((fVar2 <= param_2[2]) || (fVar1 <= fVar2)) && ((param_2[2] <= fVar2 || (fVar2 <= fVar1))))
     && (fVar3 <= ABS(fVar1 - fVar2))) {
    fVar2 = fVar1;
  }
  param_3[2] = fVar2;
  return;
}

