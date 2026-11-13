extern int fn_828095F8();
extern int fn_82809950();
extern int fn_8280A550();
extern int fn_82F6A540();
extern int fn_82F6A58C();
extern unsigned int lbl_8200133C;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_8201E038;
extern unsigned int lbl_821AAD20;


void fn_8280DC58(unsigned __int64 param_1,unsigned __int64 param_2,float *param_3)

{
  float *pfVar1;
  double dVar2;
  double extraout_f1;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  pfVar1 = (float *)fn_82F6A540();
  dVar7 = (double)pfVar1[3];
  dVar6 = (double)lbl_82002AE0;
  dVar5 = (double)(float)(dVar6 - extraout_f1);
  dVar2 = dVar6;
  if (dVar7 < (double)lbl_821AAD20) {
    dVar7 = -dVar7;
    dVar2 = (double)lbl_8200133C;
  }
  dVar4 = extraout_f1;
  if (dVar7 < (double)lbl_8201E038) {
    dVar3 = (double)fn_828095F8(dVar7);
    dVar6 = (double)fn_8280A550(-(double)(float)(dVar7 * dVar7 - dVar6));
    dVar5 = (double)fn_82809950((double)(float)(dVar3 * dVar5));
    dVar5 = (double)(float)(dVar5 * dVar6);
    dVar7 = (double)fn_82809950((double)(float)(dVar3 * dVar4));
    dVar4 = (double)(float)(dVar7 * dVar6);
  }
  dVar2 = (double)(float)(dVar2 * dVar4);
  *param_3 = (float)((double)*pfVar1 * dVar2);
  param_3[1] = (float)((double)pfVar1[1] * dVar2);
  param_3[2] = (float)((double)pfVar1[2] * dVar2);
  param_3[3] = (float)((double)pfVar1[3] * dVar2 + dVar5);
  fn_82F6A58C();
  return;
}

