extern unsigned int *auStack_a0;
extern unsigned int *auStack_a8;
extern unsigned int fStack_94;
extern int fn_8250D648();
extern int fn_827F6950();
extern int fn_827F7210();
extern int fn_82A1D9A8();
extern int fn_82F6DA1C();
extern int fn_82F6DCB4();
extern unsigned int uStack_ac;
extern unsigned int uStack_b0;


void fn_827FC650(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  float *pfVar1;
  int iVar2;
  float *pfVar3;
  unsigned int *puVar4;
  unsigned __int64 in_r0;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  unsigned __int64 uVar9;
  unsigned __int64 uVar10;
  unsigned __int64 uVar11;
  unsigned int uVar12;
  double extraout_f1;
  unsigned int uVar13;
  unsigned int uVar14;
  unsigned int uVar15;
  unsigned int uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  unsigned int uStack_b0;
  unsigned int uStack_ac;
  unsigned int auStack_a8 [2];
  unsigned char auStack_a0 [12];
  float fStack_94;
  
  uVar5 = fn_82F6DA1C();
  fStack_94 = (float)extraout_f1;
  fVar33 = *(float *)(((unsigned int)(auStack_a0 + (int)in_r0) & 0xfffffff0) + 0xc);
  fVar34 = fVar33;
  fVar35 = fVar33;
  fVar36 = fVar33;
  uVar6 = fn_827F7210();
  uVar6 = uVar6 & 0xffff;
  fn_827F6950(uVar5,&uStack_ac);
  fn_827F6950(param_2,auStack_a8);
  fn_827F6950(param_3,&uStack_b0);
  uVar9 = (unsigned __int64)uStack_ac;
  dataCacheBlockTouch(uVar9);
  uVar8 = (unsigned __int64)auStack_a8[0];
  dataCacheBlockTouch(uVar8);
  dataCacheBlockTouch(uVar9 + 0x80);
  dataCacheBlockTouch(uVar8 + 0x80);
  uVar11 = (unsigned __int64)uStack_b0;
  uVar10 = uVar11 + 0x7f & 0xffffff80;
  uVar7 = (uVar6 * 0x30 - uVar10) + uVar11;
  if (((0x7f < (int)uVar7) && (uVar11 != uVar9)) && (uVar11 != uVar8)) {
    fn_82A1D9A8(uVar10,0,uVar7 & 0xffffff80);
    uVar9 = (unsigned __int64)uStack_ac;
    uVar8 = (unsigned __int64)auStack_a8[0];
    uVar11 = (unsigned __int64)uStack_b0;
  }
  uVar12 = 0x80;
  if (uVar6 != 0) {
    uVar10 = 0;
    do {
      if (0x7f < uVar12) {
        uVar12 = uVar12 - 0x80;
        dataCacheBlockTouch(uVar9 + 0x100);
        dataCacheBlockTouch(uVar8 + 0x100);
      }
      iVar2 = (int)uVar9;
      pfVar1 = (float *)(iVar2 + 0x10U & 0xfffffff0);
      fVar29 = *pfVar1;
      fVar30 = pfVar1[1];
      fVar31 = pfVar1[2];
      fVar32 = pfVar1[3];
      pfVar1 = (float *)(iVar2 + 0x20U & 0xfffffff0);
      fVar25 = *pfVar1;
      fVar26 = pfVar1[1];
      fVar27 = pfVar1[2];
      fVar28 = pfVar1[3];
      pfVar1 = (float *)((int)uVar8 + 0x10U & 0xfffffff0);
      pfVar3 = (float *)((int)uVar8 + 0x20U & 0xfffffff0);
      fVar21 = *pfVar1 - fVar29;
      fVar22 = pfVar1[1] - fVar30;
      fVar23 = pfVar1[2] - fVar31;
      fVar24 = pfVar1[3] - fVar32;
      fVar17 = *pfVar3 - fVar25;
      fVar18 = pfVar3[1] - fVar26;
      fVar19 = pfVar3[2] - fVar27;
      fVar20 = pfVar3[3] - fVar28;
      puVar4 = (unsigned int *)((int)in_r0 + iVar2 & 0xfffffff0);
      uVar13 = *puVar4;
      uVar14 = puVar4[1];
      uVar15 = puVar4[2];
      uVar16 = puVar4[3];
      fn_8250D648();
      puVar4 = (unsigned int *)((int)in_r0 + (int)uVar11 & 0xfffffff0);
      *puVar4 = uVar13;
      puVar4[1] = uVar14;
      puVar4[2] = uVar15;
      puVar4[3] = uVar16;
      uVar12 = uVar12 + 0x30;
      uVar10 = uVar10 + 1 & 0xffff;
      pfVar1 = (float *)(uStack_b0 + 0x10 & 0xfffffff0);
      *pfVar1 = fVar33 * fVar21 + fVar29;
      pfVar1[1] = fVar34 * fVar22 + fVar30;
      pfVar1[2] = fVar35 * fVar23 + fVar31;
      pfVar1[3] = fVar36 * fVar24 + fVar32;
      pfVar1 = (float *)(uStack_b0 + 0x20 & 0xfffffff0);
      *pfVar1 = fVar33 * fVar17 + fVar25;
      pfVar1[1] = fVar34 * fVar18 + fVar26;
      pfVar1[2] = fVar35 * fVar19 + fVar27;
      pfVar1[3] = fVar36 * fVar20 + fVar28;
      uVar8 = (unsigned __int64)auStack_a8[0] + 0x30;
      uVar9 = (unsigned __int64)uStack_ac + 0x30;
      auStack_a8[0] = (unsigned int)uVar8;
      uVar11 = (unsigned __int64)uStack_b0 + 0x30;
      uStack_ac = (unsigned int)uVar9;
      uStack_b0 = (unsigned int)uVar11;
    } while (uVar10 < uVar6);
  }
  fn_82F6DCB4();
  return;
}

