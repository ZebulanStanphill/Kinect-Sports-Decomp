extern unsigned int *auStack_c0;
extern unsigned int fStack_b4;
extern int fn_8250D648();
extern int fn_827F6950();
extern int fn_827F6960();
extern int fn_827F7210();
extern int fn_828116B8();
extern int fn_82A1D9A8();
extern int fn_82F6DA1C();
extern int fn_82F6DCB4();
extern unsigned int uStack_c4;
extern unsigned int uStack_c8;
extern unsigned int uStack_cc;
extern unsigned int uStack_d0;


void fn_827FCF18(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5)

{
  unsigned int *puVar1;
  float *pfVar2;
  float *pfVar3;
  unsigned __int64 in_r0;
  int iVar5;
  unsigned __int64 uVar4;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  unsigned __int64 uVar9;
  unsigned int uVar10;
  unsigned __int64 uVar11;
  __int64 lVar12;
  unsigned int uVar13;
  double extraout_f1;
  double dVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  unsigned int uVar23;
  float fVar24;
  float fVar25;
  unsigned int uVar26;
  float fVar27;
  float fVar28;
  unsigned int uVar29;
  float fVar30;
  float fVar31;
  unsigned int uVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  unsigned int uStack_d0;
  unsigned int uStack_cc;
  unsigned int uStack_c8;
  unsigned int uStack_c4;
  unsigned char auStack_c0 [12];
  float fStack_b4;
  
  iVar5 = fn_82F6DA1C();
  if ((param_5 & 0xffffffff) == 0) {
    param_5 = (unsigned __int64)*(unsigned int *)(iVar5 + 8);
  }
  dVar14 = extraout_f1;
  uVar4 = fn_827F7210(iVar5);
  fn_827F6960(param_2,&uStack_c4);
  fn_827F6950(iVar5,&uStack_c8);
  fn_827F6950(param_2,&uStack_cc);
  fn_827F6950(param_3,&uStack_d0);
  uVar9 = (unsigned __int64)uStack_c8;
  dataCacheBlockTouch(uVar9);
  uVar8 = (unsigned __int64)uStack_cc;
  dataCacheBlockTouch(uVar8);
  dataCacheBlockTouch(param_5);
  dataCacheBlockTouch(uVar9 + 0x80);
  dataCacheBlockTouch(uVar8 + 0x80);
  dataCacheBlockTouch(param_5 + 0x80);
  uVar7 = (unsigned __int64)uStack_d0;
  fStack_b4 = (float)dVar14;
  uVar4 = uVar4 & 0xffff;
  fVar35 = *(float *)(((unsigned int)(auStack_c0 + (int)in_r0) & 0xfffffff0) + 0xc);
  uVar11 = uVar7 + 0x7f & 0xffffff80;
  uVar6 = (uVar4 * 0x30 - uVar11) + uVar7;
  fVar36 = fVar35;
  fVar37 = fVar35;
  fVar38 = fVar35;
  if (((0x7f < (uVar6 & 0xffffffff)) && (uVar7 != uVar9)) && (uVar7 != uVar8)) {
    fn_82A1D9A8(uVar11,0,uVar6 & 0xffffff80);
    uVar9 = (unsigned __int64)uStack_c8;
    uVar8 = (unsigned __int64)uStack_cc;
  }
  uVar13 = 0x80;
  uVar11 = 0;
  if (uVar4 != 0) {
    do {
      if (0x7f < uVar13) {
        uVar13 = uVar13 - 0x80;
        dataCacheBlockTouch(uVar9 + 0x100);
        dataCacheBlockTouch(uVar8 + 0x100);
        dataCacheBlockTouch(uVar11 * 0x34 + param_5 + 0x100);
      }
      iVar5 = (int)uVar9;
      puVar1 = (unsigned int *)((int)in_r0 + iVar5 & 0xfffffff0);
      uVar23 = *puVar1;
      uVar26 = puVar1[1];
      uVar29 = puVar1[2];
      uVar32 = puVar1[3];
      pfVar2 = (float *)(iVar5 + 0x10U & 0xfffffff0);
      fVar31 = *pfVar2;
      fVar20 = pfVar2[1];
      fVar34 = pfVar2[2];
      fVar22 = pfVar2[3];
      pfVar2 = (float *)(iVar5 + 0x20U & 0xfffffff0);
      fVar25 = *pfVar2;
      fVar16 = pfVar2[1];
      fVar28 = pfVar2[2];
      fVar18 = pfVar2[3];
      iVar5 = fn_828116B8(uStack_c4,uVar11);
      if (iVar5 == 0) {
        uVar13 = uVar13 + 0x30;
        uVar6 = uVar11 + 1;
        puVar1 = (unsigned int *)((int)in_r0 + uStack_d0 & 0xfffffff0);
        *puVar1 = uVar23;
        puVar1[1] = uVar26;
        puVar1[2] = uVar29;
        puVar1[3] = uVar32;
        pfVar2 = (float *)(uStack_d0 + 0x10 & 0xfffffff0);
        *pfVar2 = fVar31;
        pfVar2[1] = fVar20;
        pfVar2[2] = fVar34;
        pfVar2[3] = fVar22;
        pfVar2 = (float *)(uStack_d0 + 0x20 & 0xfffffff0);
        *pfVar2 = fVar25;
        pfVar2[1] = fVar16;
        pfVar2[2] = fVar28;
        pfVar2[3] = fVar18;
        uVar9 = (unsigned __int64)uStack_c8 + 0x30;
        uStack_c8 = (unsigned int)uVar9;
        uVar8 = (unsigned __int64)uStack_cc + 0x30;
        uStack_cc = (unsigned int)uVar8;
        uStack_d0 = uStack_d0 + 0x30;
      }
      else {
        pfVar2 = (float *)(uStack_cc + 0x10 & 0xfffffff0);
        pfVar3 = (float *)(uStack_cc + 0x20 & 0xfffffff0);
        fVar24 = *pfVar2 - fVar31;
        fVar27 = pfVar2[1] - fVar20;
        fVar30 = pfVar2[2] - fVar34;
        fVar33 = pfVar2[3] - fVar22;
        fVar15 = *pfVar3 - fVar25;
        fVar17 = pfVar3[1] - fVar16;
        fVar19 = pfVar3[2] - fVar28;
        fVar21 = pfVar3[3] - fVar18;
        fn_8250D648();
        uVar6 = uVar11 + 1;
        uVar13 = uVar13 + 0x30;
        puVar1 = (unsigned int *)((int)in_r0 + uStack_d0 & 0xfffffff0);
        *puVar1 = uVar23;
        puVar1[1] = uVar26;
        puVar1[2] = uVar29;
        puVar1[3] = uVar32;
        pfVar2 = (float *)(uStack_d0 + 0x10 & 0xfffffff0);
        *pfVar2 = fVar35 * fVar24 + fVar31;
        pfVar2[1] = fVar36 * fVar27 + fVar20;
        pfVar2[2] = fVar37 * fVar30 + fVar34;
        pfVar2[3] = fVar38 * fVar33 + fVar22;
        pfVar2 = (float *)(uStack_d0 + 0x20 & 0xfffffff0);
        *pfVar2 = fVar35 * fVar15 + fVar25;
        pfVar2[1] = fVar36 * fVar17 + fVar16;
        pfVar2[2] = fVar37 * fVar19 + fVar28;
        pfVar2[3] = fVar38 * fVar21 + fVar18;
        uVar9 = (unsigned __int64)uStack_c8 + 0x30;
        uVar10 = uStack_d0 + 0x30;
        uStack_c8 = (unsigned int)uVar9;
        uVar8 = (unsigned __int64)uStack_cc + 0x30;
        uStack_cc = (unsigned int)uVar8;
        uStack_d0 = uVar10;
        if ((uVar6 & 0xffffffff) < uVar4) {
          lVar12 = uVar6 * 0x34 + param_5;
          do {
            uStack_d0 = uVar10;
            if ((unsigned __int64)*(unsigned short *)((int)lVar12 + 0x28) < (uVar11 & 0xffffffff)) break;
            if (0x7f < uVar13) {
              uVar13 = uVar13 - 0x80;
              dataCacheBlockTouch(uVar9 + 0x100);
              dataCacheBlockTouch(uVar8 + 0x100);
              dataCacheBlockTouch(lVar12 + 0x100);
            }
            iVar5 = (int)uVar9;
            pfVar2 = (float *)(iVar5 + 0x10U & 0xfffffff0);
            fVar30 = *pfVar2;
            fVar19 = pfVar2[1];
            fVar33 = pfVar2[2];
            fVar21 = pfVar2[3];
            pfVar2 = (float *)(iVar5 + 0x20U & 0xfffffff0);
            fVar24 = *pfVar2;
            fVar15 = pfVar2[1];
            fVar27 = pfVar2[2];
            fVar17 = pfVar2[3];
            pfVar2 = (float *)((int)uVar8 + 0x10U & 0xfffffff0);
            pfVar3 = (float *)((int)uVar8 + 0x20U & 0xfffffff0);
            fVar25 = *pfVar2 - fVar30;
            fVar28 = pfVar2[1] - fVar19;
            fVar31 = pfVar2[2] - fVar33;
            fVar34 = pfVar2[3] - fVar21;
            fVar16 = *pfVar3 - fVar24;
            fVar18 = pfVar3[1] - fVar15;
            fVar20 = pfVar3[2] - fVar27;
            fVar22 = pfVar3[3] - fVar17;
            puVar1 = (unsigned int *)((int)in_r0 + iVar5 & 0xfffffff0);
            uVar23 = *puVar1;
            uVar26 = puVar1[1];
            uVar29 = puVar1[2];
            uVar32 = puVar1[3];
            fn_8250D648();
            puVar1 = (unsigned int *)((int)in_r0 + uVar10 & 0xfffffff0);
            *puVar1 = uVar23;
            puVar1[1] = uVar26;
            puVar1[2] = uVar29;
            puVar1[3] = uVar32;
            uVar6 = uVar6 + 1;
            uVar13 = uVar13 + 0x30;
            lVar12 = lVar12 + 0x34;
            pfVar2 = (float *)(uStack_d0 + 0x10 & 0xfffffff0);
            *pfVar2 = fVar35 * fVar25 + fVar30;
            pfVar2[1] = fVar36 * fVar28 + fVar19;
            pfVar2[2] = fVar37 * fVar31 + fVar33;
            pfVar2[3] = fVar38 * fVar34 + fVar21;
            pfVar2 = (float *)(uStack_d0 + 0x20 & 0xfffffff0);
            *pfVar2 = fVar35 * fVar16 + fVar24;
            pfVar2[1] = fVar36 * fVar18 + fVar15;
            pfVar2[2] = fVar37 * fVar20 + fVar27;
            pfVar2[3] = fVar38 * fVar22 + fVar17;
            uVar10 = uStack_d0 + 0x30;
            uVar9 = (unsigned __int64)uStack_c8 + 0x30;
            uVar8 = (unsigned __int64)uStack_cc + 0x30;
            uStack_c8 = (unsigned int)uVar9;
            uStack_cc = (unsigned int)uVar8;
            uStack_d0 = uVar10;
          } while ((uVar6 & 0xffffffff) < uVar4);
        }
      }
      uVar11 = uVar6;
    } while ((uVar6 & 0xffffffff) < uVar4);
  }
  fn_82F6DCB4();
  return;
}

