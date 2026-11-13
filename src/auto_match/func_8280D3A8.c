extern unsigned int *auStack_60;
extern int fn_8280CE38();
extern int fn_8280E168();
extern int fn_82F6A538();
extern int fn_82F6A584();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;


void fn_8280D3A8(unsigned __int64 param_1,double param_2,double param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5,unsigned __int64 param_6,double param_7,double param_8,double param_9
                  ,double param_10)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  double extraout_f1;
  double dVar4;
  double dVar5;
  double dVar6;
  unsigned char auStack_60 [80];
  
  pfVar3 = (float *)fn_82F6A538();
  fVar2 = lbl_821AAD20;
  fVar1 = lbl_82002AE0;
  dVar6 = (double)lbl_82002AE0;
  dVar5 = (double)lbl_821AAD20;
  dVar4 = extraout_f1;
  if (param_7 == dVar6) {
    *pfVar3 = lbl_82002AE0;
    pfVar3[4] = fVar2;
    pfVar3[8] = fVar2;
    pfVar3[0xc] = fVar2;
    pfVar3[1] = fVar2;
    pfVar3[5] = fVar1;
    pfVar3[9] = fVar2;
    pfVar3[0xd] = fVar2;
    pfVar3[2] = fVar2;
    pfVar3[6] = fVar2;
    pfVar3[10] = fVar1;
    pfVar3[0xe] = fVar2;
    pfVar3[3] = fVar2;
    pfVar3[7] = fVar2;
    pfVar3[0xb] = fVar2;
    pfVar3[0xf] = fVar1;
  }
  else {
    fn_8280E168(param_4,param_5,param_6,param_7,auStack_60);
    fn_8280CE38(pfVar3,auStack_60);
  }
  pfVar3[0xc] = (float)param_8;
  pfVar3[0xd] = (float)param_9;
  pfVar3[0xe] = (float)param_10;
  if (dVar4 != dVar6) {
    *pfVar3 = (float)((double)*pfVar3 * dVar4);
    pfVar3[1] = (float)(dVar4 * (double)pfVar3[1]);
    pfVar3[2] = (float)(dVar4 * (double)pfVar3[2]);
  }
  if (param_2 != dVar6) {
    pfVar3[4] = (float)((double)pfVar3[4] * param_2);
    pfVar3[5] = (float)((double)pfVar3[5] * param_2);
    pfVar3[6] = (float)((double)pfVar3[6] * param_2);
  }
  if (param_3 != dVar6) {
    pfVar3[8] = (float)(param_3 * (double)pfVar3[8]);
    pfVar3[9] = (float)(param_3 * (double)pfVar3[9]);
    pfVar3[10] = (float)(param_3 * (double)pfVar3[10]);
  }
  pfVar3[3] = (float)dVar5;
  pfVar3[7] = (float)dVar5;
  pfVar3[0xb] = (float)dVar5;
  pfVar3[0xf] = (float)dVar6;
  fn_82F6A584();
  return;
}

