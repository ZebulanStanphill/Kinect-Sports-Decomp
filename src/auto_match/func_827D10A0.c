extern unsigned int *auStack_104;
extern int fn_82F6A540();
extern int fn_82F6A58C();
extern unsigned int lbl_82017F08;
extern unsigned int lbl_82017F0C;
extern float lbl_82175460;
extern unsigned int uStack_180;


void fn_827D10A0(unsigned __int64 param_1,int param_2,__int64 param_3,__int64 param_4,int param_5)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  int iVar23;
  __int64 lVar22;
  int iVar24;
  unsigned char *puVar25;
  float *pfVar26;
  __int64 lVar27;
  unsigned __int64 uStack_180;
  __int64 lStack_178;
  __int64 lStack_170;
  float afStack_160 [16];
  float afStack_120 [7];
  unsigned char auStack_104 [4];
  float afStack_100 [8];
  float afStack_e0 [8];
  float afStack_c0 [8];
  float afStack_a0 [8];
  float afStack_80 [32];
  
  iVar23 = fn_82F6A540();
  fVar21 = lbl_82175460;
  fVar20 = lbl_82017F0C;
  fVar19 = lbl_82017F08;
  fVar18 = 1.84775901f;
  param_3 = param_3 + 0x6e;
  lVar22 = -0x7dff0000;
  lVar27 = 8;
  iVar24 = *(int *)(iVar23 + 0x120) + 0x80;
  iVar23 = *(int *)(param_2 + 0x50) + 0xdc;
  puVar25 = auStack_104;
  do {
    iVar1 = (int)param_3;
    if ((((*(short *)(iVar1 + -0x5e) == 0) && (*(short *)(iVar1 + -0x4e) == 0)) &&
        (*(short *)(iVar1 + -0x3e) == 0)) &&
       (((*(short *)(iVar1 + -0x2e) == 0 && (*(short *)(iVar1 + -0x1e) == 0)) &&
        ((*(short *)(iVar1 + -0xe) == 0 && (*(short *)(iVar1 + 2) == 0)))))) {
      lStack_170 = (__int64)*(short *)(iVar1 + -0x6e);
      fVar2 = (float)lStack_170 * *(float *)(iVar23 + -0xdc);
      *(float *)(puVar25 + -0x5c) = fVar2;
      *(float *)(puVar25 + -0x3c) = fVar2;
      *(float *)(puVar25 + -0x1c) = fVar2;
      *(float *)(puVar25 + 4) = fVar2;
      *(float *)(puVar25 + 0x24) = fVar2;
      *(float *)(puVar25 + 0x44) = fVar2;
      *(float *)(puVar25 + 100) = fVar2;
      *(float *)(puVar25 + 0x84) = fVar2;
    }
    else {
      lStack_178 = (__int64)*(short *)(iVar1 + -0x6e);
      uStack_180 = (__int64)*(short *)(iVar1 + -0x3e);
      lVar22 = (__int64)*(short *)(iVar1 + -0x1e);
      fVar2 = (float)(__int64)*(short *)(iVar1 + -0xe) * *(float *)(iVar23 + -0x1c);
      fVar3 = (float)(__int64)*(short *)(iVar1 + -0x4e) * *(float *)(iVar23 + -0x9c);
      fVar4 = (float)lStack_178 * *(float *)(iVar23 + -0xdc);
      fVar5 = (float)(__int64)*(short *)(iVar1 + -0x2e) * *(float *)(iVar23 + -0x5c);
      fVar6 = fVar2 + fVar3;
      fVar7 = (float)lVar22 * *(float *)(iVar23 + -0x3c);
      fVar10 = fVar5 + fVar4;
      fVar4 = fVar4 - fVar5;
      fVar5 = (float)uStack_180 * *(float *)(iVar23 + -0x7c);
      fVar8 = (float)(__int64)(int)*(short *)(iVar1 + -0x5e) * *(float *)(iVar23 + -0xbc);
      fVar9 = (float)(__int64)*(short *)(iVar1 + 2) * *(float *)(iVar23 + 4);
      fVar11 = fVar6 + fVar10;
      fVar10 = fVar10 - fVar6;
      fVar6 = (fVar3 - fVar2) * lbl_82175460 - fVar6;
      fVar2 = fVar7 + fVar5;
      fVar3 = fVar6 + fVar4;
      fVar4 = fVar4 - fVar6;
      fVar7 = fVar7 - fVar5;
      fVar5 = fVar8 - fVar9;
      fVar9 = fVar9 + fVar8;
      fVar6 = fVar9 + fVar2;
      fVar8 = (fVar5 + fVar7) * 1.84775901f;
      *(float *)(puVar25 + -0x5c) = fVar6 + fVar11;
      *(float *)(puVar25 + 0x84) = fVar11 - fVar6;
      fVar6 = (fVar8 - fVar7 * lbl_82017F08) - fVar6;
      fVar2 = (fVar9 - fVar2) * lbl_82175460 - fVar6;
      *(float *)(puVar25 + -0x3c) = fVar6 + fVar3;
      *(float *)(puVar25 + 100) = fVar3 - fVar6;
      fVar3 = (fVar5 * lbl_82017F0C - fVar8) + fVar2;
      *(float *)(puVar25 + -0x1c) = fVar2 + fVar4;
      *(float *)(puVar25 + 0x44) = fVar4 - fVar2;
      *(float *)(puVar25 + 0x24) = fVar3 + fVar10;
      *(float *)(puVar25 + 4) = fVar10 - fVar3;
    }
    puVar25 = puVar25 + 4;
    iVar23 = iVar23 + 4;
    param_3 = param_3 + 2;
    lVar27 = lVar27 + -1;
  } while (lVar27 != 0);
  pfVar26 = (float *)((int)&uStack_180 + 4);
  param_4 = param_4 + -4;
  lVar27 = 8;
  do {
    pfVar12 = pfVar26 + 9;
    param_4 = param_4 + 4;
    pfVar13 = pfVar26 + 0xd;
    fVar2 = *pfVar13 + *pfVar12;
    fVar3 = pfVar26[7] + pfVar26[0xb];
    pfVar14 = pfVar26 + 10;
    pfVar15 = pfVar26 + 0xc;
    fVar4 = pfVar26[7] - pfVar26[0xb];
    pfVar16 = pfVar26 + 0xe;
    fVar6 = *pfVar15 - *pfVar14;
    pfVar26 = pfVar26 + 8;
    fVar7 = *pfVar14 + *pfVar15;
    fVar9 = *pfVar26 - *pfVar16;
    iVar23 = *(int *)param_4 + param_5;
    fVar10 = *pfVar16 + *pfVar26;
    fVar5 = fVar2 + fVar3;
    fVar3 = fVar3 - fVar2;
    fVar11 = fVar10 + fVar7;
    fVar2 = (*pfVar12 - *pfVar13) * fVar21 - fVar2;
    fVar17 = (fVar9 + fVar6) * fVar18;
    fVar8 = fVar2 + fVar4;
    fVar4 = fVar4 - fVar2;
    fVar2 = (fVar17 - fVar6 * fVar19) - fVar11;
    fVar6 = (fVar10 - fVar7) * fVar21 - fVar2;
    *(unsigned char *)(*(int *)param_4 + param_5) =
         *(unsigned char *)(((int)(fVar11 + fVar5) + 4 >> 3 & 0x3ffU) + iVar24);
    *(unsigned char *)(iVar23 + 7) =
         *(unsigned char *)(((int)(fVar5 - fVar11) + 4 >> 3 & 0x3ffU) + iVar24);
    fVar5 = (fVar9 * fVar20 - fVar17) + fVar6;
    *(unsigned char *)(iVar23 + 1) = *(unsigned char *)(((int)(fVar2 + fVar8) + 4 >> 3 & 0x3ffU) + iVar24)
    ;
    *(unsigned char *)(iVar23 + 6) = *(unsigned char *)(((int)(fVar8 - fVar2) + 4 >> 3 & 0x3ffU) + iVar24)
    ;
    *(unsigned char *)(iVar23 + 2) = *(unsigned char *)(((int)(fVar6 + fVar4) + 4 >> 3 & 0x3ffU) + iVar24)
    ;
    *(unsigned char *)(iVar23 + 5) = *(unsigned char *)(((int)(fVar4 - fVar6) + 4 >> 3 & 0x3ffU) + iVar24)
    ;
    *(unsigned char *)(iVar23 + 4) = *(unsigned char *)(((int)(fVar5 + fVar3) + 4 >> 3 & 0x3ffU) + iVar24)
    ;
    *(unsigned char *)(iVar23 + 3) = *(unsigned char *)(((int)(fVar3 - fVar5) + 4 >> 3 & 0x3ffU) + iVar24)
    ;
    lVar27 = lVar27 + -1;
  } while (lVar27 != 0);
  fn_82F6A58C(lVar22);
  return;
}

