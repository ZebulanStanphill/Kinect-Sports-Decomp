extern double sqrt(double);
#define SQRT(x) sqrt(x)
extern int fn_82F6A548();
extern int fn_82F6A594();
extern int fn_82F6B2A8();
extern unsigned int lbl_82002AE0;
extern float lbl_82021540;
extern unsigned int lbl_821AAD20;


void fn_82E94518(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  float fVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  int iVar7;
  unsigned __int64 uVar6;
  int iVar8;
  unsigned __int64 uVar9;
  double extraout_f1;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  
  iVar7 = fn_82F6A548();
  fVar3 = *(float *)(iVar7 + 0x7868);
  dVar14 = (double)(fVar3 * fVar3 +
                   (float)((double)*(float *)(iVar7 + 0x786c) * extraout_f1) * lbl_82021540);
  if (dVar14 < (double)lbl_821AAD20) {
    uVar6 = (unsigned __int64)*(unsigned int *)(iVar7 + 0x2a0);
    goto LAB_82e946c4;
  }
  if ((double)*(float *)(iVar7 + 0x786c) < (double)lbl_821AAD20) {
    dVar11 = (double)(float)((double)lbl_82002AE0 / extraout_f1);
    dVar12 = (double)0.5f;
    dVar13 = extraout_f1;
    dVar10 = (double)fn_82F6B2A8((double)(float)((double)(float)((double)((float)SQRT(dVar14) +
                                                                          fVar3) * dVar11) * dVar12)
                                 );
    uVar1 = (unsigned int)dVar10;
    dVar14 = (double)fn_82F6B2A8((double)(float)((double)(float)((double)(*(float *)(iVar7 + 0x7868
                                                                                     ) -
                                                                          (float)SQRT(dVar14)) *
                                                                 dVar11) * dVar12));
    iVar8 = *(int *)(iVar7 + 0x7858);
    uVar2 = (unsigned int)dVar14;
    uVar6 = (unsigned __int64)uVar2;
    if ((iVar8 < (int)uVar1) && ((int)uVar2 < iVar8)) {
      if (dVar13 <= (double)*(float *)(iVar7 + 0x7860)) {
LAB_82e94644:
        uVar6 = (unsigned __int64)uVar1;
      }
    }
    else {
      uVar4 = (int)(iVar8 - uVar2) >> 0x1f;
      uVar5 = (int)(iVar8 - uVar1) >> 0x1f;
      if ((int)((iVar8 - uVar1 ^ uVar5) - uVar5) < (int)((iVar8 - uVar2 ^ uVar4) - uVar4))
      goto LAB_82e94644;
    }
  }
  else {
    dVar14 = (double)fn_82F6B2A8((double)((float)((double)((float)SQRT(dVar14) + fVar3) /
                                                  extraout_f1) * 0.5f));
    uVar6 = (unsigned __int64)(unsigned int)(int)dVar14;
  }
  if (((*(int *)(iVar7 + 0x779c) != 0) &&
      (uVar9 = (unsigned __int64)*(unsigned int *)(iVar7 + 0x7858) + 2, (int)uVar6 < (int)uVar9)) ||
     (uVar9 = (unsigned __int64)*(unsigned int *)(iVar7 + 0x7858) - 2, (int)uVar6 < (int)uVar9)) {
    uVar6 = uVar9;
  }
  iVar8 = (int)uVar6;
  iVar7 = 1;
  if (0 < iVar8) {
    iVar7 = iVar8;
  }
  if ((int)param_3 < iVar7) {
    fn_82F6A594(param_3);
    return;
  }
  if (iVar8 < 1) {
    fn_82F6A594(1);
    return;
  }
LAB_82e946c4:
  fn_82F6A594(uVar6);
  return;
}

