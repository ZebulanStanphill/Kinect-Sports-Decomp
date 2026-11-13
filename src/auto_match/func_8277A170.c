typedef unsigned char bool;
#define true 1
#define false 0
extern double sqrt(double);
#define SQRT(x) sqrt(x)
extern unsigned int fStack_ac;
extern unsigned int fStack_b0;
extern int fn_826EBD10();
extern int fn_82779FD8();
extern int fn_82F6A518();
extern int fn_82F6A564();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82002C28;
extern unsigned int lbl_821AAD20;


void fn_8277A170(unsigned __int64 param_1,double param_2,double param_3,double param_4,double param_5,
                  double param_6,double param_7,unsigned __int64 param_8,__int64 param_9,float *param_10,
                  float *param_11,float *param_12)

{
  float fVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  double dVar7;
  double extraout_f1;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  int in_stack_0000005c;
  float fStack_b0;
  float fStack_ac;
  
  iVar4 = fn_82F6A518();
  dVar21 = (double)*param_11;
  dVar12 = (double)(float)((double)param_11[1] + param_2);
  dVar17 = (double)(float)(dVar21 + param_3);
  dVar14 = (double)(float)((double)*param_12 + param_3);
  dVar7 = (double)(float)((double)param_10[1] + param_2);
  dVar16 = (double)(float)((double)param_11[1] + param_4);
  dVar13 = (double)(float)((double)param_12[1] + param_4);
  dVar15 = (double)(float)(dVar21 + extraout_f1);
  dVar19 = (double)(float)((double)*(float *)(iVar4 + 4) * param_5);
  dVar18 = (double)(float)((double)*param_10 + extraout_f1);
  bVar6 = true;
  dVar20 = (double)lbl_82002AE0;
  bVar3 = true;
  dVar11 = (double)(float)(dVar14 - dVar17);
  dVar10 = (double)(float)(dVar12 - dVar7);
  dVar9 = (double)(float)(dVar13 - dVar16);
  dVar8 = (double)(float)(dVar9 * (double)(float)(dVar15 - dVar18) -
                         (double)(float)(dVar11 * dVar10));
  bVar5 = param_6 <= ABS(dVar8);
  if (bVar5) {
    dVar8 = (double)(float)((double)(float)((double)(float)(dVar7 - dVar16) * dVar11 -
                                           (double)(float)((double)(float)(dVar18 - dVar17) * dVar9)
                                           ) / dVar8);
    dVar18 = (double)(float)(dVar15 - dVar18) * dVar8 + dVar18;
    dVar7 = dVar10 * dVar8 + dVar7;
  }
  else {
    dVar7 = (double)(float)((double)(float)((double)(float)(dVar7 + dVar12) + dVar16) + dVar13) *
            (double)lbl_82002C28;
    dVar18 = (double)(float)((double)(float)((double)(float)(dVar18 + dVar15) + dVar17) + dVar14) *
             (double)lbl_82002C28;
  }
  dVar10 = (double)(float)dVar18;
  dVar9 = (double)(float)dVar7;
  iVar2 = (int)param_9;
  dVar8 = extraout_f1;
  if (bVar5) {
    dVar20 = (double)SQRT((float)(dVar9 - (double)param_11[1]) *
                          (float)(dVar9 - (double)param_11[1]) +
                          (float)(dVar10 - dVar21) * (float)(dVar10 - dVar21));
    bVar6 = dVar19 < dVar20;
    if (!bVar6) {
      fStack_b0 = (float)dVar18;
      fStack_ac = (float)dVar7;
      fn_826EBD10(param_9 + 8,&fStack_b0);
      *(int *)(*(int *)(iVar2 + 0x28) + 4) = *(int *)(*(int *)(iVar2 + 0x28) + 4) + 1;
    }
    bVar3 = false;
  }
  else {
    dVar18 = (double)(float)((double)param_11[1] + param_2);
    if ((float)((double)(float)((double)*param_10 - dVar15) * param_2 -
               (double)(float)((double)(float)((double)param_10[1] - dVar18) * extraout_f1)) <
        lbl_821AAD20 !=
        (float)((double)(float)((double)*param_12 - dVar15) * param_2 -
               (double)(float)((double)(float)((double)param_12[1] - dVar18) * extraout_f1)) <
        lbl_821AAD20) {
      fStack_b0 = (float)(dVar21 + extraout_f1);
      fStack_ac = (float)((double)param_11[1] + param_2);
      fn_826EBD10(param_9 + 8,&fStack_b0);
      bVar6 = false;
      *(int *)(*(int *)(iVar2 + 0x28) + 4) = *(int *)(*(int *)(iVar2 + 0x28) + 4) + 1;
    }
  }
  if (!bVar6) goto LAB_8277a4c4;
  if (in_stack_0000005c == 1) {
    fStack_b0 = (float)((double)*param_11 + dVar8);
    fStack_ac = (float)((double)param_11[1] + param_2);
    fn_826EBD10(param_9 + 8,&fStack_b0);
    *(int *)(*(int *)(iVar2 + 0x28) + 4) = *(int *)(*(int *)(iVar2 + 0x28) + 4) + 1;
    fVar1 = *param_11;
    fStack_ac = (float)((double)param_11[1] + param_4);
LAB_8277a49c:
    param_3 = (double)fVar1 + param_3;
  }
  else {
    if (in_stack_0000005c == 2) {
      fn_82779FD8((double)*param_11,(double)param_11[1],dVar8,param_2,param_3,param_4,iVar4,
                    param_9);
      goto LAB_8277a4c4;
    }
    dVar18 = (double)*param_11;
    if (bVar3) {
      fStack_b0 = -(float)(param_2 * param_5 - (double)(float)(dVar18 + dVar8));
      fStack_ac = (float)((double)(float)(dVar8 * param_5 + (double)param_11[1]) + param_2);
      fn_826EBD10(param_9 + 8,&fStack_b0);
      *(int *)(*(int *)(iVar2 + 0x28) + 4) = *(int *)(*(int *)(iVar2 + 0x28) + 4) + 1;
      fVar1 = (float)(param_4 * param_5 + (double)*param_11);
      fStack_ac = -(float)(param_3 * param_5 - (double)(float)((double)param_11[1] + param_4));
      goto LAB_8277a49c;
    }
    dVar7 = (double)(float)((double)param_11[1] + param_2);
    param_3 = (double)(float)(dVar18 + param_3);
    dVar12 = (double)(float)((double)param_11[1] + param_4);
    dVar11 = (double)((float)(dVar19 - param_7) / (float)(dVar20 - param_7));
    fStack_b0 = (float)((double)(float)(dVar10 - (double)(float)(dVar18 + dVar8)) * dVar11 +
                       (double)(float)(dVar18 + dVar8));
    fStack_ac = (float)((double)(float)(dVar9 - dVar7) * dVar11 + dVar7);
    fn_826EBD10(param_9 + 8,&fStack_b0);
    param_3 = (double)(float)(dVar10 - param_3) * dVar11 + param_3;
    *(int *)(*(int *)(iVar2 + 0x28) + 4) = *(int *)(*(int *)(iVar2 + 0x28) + 4) + 1;
    fStack_ac = (float)((double)(float)(dVar9 - dVar12) * dVar11 + dVar12);
  }
  fStack_b0 = (float)param_3;
  fn_826EBD10(param_9 + 8,&fStack_b0);
  *(int *)(*(int *)(iVar2 + 0x28) + 4) = *(int *)(*(int *)(iVar2 + 0x28) + 4) + 1;
LAB_8277a4c4:
  fn_82F6A564();
  return;
}

