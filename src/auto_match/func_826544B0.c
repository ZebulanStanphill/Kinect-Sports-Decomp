extern unsigned int *auStack_10;
extern unsigned int lbl_82195FE0;
extern unsigned int lbl_82195FF0;
extern unsigned int lbl_82196000;
extern unsigned int lbl_821CA460;


double fn_826544B0(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  float *pfVar7;
  float fVar8;
  int in_r0;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float in_register_00010090;
  float in_register_00010094;
  float in_register_00010098;
  float in_vr9;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  unsigned char auStack_10 [16];
  
  fVar8 = lbl_821CA460;
  pfVar6 = (float *)((unsigned int)(&lbl_82195FE0 + in_r0) & 0xfffffff0);
  pfVar7 = (float *)((unsigned int)(&lbl_82196000 + in_r0) & 0xfffffff0);
  fVar13 = *pfVar7;
  fVar14 = pfVar7[1];
  fVar15 = pfVar7[2];
  fVar16 = pfVar7[3];
  pfVar7 = (float *)((unsigned int)(&lbl_82195FF0 + in_r0) & 0xfffffff0);
  fVar17 = *pfVar7;
  fVar18 = pfVar7[1];
  fVar19 = pfVar7[2];
  fVar20 = pfVar7[3];
  pfVar7 = (float *)((unsigned int)(auStack_10 + in_r0) & 0xfffffff0);
  fVar9 = *pfVar7;
  fVar10 = pfVar7[1];
  fVar11 = pfVar7[2];
  fVar12 = pfVar7[3];
  fVar2 = fVar9 * fVar9 * fVar9;
  fVar3 = fVar10 * fVar10 * fVar10;
  fVar4 = fVar11 * fVar11 * fVar11;
  fVar5 = fVar12 * fVar12 * fVar12;
  fVar1 = fVar2 * *pfVar6 + fVar3 * pfVar6[1] + fVar4 * pfVar6[2] + fVar5 * pfVar6[3];
  pfVar6 = (float *)((unsigned int)(auStack_10 + in_r0) & 0xfffffff0);
  *pfVar6 = fVar1;
  pfVar6[1] = fVar1;
  pfVar6[2] = fVar1;
  pfVar6[3] = fVar1;
  fVar2 = fVar2 * in_register_00010090 * fVar9;
  fVar3 = fVar3 * in_register_00010094 * fVar10;
  fVar4 = fVar4 * in_register_00010098 * fVar11;
  fVar5 = fVar5 * in_vr9 * fVar12;
  fVar1 = fVar2 * fVar17 + fVar3 * fVar18 + fVar4 * fVar19 + fVar5 * fVar20;
  fVar2 = fVar2 * in_register_00010090 * fVar9 * fVar13 +
          fVar3 * in_register_00010094 * fVar10 * fVar14 +
          fVar4 * in_register_00010098 * fVar11 * fVar15 + fVar5 * in_vr9 * fVar12 * fVar16;
  pfVar6 = (float *)((unsigned int)(auStack_10 + in_r0) & 0xfffffff0);
  *pfVar6 = fVar1;
  pfVar6[1] = fVar1;
  pfVar6[2] = fVar1;
  pfVar6[3] = fVar1;
  pfVar6 = (float *)((unsigned int)(auStack_10 + in_r0) & 0xfffffff0);
  *pfVar6 = fVar2;
  pfVar6[1] = fVar2;
  pfVar6[2] = fVar2;
  pfVar6[3] = fVar2;
  return (double)(fVar8 + fVar8 + fVar8);
}

