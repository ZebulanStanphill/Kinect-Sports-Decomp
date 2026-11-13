extern unsigned int fStack_58;
extern unsigned int fStack_5c;
extern unsigned int fStack_60;
extern int fn_82862238();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int lbl_832116B8;
extern unsigned int lbl_832116BC;
extern unsigned int lbl_832116CC;
extern unsigned int lbl_832116D0;
extern unsigned int lbl_832116D4;


void fn_82863EB8(unsigned __int64 param_1,unsigned __int64 param_2,float *param_3,float *param_4)

{
  int iVar1;
  unsigned short uVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  
  iVar1 = fn_82F6A548();
  if ((param_2 & 0xffffffff) == 0) {
    dVar8 = -(double)lbl_832116CC;
    *param_4 = (float)dVar8;
    dVar7 = -(double)lbl_832116D0;
    param_4[1] = (float)dVar7;
    dVar6 = -(double)lbl_832116D4;
    param_4[2] = (float)dVar6;
    fn_82862238((double)lbl_832116BC,*(unsigned int *)(iVar1 + 4),*(unsigned short *)(iVar1 + 8),
                      lbl_832116B8);
    uVar2 = *(unsigned short *)(iVar1 + 8);
    iVar3 = 1;
    dVar5 = (double)(float)((double)fStack_60 * dVar8 +
                           (double)(float)((double)fStack_58 * dVar6 +
                                          (double)(float)((double)fStack_5c * dVar7)));
    if (1 < uVar2) {
      do {
        fn_82862238((double)lbl_832116BC,*(unsigned int *)(iVar1 + 4),uVar2,lbl_832116B8);
        dVar4 = (double)(float)((double)fStack_60 * dVar8 +
                               (double)(float)((double)fStack_58 * dVar6 +
                                              (double)(float)((double)fStack_5c * dVar7)));
        if (dVar4 < dVar5) {
          dVar5 = dVar4;
        }
        uVar2 = *(unsigned short *)(iVar1 + 8);
        iVar3 = iVar3 + 1;
      } while (iVar3 < (int)(unsigned int)uVar2);
    }
  }
  else {
    if ((param_2 & 0xffffffff) != 1) goto code_r0x82864010;
    dVar8 = (double)*param_3;
    *param_4 = *param_3;
    dVar7 = (double)param_3[1];
    param_4[1] = param_3[1];
    dVar6 = (double)param_3[2];
    param_4[2] = param_3[2];
    uVar2 = *(unsigned short *)(iVar1 + 8);
  }
  fn_82862238((double)lbl_832116BC,*(unsigned int *)(iVar1 + 4),uVar2,lbl_832116B8);
  param_4[3] = (float)((double)fStack_60 * dVar8 +
                      (double)(float)((double)fStack_58 * dVar6 +
                                     (double)(float)((double)fStack_5c * dVar7)));
code_r0x82864010:
  fn_82F6A594();
  return;
}

