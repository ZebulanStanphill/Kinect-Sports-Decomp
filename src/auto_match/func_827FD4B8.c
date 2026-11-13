extern unsigned int *auStack_a0;
extern unsigned int fStack_94;
extern int fn_8250D648();
extern int fn_827F6950();
extern int fn_827F6960();
extern int fn_827F7210();
extern int fn_828116B8();
extern int fn_82F6DA1C();
extern int fn_82F6DCB4();
extern unsigned int uStack_a4;
extern unsigned int uStack_a8;
extern unsigned int uStack_ac;
extern unsigned int uStack_b0;


void fn_827FD4B8(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  float *pfVar1;
  float *pfVar2;
  unsigned int *puVar3;
  unsigned __int64 in_r0;
  unsigned __int64 uVar4;
  unsigned short uVar6;
  int iVar5;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  unsigned short uVar9;
  unsigned int uVar10;
  double extraout_f1;
  double dVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  unsigned int uVar21;
  float fVar22;
  float fVar23;
  unsigned int uVar24;
  float fVar25;
  float fVar26;
  unsigned int uVar27;
  float fVar28;
  float fVar29;
  unsigned int uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  unsigned int uStack_b0;
  unsigned int uStack_ac;
  unsigned int uStack_a8;
  unsigned int uStack_a4;
  unsigned char auStack_a0 [12];
  float fStack_94;
  
  uVar4 = fn_82F6DA1C();
  dVar11 = extraout_f1;
  uVar6 = fn_827F7210();
  fn_827F6960(param_2,&uStack_a4);
  fn_827F6950(uVar4,&uStack_a8);
  fn_827F6950(param_2,&uStack_ac);
  fn_827F6950(param_3,&uStack_b0);
  uVar8 = (unsigned __int64)uStack_a8;
  dataCacheBlockTouch(uVar8);
  uVar7 = (unsigned __int64)uStack_ac;
  dataCacheBlockTouch(uVar7);
  dataCacheBlockTouch(uVar8 + 0x80);
  dataCacheBlockTouch(uVar7 + 0x80);
  fStack_94 = (float)dVar11;
  uVar10 = 0x80;
  fVar32 = *(float *)(((unsigned int)(auStack_a0 + (int)in_r0) & 0xfffffff0) + 0xc);
  if (uVar6 != 0) {
    uVar9 = 0;
    fVar33 = fVar32;
    fVar34 = fVar32;
    fVar35 = fVar32;
    if (uVar8 == uStack_b0) {
      do {
        if (0x7f < uVar10) {
          uVar10 = uVar10 - 0x80;
          dataCacheBlockTouch(uVar8 + 0x100);
          dataCacheBlockTouch(uVar7 + 0x100);
        }
        iVar5 = fn_828116B8(uStack_a4,uVar9);
        if (iVar5 != 0) {
          pfVar1 = (float *)(uStack_ac + 0x10 & 0xfffffff0);
          pfVar2 = (float *)(uStack_a8 + 0x10 & 0xfffffff0);
          fVar28 = *pfVar2;
          fVar17 = pfVar2[1];
          fVar31 = pfVar2[2];
          fVar19 = pfVar2[3];
          fVar20 = *pfVar1 - fVar28;
          fVar23 = pfVar1[1] - fVar17;
          fVar26 = pfVar1[2] - fVar31;
          fVar29 = pfVar1[3] - fVar19;
          pfVar1 = (float *)(uStack_a8 + 0x20 & 0xfffffff0);
          fVar22 = *pfVar1;
          fVar13 = pfVar1[1];
          fVar25 = pfVar1[2];
          fVar15 = pfVar1[3];
          pfVar1 = (float *)(uStack_ac + 0x20 & 0xfffffff0);
          fVar12 = *pfVar1 - fVar22;
          fVar14 = pfVar1[1] - fVar13;
          fVar16 = pfVar1[2] - fVar25;
          fVar18 = pfVar1[3] - fVar15;
          puVar3 = (unsigned int *)((int)in_r0 + uStack_a8 & 0xfffffff0);
          uVar21 = *puVar3;
          uVar24 = puVar3[1];
          uVar27 = puVar3[2];
          uVar30 = puVar3[3];
          fn_8250D648();
          puVar3 = (unsigned int *)((int)in_r0 + uStack_b0 & 0xfffffff0);
          *puVar3 = uVar21;
          puVar3[1] = uVar24;
          puVar3[2] = uVar27;
          puVar3[3] = uVar30;
          pfVar1 = (float *)(uStack_b0 + 0x10 & 0xfffffff0);
          *pfVar1 = fVar32 * fVar20 + fVar28;
          pfVar1[1] = fVar33 * fVar23 + fVar17;
          pfVar1[2] = fVar34 * fVar26 + fVar31;
          pfVar1[3] = fVar35 * fVar29 + fVar19;
          pfVar1 = (float *)(uStack_b0 + 0x20 & 0xfffffff0);
          *pfVar1 = fVar32 * fVar12 + fVar22;
          pfVar1[1] = fVar33 * fVar14 + fVar13;
          pfVar1[2] = fVar34 * fVar16 + fVar25;
          pfVar1[3] = fVar35 * fVar18 + fVar15;
        }
        uVar9 = uVar9 + 1;
        uVar10 = uVar10 + 0x30;
        uStack_b0 = uStack_b0 + 0x30;
        uVar8 = (unsigned __int64)uStack_a8 + 0x30;
        uVar7 = (unsigned __int64)uStack_ac + 0x30;
        uStack_a8 = (unsigned int)uVar8;
        uStack_ac = (unsigned int)uVar7;
      } while (uVar9 < uVar6);
    }
    else {
      do {
        if (0x7f < uVar10) {
          uVar10 = uVar10 - 0x80;
          dataCacheBlockTouch(uVar8 + 0x100);
          dataCacheBlockTouch(uVar7 + 0x100);
        }
        iVar5 = (int)uVar8;
        puVar3 = (unsigned int *)((int)in_r0 + iVar5 & 0xfffffff0);
        uVar21 = *puVar3;
        uVar24 = puVar3[1];
        uVar27 = puVar3[2];
        uVar30 = puVar3[3];
        pfVar1 = (float *)(iVar5 + 0x10U & 0xfffffff0);
        fVar26 = *pfVar1;
        fVar16 = pfVar1[1];
        fVar29 = pfVar1[2];
        fVar18 = pfVar1[3];
        pfVar1 = (float *)(iVar5 + 0x20U & 0xfffffff0);
        fVar20 = *pfVar1;
        fVar12 = pfVar1[1];
        fVar23 = pfVar1[2];
        fVar14 = pfVar1[3];
        iVar5 = fn_828116B8(uStack_a4,uVar9);
        if (iVar5 == 0) {
          puVar3 = (unsigned int *)((int)in_r0 + uStack_b0 & 0xfffffff0);
          *puVar3 = uVar21;
          puVar3[1] = uVar24;
          puVar3[2] = uVar27;
          puVar3[3] = uVar30;
          pfVar1 = (float *)(uStack_b0 + 0x10 & 0xfffffff0);
          *pfVar1 = fVar26;
          pfVar1[1] = fVar16;
          pfVar1[2] = fVar29;
          pfVar1[3] = fVar18;
          pfVar1 = (float *)(uStack_b0 + 0x20 & 0xfffffff0);
          *pfVar1 = fVar20;
          pfVar1[1] = fVar12;
          pfVar1[2] = fVar23;
          pfVar1[3] = fVar14;
        }
        else {
          pfVar1 = (float *)(uStack_ac + 0x10 & 0xfffffff0);
          pfVar2 = (float *)(uStack_ac + 0x20 & 0xfffffff0);
          fVar22 = *pfVar1 - fVar26;
          fVar25 = pfVar1[1] - fVar16;
          fVar28 = pfVar1[2] - fVar29;
          fVar31 = pfVar1[3] - fVar18;
          fVar13 = *pfVar2 - fVar20;
          fVar15 = pfVar2[1] - fVar12;
          fVar17 = pfVar2[2] - fVar23;
          fVar19 = pfVar2[3] - fVar14;
          fn_8250D648();
          puVar3 = (unsigned int *)((int)in_r0 + uStack_b0 & 0xfffffff0);
          *puVar3 = uVar21;
          puVar3[1] = uVar24;
          puVar3[2] = uVar27;
          puVar3[3] = uVar30;
          pfVar1 = (float *)(uStack_b0 + 0x10 & 0xfffffff0);
          *pfVar1 = fVar32 * fVar22 + fVar26;
          pfVar1[1] = fVar33 * fVar25 + fVar16;
          pfVar1[2] = fVar34 * fVar28 + fVar29;
          pfVar1[3] = fVar35 * fVar31 + fVar18;
          pfVar1 = (float *)(uStack_b0 + 0x20 & 0xfffffff0);
          *pfVar1 = fVar32 * fVar13 + fVar20;
          pfVar1[1] = fVar33 * fVar15 + fVar12;
          pfVar1[2] = fVar34 * fVar17 + fVar23;
          pfVar1[3] = fVar35 * fVar19 + fVar14;
        }
        uStack_b0 = uStack_b0 + 0x30;
        uVar7 = (unsigned __int64)uStack_ac + 0x30;
        uVar9 = uVar9 + 1;
        uStack_ac = (unsigned int)uVar7;
        uVar10 = uVar10 + 0x30;
        uVar8 = (unsigned __int64)uStack_a8 + 0x30;
        uStack_a8 = (unsigned int)uVar8;
      } while (uVar9 < uVar6);
    }
  }
  fn_82F6DCB4();
  return;
}

