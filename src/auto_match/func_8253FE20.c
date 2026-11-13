#define NAN(x) ((x) != (x))
extern unsigned int lbl_821954D8;
extern unsigned int ltcg_pool_0_0f;


void fn_8253FE20(double param_1,double param_2,float *param_3,unsigned __int64 param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  dVar6 = (double)(float)((double)*param_5 * param_2);
  dVar5 = (double)(float)(param_1 - (double)*param_3);
  fVar1 = *param_3;
  dVar3 = (double)ltcg_pool_0_0f;
  dVar7 = (double)(float)(ABS((double)(float)(param_1 - (double)*param_3)) - dVar6);
  if (*(float *)(&lbl_821954D8 +
                ((unsigned int)(unsigned char)((dVar7 < dVar3) << 2) | (unsigned int)(NAN(dVar7) || NAN(dVar3)) << 2)) < 0.0)
  {
    dVar6 = dVar3;
  }
  fVar2 = *(float *)(&lbl_821954D8 +
                    ((unsigned int)(unsigned char)((dVar5 < dVar3) << 2) | (unsigned int)(NAN(dVar5) || NAN(dVar3)) << 2));
  dVar4 = (double)*param_5;
  if (*(float *)(&lbl_821954D8 +
                ((unsigned int)(unsigned char)((dVar7 < dVar3) << 2) | (unsigned int)(NAN(dVar7) || NAN(dVar3)) << 2)) < 0.0)
  {
    dVar4 = dVar3;
  }
  *param_5 = (float)dVar4;
  if (fVar2 < 0.0) {
    dVar6 = -dVar6;
  }
  dVar6 = (double)(float)(dVar6 + (double)fVar1);
  if (*(float *)(&lbl_821954D8 +
                ((unsigned int)(unsigned char)((dVar5 < dVar3) << 2) | (unsigned int)(NAN(dVar5) || NAN(dVar3)) << 2)) < 0.0)
  {
    dVar6 = param_1;
  }
  *param_3 = (float)dVar6;
  return;
}

