extern int fn_82809CB0();
extern int fn_8287C010();
extern int fn_8287C058();
extern int fn_8287C078();
extern int fn_82F6A544();
extern int fn_82F6A590();
extern unsigned int lbl_8200133C;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;


void fn_82879EB0(unsigned __int64 param_1,double param_2,double param_3,double param_4,double param_5,
                  unsigned __int64 param_6,unsigned __int64 param_7,unsigned __int64 param_8)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  double extraout_f1;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  pfVar3 = (float *)fn_82F6A544();
  dVar6 = (double)lbl_821AAD20;
  pfVar4 = (float *)param_8;
  dVar7 = extraout_f1;
  if (param_4 == dVar6) {
LAB_82879ee4:
    *pfVar3 = (float)dVar7;
    *pfVar4 = (float)dVar6;
  }
  else {
    dVar9 = dVar6;
    if ((dVar6 <= param_4) && (dVar9 = (double)lbl_82002AE0, param_4 <= (double)lbl_82002AE0)) {
      dVar9 = param_4;
    }
    dVar8 = (double)(float)(extraout_f1 - (double)*pfVar3);
    *pfVar4 = (float)((double)(float)((double)(float)(dVar8 * param_2 - (double)*pfVar4) * param_3)
                      * dVar9 + (double)*pfVar4);
    fn_8287C058(param_8);
    fn_8287C078(param_8);
    fn_8287C010(param_8);
    dVar5 = (double)fn_82809CB0((double)*pfVar4);
    if (dVar5 <= param_5) {
      fVar2 = lbl_82002AE0;
      if (dVar8 < 0.0) {
        fVar2 = lbl_8200133C;
      }
      fVar1 = lbl_82002AE0;
      if ((float)(dVar7 - (double)(float)((double)*pfVar4 * dVar9 + (double)*pfVar3)) < 0.0) {
        fVar1 = lbl_8200133C;
      }
      if (fVar1 != fVar2) goto LAB_82879ee4;
    }
    *pfVar3 = (float)((double)*pfVar4 * dVar9 + (double)*pfVar3);
    fn_8287C010(pfVar3);
  }
  fn_82F6A590();
  return;
}

