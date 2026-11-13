extern double sqrt(double);
#define SQRT(x) sqrt(x)
extern unsigned int fStack_34;
extern unsigned int fStack_38;
extern unsigned int fStack_3c;
extern unsigned int fStack_40;
extern int fn_82809D40();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int lbl_821916FC;
extern unsigned int lbl_82195628;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;


void fn_825296E8(unsigned __int64 param_1,int param_2)

{
  float fVar1;
  float fVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  int in_r0;
  int iVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  unsigned int uVar16;
  unsigned int uVar17;
  unsigned int uVar18;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  
  iVar5 = fn_82F6A548();
  puVar3 = (unsigned int *)(in_r0 + param_2 & 0xfffffff0);
  uVar16 = puVar3[1];
  uVar17 = puVar3[2];
  uVar18 = puVar3[3];
  puVar4 = (unsigned int *)((int)&fStack_40 + in_r0 & 0xfffffff0);
  *puVar4 = *puVar3;
  puVar4[1] = uVar16;
  puVar4[2] = uVar17;
  puVar4[3] = uVar18;
  dVar10 = (double)fStack_3c;
  dVar9 = (double)fStack_34;
  dVar6 = (double)lbl_821916FC;
  dVar11 = (double)fStack_40;
  dVar7 = (double)(float)(dVar10 * dVar6);
  dVar8 = (double)(float)((double)fStack_38 * dVar6);
  fVar1 = (float)(dVar11 * (double)(float)(dVar11 * dVar6));
  dVar6 = (double)(float)(dVar9 * (double)(float)(dVar11 * dVar6));
  dVar12 = (double)(float)(dVar8 * dVar10 - dVar6);
  fVar2 = (float)((double)fStack_38 * dVar8);
  dVar15 = (double)(float)(dVar9 * dVar7 + (double)(float)(dVar8 * dVar11));
  dVar14 = (double)(lbl_821CA460 - ((float)(dVar10 * dVar7) + fVar1));
  dVar13 = (double)SQRT((float)(dVar14 * dVar14 + (double)(float)(dVar15 * dVar15)));
  if (dVar13 <= (double)lbl_82195628) {
    dVar6 = (double)fn_82809D40(-(double)((float)(dVar7 * dVar11) - (float)(dVar9 * dVar8)),
                                 (double)(lbl_821CA460 - (fVar2 + (float)(dVar10 * dVar7))),dVar6);
    fStack_38 = (float)dVar6;
    dVar6 = (double)fn_82809D40(-dVar12,dVar13);
    fStack_40 = (float)dVar6;
    fStack_3c = ltcg_pool_0_0f;
  }
  else {
    dVar6 = (double)fn_82809D40((double)((float)(dVar7 * dVar11) + (float)(dVar9 * dVar8)),
                                 (double)(lbl_821CA460 - (fVar2 + fVar1)));
    fStack_38 = (float)dVar6;
    dVar6 = (double)fn_82809D40(-dVar12,dVar13);
    fStack_40 = (float)dVar6;
    dVar6 = (double)fn_82809D40(dVar15,dVar14);
    fStack_3c = (float)dVar6;
  }
  *(float *)(iVar5 + 0xa4) = fStack_40;
  *(float *)(iVar5 + 0xa8) = fStack_3c;
  *(float *)(iVar5 + 0xac) = fStack_38;
  fn_82F6A594();
  return;
}

