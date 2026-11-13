typedef unsigned char bool;
#define false 0
extern int fn_82809CB0();
extern int fn_8287C010();
extern int fn_8287C0A8();
extern int fn_8287C138();
extern int fn_82F6A540();
extern int fn_82F6A58C();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_8201543C;
extern unsigned int lbl_821AAD20;
extern unsigned int stack0x0000001c;


void fn_82879FB0(unsigned __int64 param_1,double param_2,double param_3,double param_4,double param_5,
                  unsigned __int64 param_6,unsigned __int64 param_7,unsigned __int64 param_8)

{
  float fVar1;
  float *pfVar2;
  float *pfVar3;
  bool bVar4;
  double extraout_f1;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  float in_stack_0000001c;
  
  pfVar2 = (float *)fn_82F6A540();
  in_stack_0000001c = (float)extraout_f1;
  fn_8287C138();
  fn_8287C138(&stack0x0000001c);
  fVar1 = lbl_821AAD20;
  dVar7 = (double)lbl_821AAD20;
  pfVar3 = (float *)param_8;
  if (param_4 == dVar7) {
    *pfVar2 = in_stack_0000001c;
    *pfVar3 = fVar1;
  }
  else {
    dVar8 = dVar7;
    if ((dVar7 <= param_4) && (dVar8 = (double)lbl_82002AE0, param_4 <= (double)lbl_82002AE0)) {
      dVar8 = param_4;
    }
    dVar5 = (double)fn_8287C0A8((double)*pfVar2,(double)in_stack_0000001c);
    bVar4 = false;
    fVar1 = (float)((double)(float)((double)(float)(dVar5 * param_2 - (double)*pfVar3) * param_3) *
                    dVar8 + (double)*pfVar3);
    *pfVar3 = fVar1;
    dVar9 = (double)(float)((double)fVar1 * dVar8);
    dVar6 = (double)fn_82809CB0();
    if (dVar6 < param_5) {
      if (dVar7 < dVar5 == dVar7 < dVar9) {
        dVar6 = (double)fn_82809CB0(dVar9);
        dVar5 = (double)fn_82809CB0(dVar5);
        bVar4 = dVar5 < dVar6;
      }
      else {
        dVar6 = (double)fn_82809CB0(dVar9);
        dVar5 = (double)fn_82809CB0(dVar5);
        bVar4 = (double)(float)((double)lbl_8201543C - dVar5) < dVar6;
      }
    }
    if (bVar4) {
      *pfVar2 = in_stack_0000001c;
      *pfVar3 = (float)dVar7;
    }
    else {
      *pfVar2 = (float)((double)*pfVar3 * dVar8 + (double)*pfVar2);
    }
    fn_8287C010(pfVar2);
    fn_8287C010(param_8);
    fn_8287C138(pfVar2);
  }
  fn_82F6A58C();
  return;
}

