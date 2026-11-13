extern unsigned int *auStack_b0;
extern unsigned int *auStack_c0;
extern int fn_8251E4D0();
extern int fn_82606E28();
extern int fn_82CE50D8();
extern int fn_82F655D8();
extern unsigned int lbl_82195D50;
extern unsigned int lbl_82195D54;
extern unsigned int lbl_82195D58;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int stack0x00000030;


unsigned __int64
fn_826078B0(double param_1,double param_2,unsigned __int64 param_3,double param_4,int param_5,
             unsigned short param_6,unsigned int param_7,unsigned __int64 param_8)

{
  short sVar1;
  unsigned int *puVar2;
  float *pfVar3;
  unsigned int *puVar4;
  unsigned __int64 in_r0;
  unsigned char *puVar5;
  int *piVar6;
  unsigned __int64 in_r10;
  int iVar7;
  float *pfVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  unsigned int *puVar12;
  unsigned char *puVar13;
  unsigned short *puVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  unsigned int uVar18;
  float fVar19;
  unsigned int uVar20;
  float fVar21;
  unsigned int uVar22;
  float fVar23;
  float in_register_00010010;
  float in_register_00010014;
  float in_register_00010018;
  float in_vr1;
  float in_register_00010020;
  float in_register_00010024;
  float in_register_00010028;
  float in_vr2;
  float in_stack_00000030;
  float in_stack_00000034;
  float in_stack_00000038;
  int in_stack_00000084;
  unsigned char auStack_c0 [16];
  unsigned char auStack_b0 [176];
  
  sVar1 = *(short *)(param_5 + 0xb0);
  pfVar8 = (float *)((int)&stack0x00000030 + (int)in_r0 & 0xfffffff0);
  *pfVar8 = in_register_00010010;
  pfVar8[1] = in_register_00010014;
  pfVar8[2] = in_register_00010018;
  pfVar8[3] = in_vr1;
  if (sVar1 == 0) {
    puVar5 = (unsigned char *)fn_8251E4D0(param_5 + 0xa0);
  }
  else {
    puVar5 = *(unsigned char **)(param_5 + 0xa0);
  }
  piVar6 = (int *)fn_82606E28(0);
  iVar9 = 0;
  *(float *)(puVar5 + 0xc) = (float)param_2;
  *(unsigned short *)(puVar5 + 2) = param_6;
  *puVar5 = 0;
  pfVar8 = (float *)((unsigned int)(puVar5 + 0x10) & 0xfffffff0);
  *pfVar8 = in_register_00010020;
  pfVar8[1] = in_register_00010024;
  pfVar8[2] = in_register_00010028;
  pfVar8[3] = in_vr2;
  puVar5[1] = 10;
  iVar11 = 0;
  fVar19 = in_stack_00000038 * in_stack_00000034 * in_stack_00000030 * lbl_82195D54;
  *(float *)(puVar5 + 8) = fVar19;
  *(float *)(puVar5 + 4) = (float)((double)fVar19 * param_1);
  puVar12 = (unsigned int *)((unsigned int)(puVar5 + 0x20 + (int)in_r0) & 0xfffffff0);
  uVar18 = puVar12[1];
  uVar20 = puVar12[2];
  uVar22 = puVar12[3];
  puVar2 = (unsigned int *)((unsigned int)(puVar5 + 0x20 + (int)in_r0) & 0xfffffff0);
  *puVar2 = *puVar12;
  puVar2[1] = uVar18;
  puVar2[2] = uVar20;
  puVar2[3] = uVar22;
  pfVar8 = (float *)((unsigned int)(puVar5 + 0x30) & 0xfffffff0);
  *pfVar8 = in_register_00010010;
  pfVar8[1] = in_register_00010014;
  pfVar8[2] = in_register_00010018;
  pfVar8[3] = in_vr1;
  puVar5[0x40] = (char)*piVar6;
  puVar5[0x41] = (char)piVar6[1];
  puVar5[0x42] = 0;
  puVar5[0x43] = 0;
  puVar5[0x44] = 1;
  puVar5[0x45] = 1;
  *(unsigned short *)(puVar5 + 0x46) = 0;
  *(unsigned short *)(puVar5 + 0x48) = 0;
  *(unsigned short *)(puVar5 + 0x4a) = 0;
  *(int *)(puVar5 + 0x4b4) = 1 << (param_7 & 0x3f);
  if (0 < *piVar6) {
    puVar13 = puVar5 + 0x50;
    piVar10 = piVar6;
    do {
      piVar10 = piVar10 + 4;
      puVar12 = (unsigned int *)((int)in_r0 + (int)piVar10 & 0xfffffff0);
      uVar18 = puVar12[1];
      uVar20 = puVar12[2];
      uVar22 = puVar12[3];
      puVar2 = (unsigned int *)((unsigned int)(auStack_c0 + (int)in_r0) & 0xfffffff0);
      *puVar2 = *puVar12;
      puVar2[1] = uVar18;
      puVar2[2] = uVar20;
      puVar2[3] = uVar22;
      fn_82CE50D8(puVar13,param_8,auStack_c0);
      pfVar8 = (float *)((unsigned int)(puVar13 + (int)in_r0) & 0xfffffff0);
      fVar19 = pfVar8[1];
      fVar21 = pfVar8[2];
      fVar23 = pfVar8[3];
      iVar11 = iVar11 + 1;
      pfVar3 = (float *)((unsigned int)(puVar13 + (int)in_r0) & 0xfffffff0);
      *pfVar3 = in_register_00010010 * *pfVar8 + in_register_00010020;
      pfVar3[1] = in_register_00010014 * fVar19 + in_register_00010024;
      pfVar3[2] = in_register_00010018 * fVar21 + in_register_00010028;
      pfVar3[3] = in_vr1 * fVar23 + in_vr2;
      puVar13 = puVar13 + 0x10;
    } while (iVar11 < *piVar6);
  }
  iVar11 = 0;
  if (0 < piVar6[1]) {
    piVar10 = piVar6 + 0x24;
    puVar14 = (unsigned short *)(puVar5 + 0xd2);
    puVar12 = (unsigned int *)(in_stack_00000084 + 0xc);
    do {
      iVar7 = 0;
      puVar14[-1] = (unsigned short)puVar12[-3] & 0x40;
      *puVar14 = (short)*piVar10;
      if (0 < *piVar10) {
        do {
          *(unsigned char *)((int)puVar14 + iVar7 + 2) = *(unsigned char *)((int)piVar10 + iVar7 + 4);
          iVar7 = iVar7 + 1;
        } while (iVar7 < *piVar10);
      }
      puVar2 = (unsigned int *)((unsigned int)(piVar10 + 4) & 0xfffffff0);
      uVar18 = puVar2[1];
      uVar20 = puVar2[2];
      uVar22 = puVar2[3];
      puVar4 = (unsigned int *)((unsigned int)(auStack_b0 + (int)in_r0) & 0xfffffff0);
      *puVar4 = *puVar2;
      puVar4[1] = uVar18;
      puVar4[2] = uVar20;
      puVar4[3] = uVar22;
      fn_82CE50D8(puVar14 + 7,param_8,auStack_b0);
      *(float *)(puVar14 + 3) = (float)piVar10[3] * (float)puVar12[-1];
      *(unsigned int *)(puVar14 + 5) = *puVar12;
      fn_82CE50D8(puVar14 + 0xf,param_8,puVar12 + 1);
      fn_82CE50D8(puVar14 + 0x17,param_8,puVar12 + 5);
      *(unsigned int *)(puVar14 + 0x15) = puVar12[4];
      iVar11 = iVar11 + 1;
      piVar10 = piVar10 + 8;
      puVar2 = puVar12 + 8;
      puVar12 = puVar12 + 0xc;
      *(unsigned int *)(puVar14 + 0x1d) = *puVar2;
      puVar14 = puVar14 + 0x20;
    } while (iVar11 < piVar6[1]);
  }
  dVar17 = (double)ltcg_pool_0_0f;
  if ((param_4 <= dVar17) || ((in_r10 & 2) != 0)) {
    param_4 = (double)(*(float *)(puVar5 + 4) / *(float *)(puVar5 + 8));
  }
  dVar16 = (double)(float)((double)*(float *)(puVar5 + 4) / param_4);
  dVar15 = (double)fn_82F655D8((double)(float)(dVar16 * (double)lbl_82195D50),lbl_82195D58);
  *(float *)(puVar5 + 0x260) = (float)dVar15;
  *(float *)(puVar5 + 0x270) = (float)dVar17;
  *(float *)(puVar5 + 0x274) = (float)dVar17;
  *(float *)(puVar5 + 0x264) = (float)dVar16;
  *(float *)(puVar5 + 8) = (float)dVar16;
  pfVar8 = (float *)((unsigned int)(puVar5 + 0x250) & 0xfffffff0);
  *pfVar8 = in_register_00010020;
  pfVar8[1] = in_register_00010024;
  pfVar8[2] = in_register_00010028;
  pfVar8[3] = in_vr2;
  *(unsigned int *)(puVar5 + 0x268) = lbl_821CA460;
  if (0 < piVar6[1]) {
    pfVar8 = (float *)(puVar5 + 0x47c);
    do {
      *(unsigned short *)((int)pfVar8 + 6) = 0xffff;
      iVar9 = iVar9 + 1;
      *(unsigned short *)(pfVar8 + 1) = 0xffff;
      pfVar8 = pfVar8 + 2;
      *pfVar8 = (float)dVar17;
    } while (iVar9 < piVar6[1]);
  }
  *(float *)(puVar5 + 0x4b0) = (float)dVar17;
  *(unsigned int *)(param_5 + 0x114) = *(unsigned int *)(puVar5 + 8);
  return 1;
}

