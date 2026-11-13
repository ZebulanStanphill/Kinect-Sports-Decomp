extern int fn_8280A5D8();
extern int fn_82811898();
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_832115A6;


void fn_8285CF40(float *param_1,float *param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  float *param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar4 = (double)lbl_82002C5C;
  dVar3 = (double)(float)((double)param_1[2] * dVar4);
  dVar2 = (double)(float)((double)param_1[3] * dVar4);
  fn_82811898(dVar3,-dVar2,param_3);
  if (lbl_832115A6 == '\0') {
    dVar1 = (double)(float)((double)param_1[1] + dVar2) + dVar4;
    dVar4 = (double)(float)((double)*param_1 + dVar3) + dVar4;
  }
  else {
    dVar1 = (double)param_1[1] + dVar2;
    dVar4 = (double)*param_1 + dVar3;
  }
  fn_82811898((double)(float)dVar4,(double)(float)dVar1,param_4);
  dVar4 = (double)fn_8280A5D8(dVar2);
  dVar2 = (double)fn_8280A5D8(dVar3);
  *param_5 = (float)((double)*param_2 * dVar4);
  param_5[1] = (float)((double)param_2[1] * dVar4);
  param_5[2] = (float)((double)param_2[2] * dVar2);
  param_5[3] = (float)((double)param_2[3] * dVar2);
  return;
}

