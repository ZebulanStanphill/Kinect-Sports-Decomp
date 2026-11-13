extern unsigned int lbl_82006848;


void fn_82FEF428(float *param_1,float *param_2)

{
  float fVar1;
  
  fVar1 = lbl_82006848;
  *param_2 = *param_1 * lbl_82006848 + param_1[6];
  param_2[1] = param_1[1] * fVar1 + param_1[7];
  param_2[2] = param_1[2] * fVar1 + param_1[8];
  param_2[3] = -*param_1;
  param_2[4] = -param_1[1];
  param_2[5] = -param_1[2];
  return;
}

