typedef struct { unsigned __int64 lo, hi; } V16;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int *auStack_b0;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_d0;
extern unsigned int *auStack_e0;
extern int fn_82F6A510();
extern int fn_82F6A55C();
extern unsigned int stack0x00000000;
extern V16 loadVectorLeftIndexed128();


void fn_82D064E8(void)

{
  float fVar1;
  float *pfVar2;
  int iVar3;
  float *pfVar4;
  unsigned __int64 in_r0;
  float *pfVar5;
  double extraout_f1;
  float in_register_00010000;
  float in_ACC;
  float in_register_00010008;
  float in_vr0;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  unsigned char auStack_e0 [16];
  unsigned char auStack_d0 [16];
  unsigned char auStack_c0 [16];
  unsigned char auStack_b0 [176];
  
  pfVar5 = (float *)fn_82F6A510();
  fVar6 = pfVar5[1];
  fVar7 = pfVar5[7];
  fVar8 = pfVar5[0xe];
  fVar9 = pfVar5[8];
  fVar10 = pfVar5[4];
  fVar11 = *pfVar5;
  fVar12 = pfVar5[9];
  fVar13 = pfVar5[6];
  fVar14 = pfVar5[0xb];
  fVar15 = pfVar5[0xf];
  fVar16 = pfVar5[5];
  fVar17 = pfVar5[3];
  fVar18 = pfVar5[10];
  fVar19 = pfVar5[0xc];
  fVar20 = pfVar5[2];
  fVar1 = pfVar5[0xd];
  loadVectorLeftIndexed128(in_r0,ZEXT48(&stack0x00000000) - 0x128);
  if (ABS((double)((fVar20 * fVar7 - fVar17 * fVar13) * (fVar1 * fVar9 - fVar19 * fVar12) +
                  -((fVar14 * fVar20 - fVar18 * fVar17) * (fVar1 * fVar10 - fVar19 * fVar16) -
                   ((fVar14 * fVar13 - fVar18 * fVar7) * (fVar1 * fVar11 - fVar19 * fVar6) +
                   (fVar15 * fVar20 - fVar8 * fVar17) * (fVar12 * fVar10 - fVar9 * fVar16) +
                   ((fVar15 * fVar18 - fVar8 * fVar14) * (fVar11 * fVar16 - fVar6 * fVar10) -
                   (fVar15 * fVar13 - fVar8 * fVar7) * (fVar12 * fVar11 - fVar9 * fVar6)))))) <=
      extraout_f1) {
    fn_82F6A55C(1);
    return;
  }
  iVar3 = (int)in_r0;
  pfVar2 = (float *)((unsigned int)(auStack_b0 + iVar3) & 0xfffffff0);
  fVar14 = *pfVar2;
  fVar15 = pfVar2[1];
  fVar16 = pfVar2[2];
  fVar17 = pfVar2[3];
  pfVar2 = (float *)((unsigned int)(auStack_e0 + iVar3) & 0xfffffff0);
  fVar10 = *pfVar2;
  fVar11 = pfVar2[1];
  fVar12 = pfVar2[2];
  fVar13 = pfVar2[3];
  pfVar2 = (float *)((unsigned int)(auStack_d0 + iVar3) & 0xfffffff0);
  fVar6 = *pfVar2;
  fVar7 = pfVar2[1];
  fVar8 = pfVar2[2];
  fVar9 = pfVar2[3];
  pfVar2 = (float *)((unsigned int)(auStack_c0 + iVar3) & 0xfffffff0);
  fVar18 = pfVar2[1];
  fVar19 = pfVar2[2];
  fVar20 = pfVar2[3];
  pfVar4 = (float *)((int)pfVar5 + iVar3 + 0x20 & 0xfffffff0);
  *pfVar4 = *pfVar2 * in_register_00010000;
  pfVar4[1] = fVar18 * in_ACC;
  pfVar4[2] = fVar19 * in_register_00010008;
  pfVar4[3] = fVar20 * in_vr0;
  pfVar2 = (float *)((int)pfVar5 + iVar3 + 0x10 & 0xfffffff0);
  *pfVar2 = fVar6 * in_register_00010000;
  pfVar2[1] = fVar7 * in_ACC;
  pfVar2[2] = fVar8 * in_register_00010008;
  pfVar2[3] = fVar9 * in_vr0;
  pfVar2 = (float *)(iVar3 + (int)pfVar5 & 0xfffffff0);
  *pfVar2 = fVar10 * in_register_00010000;
  pfVar2[1] = fVar11 * in_ACC;
  pfVar2[2] = fVar12 * in_register_00010008;
  pfVar2[3] = fVar13 * in_vr0;
  pfVar5 = (float *)((int)pfVar5 + iVar3 + 0x30 & 0xfffffff0);
  *pfVar5 = fVar14 * in_register_00010000;
  pfVar5[1] = fVar15 * in_ACC;
  pfVar5[2] = fVar16 * in_register_00010008;
  pfVar5[3] = fVar17 * in_vr0;
  fn_82F6A55C(0);
  return;
}

