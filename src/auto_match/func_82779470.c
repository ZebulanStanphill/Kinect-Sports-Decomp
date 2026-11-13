extern unsigned int lbl_82002C5C;


void fn_82779470(double param_1,unsigned char *param_2,unsigned char *param_3,unsigned char *param_4)

{
  unsigned char bVar1;
  unsigned char bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar5 = lbl_82002C5C;
  bVar1 = param_3[1];
  bVar2 = param_4[1];
  fVar3 = (float)((double)(float)((double)param_4[3] - (double)param_3[3]) * param_1 +
                 (double)param_3[3]) + lbl_82002C5C;
  fVar4 = (float)((double)(float)((double)*param_4 - (double)*param_3) * param_1 + (double)*param_3)
          + lbl_82002C5C;
  param_2[2] = (char)(int)((float)((double)(float)((double)param_4[2] - (double)param_3[2]) *
                                   param_1 + (double)param_3[2]) + lbl_82002C5C);
  param_2[3] = (char)(int)fVar3;
  param_2[1] = (char)(int)((float)((double)(float)((double)bVar2 - (double)bVar1) * param_1 +
                                  (double)bVar1) + fVar5);
  *param_2 = (char)(int)fVar4;
  return;
}

