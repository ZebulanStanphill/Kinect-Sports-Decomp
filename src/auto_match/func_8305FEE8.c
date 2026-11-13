extern int fn_82F68918();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern int fn_82F6B2A8();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82002C5C;


void fn_8305FEE8(void)

{
  float *pfVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  __int64 lVar5;
  int *piVar6;
  double extraout_f1;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  int aiStack_70 [28];
  
  piVar2 = (int *)fn_82F6A548();
  iVar3 = 0;
  if (0 < piVar2[6]) {
    iVar4 = 0;
    dVar10 = (double)(float)((double)lbl_82002AE0 / extraout_f1);
    dVar9 = (double)lbl_82002C5C;
    dVar8 = extraout_f1;
    do {
      piVar6 = aiStack_70;
      lVar5 = 3;
      aiStack_70[0] = iVar4 + *piVar2;
      aiStack_70[1] = aiStack_70[0] + 4;
      aiStack_70[2] = aiStack_70[0] + 8;
      do {
        pfVar1 = (float *)*piVar6;
        dVar11 = (double)(float)((double)*pfVar1 * dVar10);
        dVar7 = (double)fn_82F68918(dVar11);
        dVar7 = (double)(float)dVar7;
        if (dVar9 <= (double)(float)(dVar11 - dVar7)) {
          dVar7 = (double)fn_82F6B2A8(dVar11);
          dVar7 = (double)(float)dVar7;
        }
        *pfVar1 = (float)(dVar7 * dVar8);
        lVar5 = lVar5 + -1;
        piVar6 = piVar6 + 1;
      } while (lVar5 != 0);
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0xc;
    } while (iVar3 < piVar2[6]);
  }
  fn_82F6A594();
  return;
}

