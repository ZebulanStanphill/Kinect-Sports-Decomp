extern int fn_82F655D8();
extern int fn_82F6A540();
extern int fn_82F6A58C();
extern unsigned int lbl_82005720;
extern unsigned int lbl_82005730;
extern unsigned int lbl_82005758;
extern unsigned int lbl_82015618;


void fn_8305C158(unsigned __int64 param_1,double param_2,double param_3,unsigned __int64 param_4,int param_5)

{
  int iVar1;
  unsigned __int64 in_r8;
  float *pfVar2;
  int iVar3;
  double extraout_f1;
  double dVar4;
  double dVar5;
  double dVar6;
  unsigned __int64 uVar7;
  double dVar8;
  double dVar9;
  
  iVar1 = fn_82F6A540();
  dVar6 = lbl_82005758 / (double)(__int64)(param_5 + -1);
  dVar8 = lbl_82005758;
  dVar4 = lbl_82005758;
  dVar9 = lbl_82005758;
  if ((in_r8 & 0xff) == 0) {
    uVar7 = lbl_82015618;
    dVar8 = lbl_82005720;
    fn_82F655D8(lbl_82015618,extraout_f1 * lbl_82005720);
    dVar4 = (double)fn_82F655D8(uVar7,param_3 * dVar8);
    dVar8 = param_2;
  }
  iVar3 = 0;
  if (0 < param_5) {
    dVar8 = dVar8 - dVar9;
    pfVar2 = (float *)(iVar1 + -4);
    uVar7 = lbl_82005730;
    do {
      dVar5 = (double)fn_82F655D8(-((double)(__int64)iVar3 * dVar6 - dVar9),uVar7);
      dVar5 = (double)fn_82F655D8(dVar9 - dVar5,dVar8);
      if (dVar9 < dVar5) {
        dVar5 = dVar9;
      }
      if (dVar5 < dVar4) {
        dVar5 = dVar4;
      }
      iVar3 = iVar3 + 1;
      pfVar2 = pfVar2 + 1;
      *pfVar2 = (float)dVar5;
    } while (iVar3 < param_5);
  }
  fn_82F6A58C();
  return;
}

