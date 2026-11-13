extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern int fn_82810280();
extern int fn_82810328();
extern int fn_82810558();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;


void fn_8306AF68(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  float fVar1;
  float fVar2;
  unsigned __int64 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  unsigned char auStack_80 [16];
  unsigned char auStack_70 [16];
  unsigned char auStack_60 [96];
  
  uVar3 = fn_82F6A548();
  fn_82810328(param_2,uVar3,auStack_80);
  fn_82810328(param_4,param_3,auStack_70);
  fn_82810328(uVar3,param_3,auStack_60);
  dVar5 = (double)fn_82810280(auStack_80,auStack_80);
  dVar6 = (double)fn_82810280(auStack_70,auStack_70);
  dVar7 = (double)fn_82810280(auStack_70,auStack_60);
  dVar8 = (double)fn_82810280(auStack_80,auStack_70);
  dVar9 = (double)fn_82810280(auStack_80,auStack_60);
  dVar4 = (double)lbl_821AAD20;
  dVar12 = (double)lbl_82002AE0;
  dVar10 = (double)(float)(dVar6 * dVar5 - (double)(float)(dVar8 * dVar8));
  dVar11 = dVar4;
  if (dVar10 != dVar4) {
    fVar1 = (float)(dVar12 / dVar10);
    fVar2 = (float)(dVar8 * dVar7 - (double)(float)(dVar9 * dVar6));
    if ((dVar4 <= (double)(fVar1 * fVar2)) && (dVar11 = dVar12, (double)(fVar1 * fVar2) <= dVar12))
    {
      dVar11 = (double)(fVar1 * fVar2);
    }
  }
  dVar6 = (double)(float)((double)(float)(dVar11 * dVar8 + dVar7) / dVar6);
  if (dVar4 <= dVar6) {
    if (dVar6 <= dVar12) goto LAB_8306b0d4;
    fVar2 = (float)(dVar8 - dVar9);
    fVar1 = (float)(dVar12 / dVar5);
    dVar11 = dVar4;
    dVar6 = dVar12;
    if ((double)(fVar2 * fVar1) < dVar4) goto LAB_8306b0d4;
    dVar4 = dVar12;
    if ((double)(fVar2 * fVar1) <= dVar12) {
      dVar11 = (double)(fVar2 * fVar1);
      goto LAB_8306b0d4;
    }
  }
  else {
    dVar5 = -(double)(float)(dVar9 / dVar5);
    dVar11 = dVar4;
    dVar6 = dVar4;
    if ((dVar5 < dVar4) || (dVar11 = dVar5, dVar5 <= dVar12)) goto LAB_8306b0d4;
  }
  dVar11 = dVar12;
  dVar6 = dVar4;
LAB_8306b0d4:
  fn_82810558(dVar11,auStack_80,uVar3);
  fn_82810558(dVar6,auStack_70,param_3);
  fn_82F6A594();
  return;
}

