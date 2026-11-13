typedef unsigned char bool;
#define true 1
#define false 0
#define CONCAT22(h,l) ((unsigned int)((((unsigned short)(h)) << 16) | ((unsigned short)(l))))
extern unsigned int *auStack_a8;
extern unsigned int *auStack_c8;
extern int fn_82C4E3B0();
extern int fn_82C4E470();
extern int fn_830C6D68();
extern unsigned int iStack00000024;
extern unsigned int uStack_ac;
extern unsigned int uStack_b0;
extern unsigned int uStack_b4;
extern unsigned int uStack_b8;
extern unsigned int uStack_cc;
extern unsigned int uStack_d0;


unsigned __int64 fn_830C8D48(int *param_1,int param_2,int param_3,int param_4,unsigned int *param_5)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned char bVar3;
  unsigned char bVar4;
  unsigned char bVar5;
  unsigned char bVar6;
  short sVar7;
  unsigned short uVar8;
  short sVar9;
  unsigned short uVar10;
  short sVar11;
  unsigned int uVar12;
  int *piVar13;
  unsigned __int64 *puVar14;
  unsigned char *pbVar15;
  unsigned short uVar16;
  unsigned short uVar17;
  unsigned short uVar18;
  unsigned short uVar19;
  bool bVar20;
  int iVar22;
  unsigned int uVar23;
  unsigned __int64 uVar21;
  unsigned int uVar24;
  __int64 lVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  unsigned int *puVar29;
  unsigned int *puVar30;
  __int64 lVar31;
  int iVar32;
  unsigned int *puVar33;
  unsigned int *puVar34;
  unsigned __int64 uVar35;
  unsigned short *puVar36;
  unsigned __int64 uVar37;
  unsigned __int64 uVar38;
  unsigned __int64 uVar39;
  int iVar40;
  int iStack00000024;
  unsigned int uStack_d0;
  unsigned int uStack_cc;
  unsigned __int64 auStack_c8 [2];
  unsigned int uStack_b8;
  unsigned int uStack_b4;
  unsigned int uStack_b0;
  unsigned int uStack_ac;
  unsigned int auStack_a8 [42];
  
  uVar37 = (unsigned __int64)*(unsigned short *)((int)param_1 + 0x32);
  uVar12 = *param_5;
  uVar38 = (unsigned __int64)uVar12;
  iVar27 = param_1[0x57];
  iVar28 = (int)(unsigned int)*(unsigned short *)((int)param_1 + 0x32) >> 1;
  if ((param_4 == 0) || (bVar20 = false, *(int *)(param_1[0x146] + param_4 * 4) != 0)) {
    bVar20 = true;
  }
  piVar13 = (int *)param_1[0x55];
  sVar7 = *(short *)((int)param_1 + 0x3e);
  uVar8 = *(unsigned short *)((int)param_1 + 0x42);
  sVar9 = *(short *)(param_1 + 0x10);
  uVar10 = *(unsigned short *)(param_1 + 0x11);
  puVar14 = (unsigned __int64 *)*param_1;
  iStack00000024 = param_3;
  if (piVar13 == (int *)0x0) {
    uVar39 = 0;
    *(unsigned int *)((int)puVar14 + 0x14) = 3;
  }
  else {
    iVar22 = *piVar13;
    sVar11 = *(short *)((int)((*puVar14 >> (0x40 - (unsigned __int64)*(unsigned char *)(piVar13 + 2) & 0x7f) &
                              0xffffffff) << 1) + iVar22);
    uVar39 = (unsigned __int64)sVar11;
    if (sVar11 < 0) {
      fn_82C4E470(puVar14);
      do {
        uVar35 = *puVar14;
        fn_82C4E470(puVar14,1);
        sVar11 = *(short *)((int)(((uVar39 - ((__int64)uVar35 >> 0x3f)) + 0x8000 & 0xffffffff) << 1
                                 ) + iVar22);
        uVar39 = (unsigned __int64)sVar11;
      } while (sVar11 < 0);
    }
    else {
      iVar22 = *(int *)(puVar14 + 1);
      iVar26 = (int)(uVar39 & 0xf);
      *puVar14 = *puVar14 << (uVar39 & 0xf);
      *(int *)(puVar14 + 1) = iVar22 - iVar26;
      if (iVar22 < iVar26) {
        do {
          pbVar15 = *(unsigned char **)((int)puVar14 + 0xc);
          if (pbVar15 < (unsigned char *)(*(int *)(puVar14 + 2) - 4U)) {
            bVar1 = *pbVar15;
            bVar2 = pbVar15[1];
            bVar3 = pbVar15[2];
            bVar4 = pbVar15[3];
            bVar5 = pbVar15[4];
            bVar6 = pbVar15[5];
            iVar22 = *(int *)(puVar14 + 1);
            *(unsigned char **)((int)puVar14 + 0xc) = pbVar15 + 6;
            *(int *)(puVar14 + 1) = iVar22 + 0x30;
            *puVar14 = ((((((unsigned __int64)bVar1 * 0x100 + (unsigned __int64)bVar2) * 0x100 + (unsigned __int64)bVar3)
                          * 0x100 + (unsigned __int64)bVar4) * 0x100 + (unsigned __int64)bVar5) * 0x100 +
                        (unsigned __int64)bVar6 << ((__int64)-iVar22 & 0x7fU)) + *puVar14;
            goto LAB_830c8eb0;
          }
          iVar22 = fn_82C4E3B0(puVar14);
        } while (iVar22 == 1);
        uVar39 = (unsigned __int64)((int)sVar11 >> 4);
      }
      else {
LAB_830c8eb0:
        uVar39 = (unsigned __int64)((int)sVar11 >> 4);
      }
    }
  }
  if (*(int *)(*param_1 + 0x14) != 0) {
    return 1;
  }
  uVar23 = 0;
  if ((uVar39 & 8) != 0) {
    uVar23 = fn_830C6D68(param_1,param_1[0x54]);
  }
  uStack_b0 = 0;
  lVar31 = 0;
  uStack_b4 = 0;
  uStack_b8 = 0;
  if ((param_3 != 0) && ((*(unsigned int *)(param_2 + -0x18) & 0x20000) != 0)) {
    lVar31 = 1;
    uStack_b8 = *(unsigned int *)(uVar12 * 4 + iVar27 + -4);
  }
  if (!bVar20) {
    uVar35 = uVar38 - uVar37;
    puVar29 = (unsigned int *)(param_2 + iVar28 * -0x18);
    if ((*puVar29 & 0x20000) != 0) {
      lVar25 = lVar31 << 2;
      lVar31 = lVar31 + 1;
      iVar22 = (int)lVar25;
      if ((*puVar29 & 0x700) < 0x200) {
        *(unsigned int *)((int)&uStack_b8 + iVar22) =
             *(unsigned int *)((int)((uVar35 & 0xffffffff) << 2) + iVar27);
      }
      else {
        *(unsigned int *)((int)&uStack_b8 + iVar22) =
             *(unsigned int *)((int)((uVar35 - uVar37 & 0xffffffff) << 2) + iVar27);
      }
    }
    if (iVar28 != 1) {
      if (param_3 == iVar28 + -1) {
        uVar35 = uVar35 - 1;
        puVar29 = puVar29 + -6;
      }
      else {
        uVar35 = uVar35 + 2;
        puVar29 = puVar29 + 6;
      }
      if ((*puVar29 & 0x20000) != 0) {
        lVar25 = lVar31 << 2;
        lVar31 = lVar31 + 1;
        iVar22 = (int)lVar25;
        if ((*puVar29 & 0x700) < 0x200) {
          *(unsigned int *)((int)&uStack_b8 + iVar22) =
               *(unsigned int *)((int)((uVar35 & 0xffffffff) << 2) + iVar27);
        }
        else {
          *(unsigned int *)((int)&uStack_b8 + iVar22) =
               *(unsigned int *)((int)((uVar35 - uVar37 & 0xffffffff) << 2) + iVar27);
        }
      }
    }
  }
  iVar26 = 0;
  iVar22 = 0;
  iVar32 = (int)lVar31;
  if (iVar32 == 0) {
LAB_830c9178:
    uStack_d0 = 0;
  }
  else {
    puVar33 = &uStack_ac;
    puVar34 = &uStack_cc;
    puVar36 = (unsigned short *)&uStack_b8;
    do {
      if ((*puVar36 & 4) == 0) {
        iVar26 = iVar26 + 1;
        puVar34 = puVar34 + 1;
        *puVar34 = *(unsigned int *)puVar36;
      }
      else {
        iVar22 = iVar22 + 1;
        puVar33 = puVar33 + 1;
        *puVar33 = *(unsigned int *)puVar36;
      }
      puVar36 = puVar36 + 2;
      lVar31 = lVar31 + -1;
    } while (lVar31 != 0);
    if (iVar32 == 0) goto LAB_830c9178;
    if ((iVar26 == 3) || (iVar22 == 3)) {
      uVar17 = (unsigned short)((unsigned int)((int)(short)(((unsigned __int64)(uStack_b4) >> 16) & 0xFFFF) - (int)(short)(((unsigned __int64)(uStack_b8) >> 16) & 0xFFFF)) >> 0x10);
      uVar16 = (unsigned short)((unsigned int)((int)(short)(((unsigned __int64)(uStack_b4) >> 16) & 0xFFFF) - (int)(short)(((unsigned __int64)(uStack_b0) >> 16) & 0xFFFF)) >> 0x10) ^
               uVar17;
      uVar17 = (unsigned short)((unsigned int)((int)(short)(((unsigned __int64)(uStack_b0) >> 16) & 0xFFFF) - (int)(short)(((unsigned __int64)(uStack_b8) >> 16) & 0xFFFF)) >> 0x10) ^
               uVar17;
      uVar19 = (unsigned short)((unsigned int)((int)(short)(((unsigned __int64)(uStack_b4) >> 0) & 0xFFFF) - (int)(short)(((unsigned __int64)(uStack_b8) >> 0) & 0xFFFF)) >> 0x10);
      uVar18 = (unsigned short)((unsigned int)((int)(short)(((unsigned __int64)(uStack_b4) >> 0) & 0xFFFF) - (int)(short)(((unsigned __int64)(uStack_b0) >> 0) & 0xFFFF)) >> 0x10) ^
               uVar19;
      uVar19 = (unsigned short)((unsigned int)((int)(short)(((unsigned __int64)(uStack_b0) >> 0) & 0xFFFF) - (int)(short)(((unsigned __int64)(uStack_b8) >> 0) & 0xFFFF)) >> 0x10) ^
               uVar19;
      uStack_d0 = CONCAT22((((unsigned __int64)(uStack_b0) >> 0) & 0xFFFF) & ~((short)(uVar18 | uVar19) >> 0xf) |
                           (short)uVar19 >> 0xf & (((unsigned __int64)(uStack_b8) >> 0) & 0xFFFF) |
                           (short)uVar18 >> 0xf & (((unsigned __int64)(uStack_b4) >> 0) & 0xFFFF),
                           (((unsigned __int64)(uStack_b0) >> 16) & 0xFFFF) & ~((short)(uVar16 | uVar17) >> 0xf) |
                           (short)uVar17 >> 0xf & (((unsigned __int64)(uStack_b8) >> 16) & 0xFFFF) |
                           (short)uVar16 >> 0xf & (((unsigned __int64)(uStack_b4) >> 16) & 0xFFFF));
    }
    else if (iVar26 < iVar22) {
      uStack_d0 = auStack_a8[0];
    }
    else {
      uStack_d0 = ((unsigned int)((unsigned __int64)(auStack_c8[0]) >> 32));
    }
  }
  puVar33 = (unsigned int *)(uVar12 * 4 + iVar27);
  *(unsigned short *)((int)puVar33 + 2) = ((((unsigned __int64)(uStack_d0) >> 16) & 0xFFFF) + (short)uVar23 + sVar7 & uVar8) - sVar7;
  uVar21 = 0;
  *(unsigned short *)(uVar12 * 4 + iVar27) =
       ((short)((unsigned int)uVar23 >> 0x10) + (((unsigned __int64)(uStack_d0) >> 0) & 0xFFFF) + sVar9 & uVar10) - sVar9;
  if ((uVar39 & 4) != 0) {
    uVar21 = fn_830C6D68(param_1,param_1[0x54]);
  }
  iVar26 = 1;
  uStack_b0 = 0;
  uStack_b4 = 0;
  uStack_b8 = *puVar33;
  iVar22 = iVar26;
  if (!bVar20) {
    lVar31 = uVar38 - uVar37;
    puVar29 = (unsigned int *)(param_2 + iVar28 * -0x18);
    if ((*puVar29 & 0x20000) != 0) {
      iVar26 = 2;
      if ((*puVar29 & 0x700) < 0x200) {
        uStack_b4 = *(unsigned int *)((int)((lVar31 + 1U & 0xffffffff) << 2) + iVar27);
      }
      else {
        uStack_b4 = *(unsigned int *)((int)(((lVar31 + 1U) - uVar37 & 0xffffffff) << 2) + iVar27);
      }
    }
    iVar22 = iVar26;
    if (iVar28 != 1) {
      if (param_3 == iVar28 + -1) {
        uVar35 = lVar31 - 1;
        puVar29 = puVar29 + -6;
      }
      else {
        uVar35 = lVar31 + 2;
        puVar29 = puVar29 + 6;
      }
      if ((*puVar29 & 0x20000) != 0) {
        iVar22 = iVar26 + 1;
        if ((*puVar29 & 0x700) < 0x200) {
          (&uStack_b8)[iVar26] = *(unsigned int *)((int)((uVar35 & 0xffffffff) << 2) + iVar27);
        }
        else {
          (&uStack_b8)[iVar26] =
               *(unsigned int *)((int)((uVar35 - uVar37 & 0xffffffff) << 2) + iVar27);
        }
      }
    }
  }
  iVar32 = 0;
  iVar26 = 0;
  if (iVar22 == 0) {
LAB_830c9400:
    uStack_d0 = 0;
  }
  else {
    puVar34 = &uStack_cc;
    puVar30 = &uStack_ac;
    puVar36 = (unsigned short *)&uStack_b8;
    iVar40 = iVar22;
    do {
      if ((*puVar36 & 4) == 0) {
        iVar32 = iVar32 + 1;
        puVar30 = puVar30 + 1;
        *puVar30 = *(unsigned int *)puVar36;
      }
      else {
        iVar26 = iVar26 + 1;
        puVar34 = puVar34 + 1;
        *puVar34 = *(unsigned int *)puVar36;
      }
      puVar36 = puVar36 + 2;
      iVar40 = iVar40 + -1;
    } while (iVar40 != 0);
    if (iVar22 == 0) goto LAB_830c9400;
    if ((iVar32 == 3) || (iVar26 == 3)) {
      uVar17 = (unsigned short)((unsigned int)((int)(short)(((unsigned __int64)(uStack_b4) >> 16) & 0xFFFF) - (int)(short)(((unsigned __int64)(uStack_b8) >> 16) & 0xFFFF)) >> 0x10);
      uVar16 = (unsigned short)((unsigned int)((int)(short)(((unsigned __int64)(uStack_b4) >> 16) & 0xFFFF) - (int)(short)(((unsigned __int64)(uStack_b0) >> 16) & 0xFFFF)) >> 0x10) ^
               uVar17;
      uVar17 = (unsigned short)((unsigned int)((int)(short)(((unsigned __int64)(uStack_b0) >> 16) & 0xFFFF) - (int)(short)(((unsigned __int64)(uStack_b8) >> 16) & 0xFFFF)) >> 0x10) ^
               uVar17;
      uVar19 = (unsigned short)((unsigned int)((int)(short)(((unsigned __int64)(uStack_b4) >> 0) & 0xFFFF) - (int)(short)(((unsigned __int64)(uStack_b8) >> 0) & 0xFFFF)) >> 0x10);
      uVar18 = (unsigned short)((unsigned int)((int)(short)(((unsigned __int64)(uStack_b4) >> 0) & 0xFFFF) - (int)(short)(((unsigned __int64)(uStack_b0) >> 0) & 0xFFFF)) >> 0x10) ^
               uVar19;
      uVar19 = (unsigned short)((unsigned int)((int)(short)(((unsigned __int64)(uStack_b0) >> 0) & 0xFFFF) - (int)(short)(((unsigned __int64)(uStack_b8) >> 0) & 0xFFFF)) >> 0x10) ^
               uVar19;
      uStack_d0 = CONCAT22((((unsigned __int64)(uStack_b0) >> 0) & 0xFFFF) & ~((short)(uVar18 | uVar19) >> 0xf) |
                           (short)uVar19 >> 0xf & (((unsigned __int64)(uStack_b8) >> 0) & 0xFFFF) |
                           (short)uVar18 >> 0xf & (((unsigned __int64)(uStack_b4) >> 0) & 0xFFFF),
                           (((unsigned __int64)(uStack_b0) >> 16) & 0xFFFF) & ~((short)(uVar16 | uVar17) >> 0xf) |
                           (short)uVar17 >> 0xf & (((unsigned __int64)(uStack_b8) >> 16) & 0xFFFF) |
                           (short)uVar16 >> 0xf & (((unsigned __int64)(uStack_b4) >> 16) & 0xFFFF));
      param_3 = iStack00000024;
      auStack_c8[0] = uVar21;
    }
    else if (iVar32 < iVar26) {
      uStack_d0 = ((unsigned int)((unsigned __int64)(auStack_c8[0]) >> 32));
    }
    else {
      uStack_d0 = auStack_a8[0];
    }
  }
  *(unsigned short *)((int)puVar33 + 6) = ((((unsigned __int64)(uStack_d0) >> 16) & 0xFFFF) + (short)uVar21 + sVar7 & uVar8) - sVar7;
  uVar23 = 0;
  *(unsigned short *)(puVar33 + 1) =
       ((short)((unsigned __int64)uVar21 >> 0x10) + (((unsigned __int64)(uStack_d0) >> 0) & 0xFFFF) + sVar9 & uVar10) - sVar9;
  if ((uVar39 & 2) != 0) {
    uVar23 = fn_830C6D68(param_1,param_1[0x54]);
  }
  uStack_b0 = 0;
  lVar31 = 0;
  uStack_b4 = 0;
  uStack_b8 = 0;
  if ((param_3 != 0) && ((*(unsigned int *)(param_2 + -0x18) & 0x20000) != 0)) {
    lVar31 = 1;
    uStack_b8 = *(unsigned int *)((int)((uVar38 + uVar37 & 0xffffffff) << 2) + iVar27 + -4);
  }
  if (!bVar20) {
    uVar35 = uVar38 - uVar37;
    puVar29 = (unsigned int *)(param_2 + iVar28 * -0x18);
    if ((*puVar29 & 0x20000) != 0) {
      lVar25 = lVar31 << 2;
      lVar31 = lVar31 + 1;
      *(unsigned int *)((int)&uStack_b8 + (int)lVar25) =
           *(unsigned int *)((int)((uVar35 & 0xffffffff) << 2) + iVar27);
    }
    if (iVar28 != 1) {
      if (param_3 == iVar28 + -1) {
        uVar35 = uVar35 - 1;
        puVar29 = puVar29 + -6;
      }
      else {
        uVar35 = uVar35 + 2;
        puVar29 = puVar29 + 6;
      }
      if ((*puVar29 & 0x20000) != 0) {
        lVar25 = lVar31 << 2;
        lVar31 = lVar31 + 1;
        *(unsigned int *)((int)&uStack_b8 + (int)lVar25) =
             *(unsigned int *)((int)((uVar35 & 0xffffffff) << 2) + iVar27);
      }
    }
  }
  iVar32 = 0;
  iVar26 = 0;
  iVar22 = (int)lVar31;
  if (iVar22 == 0) {
LAB_830c9660:
    uStack_d0 = 0;
  }
  else {
    puVar33 = &uStack_cc;
    puVar34 = &uStack_ac;
    puVar36 = (unsigned short *)&uStack_b8;
    do {
      if ((*puVar36 & 4) == 0) {
        iVar32 = iVar32 + 1;
        puVar34 = puVar34 + 1;
        *puVar34 = *(unsigned int *)puVar36;
      }
      else {
        iVar26 = iVar26 + 1;
        puVar33 = puVar33 + 1;
        *puVar33 = *(unsigned int *)puVar36;
      }
      puVar36 = puVar36 + 2;
      lVar31 = lVar31 + -1;
    } while (lVar31 != 0);
    if (iVar22 == 0) goto LAB_830c9660;
    if ((iVar32 == 3) || (iVar26 == 3)) {
      uVar17 = (unsigned short)((unsigned int)((int)(short)(((unsigned __int64)(uStack_b4) >> 16) & 0xFFFF) - (int)(short)(((unsigned __int64)(uStack_b8) >> 16) & 0xFFFF)) >> 0x10);
      uVar16 = (unsigned short)((unsigned int)((int)(short)(((unsigned __int64)(uStack_b4) >> 16) & 0xFFFF) - (int)(short)(((unsigned __int64)(uStack_b0) >> 16) & 0xFFFF)) >> 0x10) ^
               uVar17;
      uVar17 = (unsigned short)((unsigned int)((int)(short)(((unsigned __int64)(uStack_b0) >> 16) & 0xFFFF) - (int)(short)(((unsigned __int64)(uStack_b8) >> 16) & 0xFFFF)) >> 0x10) ^
               uVar17;
      uVar19 = (unsigned short)((unsigned int)((int)(short)(((unsigned __int64)(uStack_b4) >> 0) & 0xFFFF) - (int)(short)(((unsigned __int64)(uStack_b8) >> 0) & 0xFFFF)) >> 0x10);
      uVar18 = (unsigned short)((unsigned int)((int)(short)(((unsigned __int64)(uStack_b4) >> 0) & 0xFFFF) - (int)(short)(((unsigned __int64)(uStack_b0) >> 0) & 0xFFFF)) >> 0x10) ^
               uVar19;
      uVar19 = (unsigned short)((unsigned int)((int)(short)(((unsigned __int64)(uStack_b0) >> 0) & 0xFFFF) - (int)(short)(((unsigned __int64)(uStack_b8) >> 0) & 0xFFFF)) >> 0x10) ^
               uVar19;
      uStack_d0 = CONCAT22((((unsigned __int64)(uStack_b0) >> 0) & 0xFFFF) & ~((short)(uVar18 | uVar19) >> 0xf) |
                           (short)uVar19 >> 0xf & (((unsigned __int64)(uStack_b8) >> 0) & 0xFFFF) |
                           (short)uVar18 >> 0xf & (((unsigned __int64)(uStack_b4) >> 0) & 0xFFFF),
                           (((unsigned __int64)(uStack_b0) >> 16) & 0xFFFF) & ~((short)(uVar16 | uVar17) >> 0xf) |
                           (short)uVar17 >> 0xf & (((unsigned __int64)(uStack_b8) >> 16) & 0xFFFF) |
                           (short)uVar16 >> 0xf & (((unsigned __int64)(uStack_b4) >> 16) & 0xFFFF));
    }
    else if (iVar32 < iVar26) {
      uStack_d0 = ((unsigned int)((unsigned __int64)(auStack_c8[0]) >> 32));
    }
    else {
      uStack_d0 = auStack_a8[0];
    }
  }
  iVar22 = (int)(uVar38 + uVar37) * 4;
  puVar33 = (unsigned int *)(iVar22 + iVar27);
  *(unsigned short *)(iVar22 + iVar27) =
       ((short)((unsigned int)uVar23 >> 0x10) + (((unsigned __int64)(uStack_d0) >> 0) & 0xFFFF) + sVar9 & uVar10) - sVar9;
  uVar24 = 0;
  *(unsigned short *)((int)puVar33 + 2) = ((((unsigned __int64)(uStack_d0) >> 16) & 0xFFFF) + (short)uVar23 + sVar7 & uVar8) - sVar7;
  if ((uVar39 & 1) != 0) {
    uVar24 = fn_830C6D68(param_1,param_1[0x54]);
  }
  iVar26 = 1;
  uStack_b0 = 0;
  uStack_b4 = 0;
  uStack_b8 = *puVar33;
  iVar22 = iVar26;
  if (!bVar20) {
    lVar31 = uVar38 + uVar37 + uVar37 * -2;
    puVar29 = (unsigned int *)(param_2 + iVar28 * -0x18);
    if ((*puVar29 & 0x20000) != 0) {
      iVar26 = 2;
      uStack_b4 = *(unsigned int *)((int)((lVar31 + 1U & 0xffffffff) << 2) + iVar27);
    }
    iVar22 = iVar26;
    if (iVar28 != 1) {
      if (param_3 == iVar28 + -1) {
        uVar37 = lVar31 - 1;
        puVar29 = puVar29 + -6;
      }
      else {
        uVar37 = lVar31 + 2;
        puVar29 = puVar29 + 6;
      }
      if ((*puVar29 & 0x20000) != 0) {
        iVar22 = iVar26 + 1;
        (&uStack_b8)[iVar26] = *(unsigned int *)((int)((uVar37 & 0xffffffff) << 2) + iVar27);
      }
    }
  }
  iVar28 = 0;
  iVar27 = 0;
  if (iVar22 != 0) {
    puVar34 = &uStack_cc;
    puVar30 = &uStack_ac;
    puVar36 = (unsigned short *)&uStack_b8;
    iVar26 = iVar22;
    do {
      if ((*puVar36 & 4) == 0) {
        iVar28 = iVar28 + 1;
        puVar30 = puVar30 + 1;
        *puVar30 = *(unsigned int *)puVar36;
      }
      else {
        iVar27 = iVar27 + 1;
        puVar34 = puVar34 + 1;
        *puVar34 = *(unsigned int *)puVar36;
      }
      puVar36 = puVar36 + 2;
      iVar26 = iVar26 + -1;
    } while (iVar26 != 0);
    if (iVar22 != 0) {
      if ((iVar28 == 3) || (iVar27 == 3)) {
        uVar17 = (unsigned short)((unsigned int)((int)(short)(((unsigned __int64)(uStack_b4) >> 16) & 0xFFFF) - (int)(short)(((unsigned __int64)(uStack_b8) >> 16) & 0xFFFF)) >> 0x10)
        ;
        uVar16 = (unsigned short)((unsigned int)((int)(short)(((unsigned __int64)(uStack_b4) >> 16) & 0xFFFF) - (int)(short)(((unsigned __int64)(uStack_b0) >> 16) & 0xFFFF)) >> 0x10)
                 ^ uVar17;
        uVar17 = (unsigned short)((unsigned int)((int)(short)(((unsigned __int64)(uStack_b0) >> 16) & 0xFFFF) - (int)(short)(((unsigned __int64)(uStack_b8) >> 16) & 0xFFFF)) >> 0x10)
                 ^ uVar17;
        uVar19 = (unsigned short)((unsigned int)((int)(short)(((unsigned __int64)(uStack_b4) >> 0) & 0xFFFF) - (int)(short)(((unsigned __int64)(uStack_b8) >> 0) & 0xFFFF)) >> 0x10)
        ;
        uVar18 = (unsigned short)((unsigned int)((int)(short)(((unsigned __int64)(uStack_b4) >> 0) & 0xFFFF) - (int)(short)(((unsigned __int64)(uStack_b0) >> 0) & 0xFFFF)) >> 0x10)
                 ^ uVar19;
        uVar19 = (unsigned short)((unsigned int)((int)(short)(((unsigned __int64)(uStack_b0) >> 0) & 0xFFFF) - (int)(short)(((unsigned __int64)(uStack_b8) >> 0) & 0xFFFF)) >> 0x10)
                 ^ uVar19;
        uStack_d0 = CONCAT22((((unsigned __int64)(uStack_b0) >> 0) & 0xFFFF) & ~((short)(uVar18 | uVar19) >> 0xf) |
                             (short)uVar19 >> 0xf & (((unsigned __int64)(uStack_b8) >> 0) & 0xFFFF) |
                             (short)uVar18 >> 0xf & (((unsigned __int64)(uStack_b4) >> 0) & 0xFFFF),
                             (((unsigned __int64)(uStack_b0) >> 16) & 0xFFFF) & ~((short)(uVar16 | uVar17) >> 0xf) |
                             (short)uVar17 >> 0xf & (((unsigned __int64)(uStack_b8) >> 16) & 0xFFFF) |
                             (short)uVar16 >> 0xf & (((unsigned __int64)(uStack_b4) >> 16) & 0xFFFF));
      }
      else if (iVar28 < iVar27) {
        uStack_d0 = ((unsigned int)((unsigned __int64)(auStack_c8[0]) >> 32));
      }
      else {
        uStack_d0 = auStack_a8[0];
      }
      goto LAB_830c98a4;
    }
  }
  uStack_d0 = 0;
LAB_830c98a4:
  *(unsigned short *)((int)puVar33 + 6) = ((((unsigned __int64)(uStack_d0) >> 16) & 0xFFFF) + (short)uVar24 + sVar7 & uVar8) - sVar7;
  *(unsigned short *)(puVar33 + 1) =
       ((short)((unsigned int)uVar24 >> 0x10) + (((unsigned __int64)(uStack_d0) >> 0) & 0xFFFF) + sVar9 & uVar10) - sVar9;
  return 0;
}

