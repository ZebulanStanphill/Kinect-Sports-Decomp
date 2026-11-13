extern int fn_82809950();
extern float lbl_82195590;
extern unsigned int lbl_82195598;
extern float lbl_821955A0;


void fn_8262EE50(double param_1,float *param_2)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar3 = (double)fn_82809950((double)param_2[4]);
  param_2[0x10] = (float)(dVar3 * (double)param_2[0xc] + (double)param_2[8]);
  dVar3 = (double)fn_82809950((double)param_2[5]);
  param_2[0x11] = (float)(dVar3 * (double)param_2[0xd] + (double)param_2[9]);
  dVar3 = (double)fn_82809950((double)param_2[6]);
  fVar1 = param_2[0x14];
  param_2[0x12] = (float)(dVar3 * (double)param_2[0xe] + (double)param_2[10]);
  param_2[0x14] = (float)((int)fVar1 + -1);
  if ((int)fVar1 < 1) {
    param_2[0x14] = 1.4013e-44;
    dVar4 = (double)((float)((double)*param_2 * param_1 + (double)param_2[4]) * lbl_82195590);
    dVar3 = (double)((float)((double)param_2[1] * param_1 + (double)param_2[5]) * lbl_82195590);
    dVar2 = (double)((float)((double)param_2[2] * param_1 + (double)param_2[6]) * lbl_82195590);
    dVar3 = (dVar3 - (double)(__int64)(dVar3 - lbl_82195598)) * lbl_821955A0;
    dVar2 = (dVar2 - (double)(__int64)(dVar2 - lbl_82195598)) * lbl_821955A0;
    param_2[4] = (float)((dVar4 - (double)(__int64)(dVar4 - lbl_82195598)) * lbl_821955A0);
    param_2[6] = (float)dVar2;
  }
  else {
    param_2[4] = (float)((double)*param_2 * param_1 + (double)param_2[4]);
    param_2[6] = (float)((double)param_2[2] * param_1 + (double)param_2[6]);
    dVar3 = (double)param_2[1] * param_1 + (double)param_2[5];
  }
  param_2[5] = (float)dVar3;
  return;
}

