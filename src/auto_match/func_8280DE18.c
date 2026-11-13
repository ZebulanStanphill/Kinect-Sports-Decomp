extern int fn_828095F8();
extern int fn_8280A550();
extern unsigned int lbl_821AAD20;


void fn_8280DE18(float *param_1,float *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar2 = (double)lbl_821AAD20;
  dVar3 = (double)(param_1[2] * param_1[2] + *param_1 * *param_1 + param_1[1] * param_1[1]);
  if (dVar2 < dVar3) {
    dVar1 = (double)fn_828095F8((double)param_1[3]);
    dVar3 = (double)fn_8280A550(dVar3);
    dVar3 = (double)(float)(dVar3 * dVar1);
  }
  param_2[3] = (float)dVar2;
  *param_2 = (float)((double)*param_1 * dVar3);
  param_2[1] = (float)((double)param_1[1] * dVar3);
  param_2[2] = (float)(dVar3 * (double)param_1[2]);
  return;
}

