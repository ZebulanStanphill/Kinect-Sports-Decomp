extern int fn_8225F160();
extern int fn_8225F3C0();
extern unsigned int lbl_8218E8E8;


float * fn_8249CED0(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  
  fn_8225F160();
  iVar5 = fn_8225F3C0();
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar4 = param_2[3];
  *param_1 = fVar1;
  param_1[1] = fVar2;
  param_1[2] = fVar3;
  param_1[3] = fVar4;
  if (1 < iVar5) {
    param_1[2] = fVar3;
    *param_1 = fVar1 + ABS(fVar3 - fVar1) * lbl_8218E8E8;
  }
  return param_1;
}

