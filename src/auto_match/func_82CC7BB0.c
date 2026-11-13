extern int fn_82C53960();
extern int fn_82C53970();
extern int fn_82CDB448();
extern int fn_82CDB7E0();
extern int fn_82CDBCA0();
extern int fn_82CDC788();
extern int fn_82CDDCA8();
extern int fn_82CDE4C8();
extern int fn_82CDED68();
extern unsigned int iStack_b4;
extern unsigned int uStack_c0;
extern unsigned int *uStack_d8;


void fn_82CC7BB0(int param_1,__int64 param_2,unsigned __int64 param_3)

{
  int iVar1;
  unsigned char bVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  int iVar7;
  unsigned __int64 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  int iVar14;
  unsigned __int64 uVar13;
  unsigned __int64 uVar15;
  __int64 lVar16;
  int iVar17;
  int iVar18;
  int iVar20;
  int iVar21;
  int iVar22;
  __int64 lVar19;
  unsigned int uVar23;
  unsigned char *pbVar26;
  unsigned int uVar27;
  __int64 lVar24;
  __int64 lVar25;
  unsigned char *pbVar28;
  unsigned char *pbVar29;
  unsigned char *puVar30;
  int iVar31;
  int iVar32;
  unsigned __int64 uVar33;
  __int64 lVar34;
  unsigned int uVar35;
  unsigned char *pbVar36;
  unsigned int uVar38;
  unsigned __int64 uVar37;
  unsigned char *pbVar39;
  unsigned int uVar40;
  unsigned int uVar41;
  unsigned int uVar42;
  unsigned __int64 uVar43;
  unsigned __int64 uVar44;
  int iVar45;
  unsigned __int64 uVar46;
  unsigned char *pbVar47;
  unsigned char *puVar48;
  unsigned int uStack_d8;
  unsigned int uStack_c0;
  int iStack_b4;
  
  uVar35 = *(unsigned int *)(param_1 + 0x24);
  uVar3 = *(unsigned int *)(param_1 + 0x20);
  uVar23 = *(unsigned int *)(param_1 + 0x1c);
  iVar14 = ((int)uVar35 >> 1) + (unsigned int)((int)uVar35 < 0 && (uVar35 & 1) != 0);
  uVar41 = *(unsigned int *)(param_1 + 0x18);
  uVar4 = *(unsigned int *)(*(int *)(param_1 + 0x30) + 4);
  uVar44 = (unsigned __int64)uVar4;
  iVar18 = (int)param_2;
  uVar5 = *(unsigned int *)(*(int *)(param_1 + 0x30) + 8);
  iVar10 = ((int)uVar3 >> 1) + (unsigned int)((int)uVar3 < 0 && (uVar3 & 1) != 0);
  uVar43 = (__int64)((int)uVar23 >> 1) + (unsigned __int64)((int)uVar23 < 0 && (uVar23 & 1) != 0);
  iVar32 = (int)uVar43;
  iVar20 = ((int)uVar41 >> 1) + (unsigned int)((int)uVar41 < 0 && (uVar41 & 1) != 0);
  uVar40 = (iVar32 + -1) * iVar14;
  uVar38 = (uVar5 - 1) * uVar35;
  uVar6 = (((int)uVar4 >> 1) + (unsigned int)((int)uVar4 < 0 && (uVar4 & 1) != 0) + -1) * uVar3;
  uVar27 = (uVar4 - 1) * uVar3;
  pbVar39 = (unsigned char *)(uVar3 * iVar18 + *(int *)(param_1 + 0x40));
  iVar31 = (int)param_3;
  uVar23 = (int)(((unsigned __int64)uVar5 & 0xffffff) << 8) / (int)uVar35;
  uVar33 = (unsigned __int64)(int)uVar23;
  uVar41 = (int)(((unsigned __int64)uVar4 & 0x1ffffff) << 7) / (int)uVar3;
  uVar15 = (unsigned __int64)uVar3 &
           ~((((unsigned __int64)uVar4 & 0xffffff) << 8 | ((unsigned __int64)uVar4 & 0x1ffffff) >> 0x18) - 1);
  trapWord(6,(unsigned __int64)uVar3,0);
  uVar8 = uVar43 & ~((((unsigned __int64)uVar40 & 0x7fffffff) << 1 | (unsigned __int64)(uVar40 >> 0x1f)) - 1);
  trapWord(6,(unsigned __int64)uVar35,0);
  trapWord(6,uVar43,0);
  uVar42 = (iVar31 >> 1) + (unsigned int)(iVar31 < 0 && (param_3 & 1) != 0);
  iVar1 = (int)uVar6 / (int)uVar4;
  iStack_b4 = 0;
  pbVar26 = pbVar39 + uVar3;
  uVar13 = uVar44 & ~((((unsigned __int64)uVar27 & 0x7fffffff) << 1 | (unsigned __int64)(uVar27 >> 0x1f)) - 1);
  uVar43 = uVar44 & ~((((unsigned __int64)uVar6 & 0x7fffffff) << 1 | (unsigned __int64)(uVar6 >> 0x1f)) - 1);
  trapWord(6,(unsigned __int64)uVar5,0);
  trapWord(6,uVar44,0);
  trapWord(5,(unsigned __int64)uVar35 &
             ~((((unsigned __int64)uVar5 & 0x7fffff) << 9 | ((unsigned __int64)uVar5 & 0xffffff) >> 0x17) - 1),
           0xffff);
  trapWord(5,uVar15,0xffff);
  trapWord(5,(unsigned __int64)uVar5 &
             ~((((unsigned __int64)uVar38 & 0x7fffffff) << 1 | (unsigned __int64)(uVar38 >> 0x1f)) - 1),0xffff);
  iVar45 = (int)uVar27 / (int)uVar4;
  trapWord(6,uVar44,0);
  trapWord(5,uVar13,0xffff);
  trapWord(5,uVar43,0xffff);
  trapWord(5,uVar8,0xffff);
  lVar34 = (__int64)(int)uVar4 * (__int64)iVar18 + (unsigned __int64)*(unsigned int *)(param_1 + 0x34);
  if (uVar23 == uVar41 << 1) {
    if (uVar23 == 0x40) {
      uVar35 = 0x40;
    }
    else if (uVar23 == 0x80) {
      uVar35 = 0x80;
    }
    else {
      uVar15 = uVar33 - 0xc1;
      uVar43 = -(unsigned __int64)(uVar33 == 0xc0);
      uVar35 = (unsigned int)uVar43 & 0xc0;
    }
  }
  else {
    uVar35 = 0;
  }
  if (*(int *)(param_1 + 0x48) == 0) {
    uVar3 = *(unsigned int *)(param_1 + 0x20);
    uVar15 = (__int64)(int)uVar3 * (__int64)iVar18;
    uVar46 = uVar15 + *(unsigned int *)(param_1 + 0x38);
  }
  else {
    uVar46 = (unsigned __int64)*(unsigned int *)(param_1 + 0x50);
    uVar3 = *(unsigned int *)(param_1 + 0x5c);
  }
  uVar37 = (unsigned __int64)uVar3;
  uVar6 = fn_82C53960(*(unsigned int *)(param_1 + 0x20),0,uVar8,uVar41 << 1,uVar43,uVar13,uVar15);
  iVar7 = fn_82C53960(*(int *)(param_1 + 0x20) << 2,0);
  uVar41 = 0xffffffffU - ((int)uVar41 >> 0x1f) & uVar41;
  if ((int)uVar23 < 1) {
    return;
  }
  uVar43 = (__int64)((int)uVar38 / (int)uVar5);
  if (iVar31 < (int)uVar38 / (int)uVar5) {
    uVar43 = param_3;
  }
  uStack_d8 = (int)uVar40 / iVar32;
  if ((int)uVar42 < (int)uVar40 / iVar32) {
    uStack_d8 = uVar42;
  }
  if (*(int *)(param_1 + 0x28) == 0) {
    lVar24 = 0;
  }
  else {
    uVar27 = uVar23 - 0x100;
    lVar24 = (__int64)((int)uVar27 >> 1) + (unsigned __int64)((int)uVar27 < 0 && (uVar27 & 1) != 0);
  }
  lVar24 = (__int64)(int)uVar23 * (__int64)iVar18 + lVar24;
  iVar21 = 0;
  iVar22 = 0;
  if (0 < iVar45) {
    piVar12 = (int *)(iVar7 + -4);
    iVar17 = iVar45;
    do {
      iVar9 = iVar21 >> 7;
      *(unsigned char *)(iVar22 + uVar6) = (unsigned char)iVar21 & 0x7f;
      iVar21 = iVar21 + uVar41;
      piVar12 = piVar12 + 1;
      *piVar12 = iVar9;
      iVar22 = iVar22 + 1;
      iVar17 = iVar17 + -1;
    } while (iVar17 != 0);
  }
  iVar17 = *(int *)(param_1 + 0x20);
  if (iVar22 < iVar17) {
    piVar12 = (int *)(iVar22 * 4 + iVar7 + -4);
    do {
      iVar22 = iVar22 + 1;
      piVar12 = piVar12 + 1;
      *piVar12 = iVar21 >> 7;
      iVar21 = iVar21 + uVar41;
      iVar17 = *(int *)(param_1 + 0x20);
    } while (iVar22 < iVar17);
  }
  uVar8 = uVar46;
  if ((int)lVar24 < 0) {
    uVar8 = uVar33 - lVar24;
    iStack_b4 = (int)uVar8 / (int)uVar23;
    trapWord(6,uVar33,0);
    trapWord(5,uVar33 & ~(((uVar8 & 0x7fffffff) << 1 | (uVar8 & 0xffffffff) >> 0x1f) - 1),0xffff);
    iVar21 = (int)lVar34;
    iVar22 = 0;
    if (0 < iVar45) {
      piVar12 = (int *)(iVar7 + -4);
      uVar8 = uVar46;
      iVar17 = iVar45;
      do {
        piVar12 = piVar12 + 1;
        bVar2 = ((unsigned char *)uVar8)[uVar6 - (int)uVar46];
        *(unsigned char *)uVar8 =
             (char)((int)((unsigned int)*(unsigned char *)(*piVar12 + iVar21) * (0x80 - (unsigned int)bVar2) +
                         (unsigned int)*(unsigned char *)(iVar21 + 1 + *piVar12) * (unsigned int)bVar2) >> 7);
        uVar8 = uVar8 + 1;
        iVar17 = iVar17 + -1;
        iVar22 = iVar45;
      } while (iVar17 != 0);
    }
    iVar17 = *(int *)(param_1 + 0x20);
    if (iVar22 < iVar17) {
      piVar12 = (int *)(iVar22 * 4 + iVar7 + -4);
      do {
        piVar12 = piVar12 + 1;
        *(unsigned char *)(iVar22 + (int)uVar46) = *(unsigned char *)(*piVar12 + iVar21);
        iVar22 = iVar22 + 1;
        iVar17 = *(int *)(param_1 + 0x20);
      } while (iVar22 < iVar17);
    }
    uVar8 = uVar37 + uVar46;
    if ((int)(param_2 + 1) < (int)(iStack_b4 + param_2)) {
      lVar25 = (iStack_b4 + param_2) - (param_2 + 1);
      lVar16 = uVar46 - uVar8;
      do {
        iVar21 = 0;
        uVar13 = uVar8;
        if (0 < iVar17) {
          do {
            iVar21 = iVar21 + 1;
            *(unsigned char *)uVar13 = ((unsigned char *)uVar13)[(int)lVar16];
            iVar17 = *(int *)(param_1 + 0x20);
            uVar13 = uVar13 + 1;
          } while (iVar21 < iVar17);
        }
        uVar8 = uVar37 + uVar8;
        lVar16 = lVar16 - uVar37;
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
    }
    lVar24 = (__int64)iStack_b4 * (__int64)(int)uVar23 + lVar24;
  }
  iVar21 = (int)uVar43;
  if (uVar35 == 0x40) {
    if (*(int *)(param_1 + 0x28) == 0) {
      fn_82CDBCA0();
      lVar16 = (__int64)(int)uVar3 * (__int64)iVar21;
      lVar25 = (__int64)iVar21 * (__int64)(int)uVar23;
    }
    else {
      fn_82CDC788(lVar34,uVar8,pbVar39,iVar45,iVar17,uVar37,uVar44,uVar43);
      iVar22 = iVar21 + -2;
LAB_82cc80e0:
      lVar16 = (__int64)iVar22 * (__int64)(int)uVar3;
      lVar25 = (__int64)iVar22 * (__int64)(int)uVar23;
    }
LAB_82cc80e8:
    lVar16 = lVar16 + uVar8;
    lVar24 = lVar25 + lVar24;
  }
  else {
    if (uVar35 == 0x80) {
      if (*(int *)(param_1 + 0x28) != 0) {
        fn_82CDB7E0(lVar34);
        iVar22 = iVar21 + -1;
        goto LAB_82cc80e0;
      }
      fn_82CDB448();
      lVar16 = (__int64)(int)uVar3 * (__int64)iVar21;
      lVar25 = (__int64)iVar21 * (__int64)(int)uVar23;
      goto LAB_82cc80e8;
    }
    if (uVar35 == 0xc0) {
      if (*(int *)(param_1 + 0x28) != 0) {
        fn_82CDE4C8(lVar34);
        iVar22 = iVar21 + -1;
        goto LAB_82cc80e0;
      }
      fn_82CDDCA8();
      lVar16 = (__int64)(int)uVar3 * (__int64)iVar21 + uVar8;
      lVar24 = (__int64)iVar21 * (__int64)(int)uVar23 + lVar24;
    }
    else {
      fn_82CDED68(lVar34);
      iVar22 = (iVar21 - iStack_b4) - iVar18;
      lVar16 = (__int64)iVar22 * (__int64)(int)uVar3 + uVar8;
      lVar24 = (__int64)iVar22 * (__int64)(int)uVar23 + lVar24;
    }
  }
  if (iVar21 < iVar31) {
    param_3 = param_3 - uVar43;
    lVar25 = (unsigned __int64)uVar6 - lVar16;
    uStack_c0 = (unsigned int)param_3;
    uVar43 = 0;
    uVar8 = 0;
    pbVar47 = pbVar39;
    pbVar36 = pbVar26;
    do {
      iVar31 = (int)(unsigned int)lVar24 >> 8;
      lVar19 = (__int64)iVar31 * (__int64)(int)uVar4;
      uVar13 = lVar19 + lVar34;
      uVar15 = lVar34 + uVar44 + lVar19;
      uVar3 = (unsigned int)lVar24 & 0xff;
      iVar21 = (int)uVar13;
      pbVar28 = pbVar47;
      if (iVar31 < (int)(uVar5 - 1)) {
        iVar31 = (int)uVar15;
        if ((uVar13 & 0xffffffff) == (uVar8 & 0xffffffff)) {
          iVar21 = 0;
          if (0 < iVar45) {
            piVar12 = (int *)(iVar7 + -4);
            iVar21 = iVar45;
            do {
              piVar12 = piVar12 + 1;
              *pbVar28 = (unsigned char)((int)((unsigned int)*(unsigned char *)(*piVar12 + iVar31) *
                                      (0x80 - (unsigned int)pbVar28[uVar6 - (int)pbVar47]) +
                                     (unsigned int)*(unsigned char *)(iVar31 + 1 + *piVar12) *
                                     (unsigned int)pbVar28[uVar6 - (int)pbVar47]) >> 7);
              pbVar28 = pbVar28 + 1;
              iVar21 = iVar21 + -1;
            } while (iVar21 != 0);
            uVar33 = (unsigned __int64)uVar23;
            iVar21 = iVar45;
          }
          pbVar28 = pbVar36;
          if (iVar21 < *(int *)(param_1 + 0x20)) {
            piVar12 = (int *)(iVar21 * 4 + iVar7 + -4);
            do {
              piVar12 = piVar12 + 1;
              pbVar47[iVar21] = *(unsigned char *)(*piVar12 + iVar31);
              iVar21 = iVar21 + 1;
            } while (iVar21 < *(int *)(param_1 + 0x20));
          }
        }
        else {
          pbVar47 = pbVar36;
          if ((uVar13 & 0xffffffff) != (uVar43 & 0xffffffff)) {
            iVar22 = 0;
            if (0 < iVar45) {
              piVar12 = (int *)(iVar7 + -4);
              pbVar47 = pbVar39;
              iVar22 = iVar45;
              do {
                piVar12 = piVar12 + 1;
                iVar17 = *piVar12;
                bVar2 = pbVar47[uVar6 - (int)pbVar39];
                *pbVar47 = (unsigned char)((int)((unsigned int)*(unsigned char *)(iVar17 + iVar21) * (0x80 - (unsigned int)bVar2) +
                                       (unsigned int)*(unsigned char *)(iVar21 + 1 + iVar17) * (unsigned int)bVar2) >> 7);
                pbVar47[(int)pbVar26 - (int)pbVar39] =
                     (unsigned char)((int)((unsigned int)*(unsigned char *)(iVar17 + iVar31) * (0x80 - (unsigned int)bVar2) +
                                 (unsigned int)*(unsigned char *)(iVar31 + 1 + iVar17) * (unsigned int)bVar2) >> 7);
                pbVar47 = pbVar47 + 1;
                iVar22 = iVar22 + -1;
              } while (iVar22 != 0);
              uVar33 = (unsigned __int64)uVar23;
              param_3 = (unsigned __int64)uStack_c0;
              iVar22 = iVar45;
            }
            pbVar28 = pbVar39;
            pbVar47 = pbVar26;
            if (iVar22 < *(int *)(param_1 + 0x20)) {
              pbVar36 = pbVar26 + iVar22;
              piVar12 = (int *)(iVar22 * 4 + iVar7 + -4);
              do {
                piVar12 = piVar12 + 1;
                iVar17 = *piVar12;
                iVar22 = iVar22 + 1;
                pbVar39[(int)pbVar36 - (int)pbVar26] = *(unsigned char *)(iVar17 + iVar21);
                *pbVar36 = *(unsigned char *)(iVar17 + iVar31);
                pbVar36 = pbVar36 + 1;
              } while (iVar22 < *(int *)(param_1 + 0x20));
            }
          }
        }
        iVar31 = 0;
        pbVar36 = pbVar47;
        if (0 < *(int *)(param_1 + 0x20)) {
          pbVar29 = pbVar47;
          do {
            iVar31 = iVar31 + 1;
            pbVar29[(int)lVar16 - (int)pbVar47] =
                 (unsigned char)((unsigned int)pbVar29[(int)pbVar28 - (int)pbVar47] * (0x100 - uVar3) +
                        *pbVar29 * uVar3 >> 8);
            pbVar29 = pbVar29 + 1;
          } while (iVar31 < *(int *)(param_1 + 0x20));
        }
      }
      else {
        iVar31 = 0;
        if (0 < iVar45) {
          piVar12 = (int *)(iVar7 + -4);
          lVar19 = lVar16;
          iVar22 = iVar45;
          do {
            piVar12 = piVar12 + 1;
            bVar2 = ((unsigned char *)lVar19)[(int)lVar25];
            *(unsigned char *)lVar19 =
                 (char)((int)((unsigned int)*(unsigned char *)(*piVar12 + iVar21) * (0x80 - (unsigned int)bVar2) +
                             (unsigned int)*(unsigned char *)(iVar21 + 1 + *piVar12) * (unsigned int)bVar2) >> 7);
            lVar19 = lVar19 + 1;
            iVar22 = iVar22 + -1;
            iVar31 = iVar45;
          } while (iVar22 != 0);
        }
        uVar13 = uVar43;
        uVar15 = uVar8;
        if (iVar31 < *(int *)(param_1 + 0x20)) {
          piVar12 = (int *)(iVar31 * 4 + iVar7 + -4);
          do {
            piVar12 = piVar12 + 1;
            *(unsigned char *)(iVar31 + (int)lVar16) = *(unsigned char *)(*piVar12 + iVar21);
            iVar31 = iVar31 + 1;
          } while (iVar31 < *(int *)(param_1 + 0x20));
        }
      }
      pbVar47 = pbVar28;
      param_3 = param_3 - 1;
      uStack_c0 = (unsigned int)param_3;
      lVar16 = uVar37 + lVar16;
      lVar25 = lVar25 - uVar37;
      lVar24 = lVar24 + uVar33;
      uVar43 = uVar13;
      uVar8 = uVar15;
    } while (param_3 != 0);
  }
  if (*(int *)(param_1 + 0x48) == 0) {
    uVar23 = *(int *)(param_1 + 0x2c) * iVar18;
    puVar48 = (unsigned char *)
              ((((int)uVar23 >> 1) + (unsigned int)((int)uVar23 < 0 && (uVar23 & 1) != 0)) * iVar10 +
               *(int *)(param_1 + 0x20) * *(int *)(param_1 + 0x24) + *(int *)(param_1 + 0x38));
    iVar45 = iVar10;
  }
  else {
    puVar48 = *(unsigned char **)(param_1 + 0x54);
    iVar45 = *(int *)(param_1 + 0x60);
  }
  iVar31 = *(int *)(param_1 + 0x2c);
  uVar23 = iVar31 * iVar18;
  lVar34 = (__int64)*(int *)(param_1 + 0x20) * (__int64)(int)uVar5 +
           (unsigned __int64)*(unsigned int *)(param_1 + 0x40);
  iVar22 = (((int)uVar23 >> 1) + (unsigned int)((int)uVar23 < 0 && (uVar23 & 1) != 0)) * iVar20 +
           uVar4 * uVar5 + *(int *)(param_1 + 0x34);
  iVar21 = (int)uVar33;
  if (*(int *)(param_1 + 0x28) == 0) {
    lVar24 = 0;
  }
  else {
    uVar23 = iVar31 * iVar21 - 0x100;
    lVar24 = (__int64)((int)uVar23 >> 1) + (unsigned __int64)((int)uVar23 < 0 && (uVar23 & 1) != 0);
  }
  uVar23 = iVar31 * iVar21 * iVar18;
  iVar17 = 0;
  iVar31 = 0;
  lVar24 = (__int64)((int)uVar23 >> 1) + (unsigned __int64)((int)uVar23 < 0 && (uVar23 & 1) != 0) + lVar24
  ;
  if (0 < iVar1) {
    piVar12 = (int *)(iVar7 + -4);
    iVar9 = iVar1;
    do {
      iVar11 = iVar17 >> 7;
      *(unsigned char *)(iVar31 + uVar6) = (unsigned char)iVar17 & 0x7f;
      iVar17 = iVar17 + uVar41;
      piVar12 = piVar12 + 1;
      *piVar12 = iVar11;
      iVar31 = iVar31 + 1;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  if (iVar31 < iVar10) {
    iVar9 = iVar10 - iVar31;
    piVar12 = (int *)(iVar31 * 4 + iVar7 + -4);
    do {
      iVar31 = iVar17 >> 7;
      iVar17 = iVar17 + uVar41;
      piVar12 = piVar12 + 1;
      *piVar12 = iVar31;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  if ((int)lVar24 < 0) {
    uVar43 = uVar33 - lVar24;
    iStack_b4 = (int)uVar43 / iVar21;
    trapWord(6,uVar33,0);
    trapWord(5,uVar33 & ~(((uVar43 & 0x7fffffff) << 1 | (uVar43 & 0xffffffff) >> 0x1f) - 1),0xffff);
    iVar31 = 0;
    if (0 < iVar1) {
      piVar12 = (int *)(iVar7 + -4);
      puVar30 = puVar48;
      iVar17 = iVar1;
      do {
        piVar12 = piVar12 + 1;
        *puVar30 = (char)((int)((unsigned int)*(unsigned char *)(*piVar12 + iVar22) *
                                (0x80 - (unsigned int)(unsigned char)puVar30[uVar6 - (int)puVar48]) +
                               (unsigned int)*(unsigned char *)(iVar22 + 1 + *piVar12) *
                               (unsigned int)(unsigned char)puVar30[uVar6 - (int)puVar48]) >> 7);
        puVar30 = puVar30 + 1;
        iVar17 = iVar17 + -1;
        iVar31 = iVar1;
      } while (iVar17 != 0);
    }
    if (iVar31 < iVar10) {
      iVar17 = iVar10 - iVar31;
      piVar12 = (int *)(iVar31 * 4 + iVar7 + -4);
      do {
        piVar12 = piVar12 + 1;
        puVar48[iVar31] = *(unsigned char *)(*piVar12 + iVar22);
        iVar31 = iVar31 + 1;
        iVar17 = iVar17 + -1;
      } while (iVar17 != 0);
    }
    puVar30 = puVar48 + iVar45;
    uVar23 = iVar18 * *(int *)(param_1 + 0x2c);
    iVar31 = ((int)uVar23 >> 1) + (unsigned int)((int)uVar23 < 0 && (uVar23 & 1) != 0);
    iVar17 = iVar31 + 1;
    if (iVar17 < iVar31 + iStack_b4) {
      iVar31 = (int)puVar48 - (int)puVar30;
      do {
        puVar48 = puVar30;
        iVar9 = iVar10;
        if (0 < iVar10) {
          do {
            *puVar48 = puVar48[iVar31];
            iVar9 = iVar9 + -1;
            puVar48 = puVar48 + 1;
          } while (iVar9 != 0);
        }
        iVar17 = iVar17 + 1;
        puVar30 = puVar30 + iVar45;
        uVar23 = iVar18 * *(int *)(param_1 + 0x2c);
        iVar31 = iVar31 - iVar45;
      } while (iVar17 < (int)(((int)uVar23 >> 1) + (unsigned int)((int)uVar23 < 0 && (uVar23 & 1) != 0) +
                             iStack_b4));
    }
    puVar48 = puVar30;
    lVar24 = (__int64)iStack_b4 * (__int64)iVar21 + lVar24;
  }
  uVar43 = (unsigned __int64)uStack_d8;
  if (uVar35 == 0x40) {
    if (*(int *)(param_1 + 0x28) == 0) {
      fn_82CDBCA0(iVar22,puVar48);
      lVar34 = (__int64)(int)uStack_d8 * (__int64)iVar21;
      iVar31 = iVar45 * uStack_d8;
    }
    else {
      fn_82CDC788(iVar22,puVar48,lVar34,iVar1,iVar10,iVar45,iVar20,uVar43);
      iVar31 = uStack_d8 - 2;
LAB_82cc8824:
      lVar34 = (__int64)iVar31 * (__int64)iVar21;
      iVar31 = iVar31 * iVar45;
    }
  }
  else if (uVar35 == 0x80) {
    if (*(int *)(param_1 + 0x28) != 0) {
      fn_82CDB7E0(iVar22,puVar48,lVar34,iVar1,iVar10,iVar45,iVar20,uVar43);
      iVar31 = uStack_d8 - 1;
      goto LAB_82cc8824;
    }
    fn_82CDB448(iVar22,puVar48);
    lVar34 = (__int64)(int)uStack_d8 * (__int64)iVar21;
    iVar31 = iVar45 * uStack_d8;
  }
  else if (uVar35 == 0xc0) {
    if (*(int *)(param_1 + 0x28) != 0) {
      fn_82CDE4C8(iVar22,puVar48,lVar34,iVar1,iVar10,iVar45,iVar20,uVar43);
      iVar31 = uStack_d8 - 1;
      goto LAB_82cc8824;
    }
    fn_82CDDCA8(iVar22,puVar48);
    lVar34 = (__int64)(int)uStack_d8 * (__int64)iVar21;
    iVar31 = iVar45 * uStack_d8;
  }
  else {
    fn_82CDED68(iVar22,puVar48,lVar34,iVar1,iVar10,iVar45,iVar20,uVar43);
    iVar17 = (uStack_d8 - iStack_b4) - iVar18;
    iVar31 = iVar17 * iVar45;
    lVar34 = (__int64)iVar17 * (__int64)iVar21;
  }
  puVar48 = puVar48 + iVar31;
  lVar34 = lVar34 + lVar24;
  if (((int)(*(int *)(param_1 + 0x2c) * uStack_d8) < (int)(*(int *)(param_1 + 0x2c) * uVar42)) &&
     ((int)uStack_d8 < (int)uVar42)) {
    lVar24 = uVar42 - uVar43;
    iVar31 = uVar6 - (int)puVar48;
    do {
      iVar9 = ((int)lVar34 >> 8) * iVar20 + iVar22;
      iVar17 = 0;
      if (0 < iVar1) {
        piVar12 = (int *)(iVar7 + -4);
        puVar30 = puVar48;
        iVar11 = iVar1;
        do {
          piVar12 = piVar12 + 1;
          *puVar30 = (char)((int)((unsigned int)*(unsigned char *)(*piVar12 + iVar9) *
                                  (0x80 - (unsigned int)(unsigned char)puVar30[iVar31]) +
                                 (unsigned int)*(unsigned char *)(iVar9 + 1 + *piVar12) * (unsigned int)(unsigned char)puVar30[iVar31]
                                 ) >> 7);
          puVar30 = puVar30 + 1;
          iVar11 = iVar11 + -1;
          iVar17 = iVar1;
        } while (iVar11 != 0);
      }
      if (iVar17 < iVar10) {
        iVar11 = iVar10 - iVar17;
        piVar12 = (int *)(iVar17 * 4 + iVar7 + -4);
        do {
          piVar12 = piVar12 + 1;
          puVar48[iVar17] = *(unsigned char *)(*piVar12 + iVar9);
          iVar17 = iVar17 + 1;
          iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
      }
      lVar24 = lVar24 + -1;
      puVar48 = puVar48 + iVar45;
      iVar31 = iVar31 - iVar45;
      lVar34 = lVar34 + uVar33;
    } while (lVar24 != 0);
  }
  if (*(int *)(param_1 + 0x48) == 0) {
    uVar23 = *(int *)(param_1 + 0x2c) * iVar18;
    puVar48 = (unsigned char *)
              ((((int)uVar23 >> 1) + (unsigned int)((int)uVar23 < 0 && (uVar23 & 1) != 0) +
               *(int *)(param_1 + 0x2c) * iVar14) * iVar10 +
               *(int *)(param_1 + 0x20) * *(int *)(param_1 + 0x24) + *(int *)(param_1 + 0x38));
    iVar45 = iVar10;
  }
  else {
    puVar48 = *(unsigned char **)(param_1 + 0x58);
    iVar45 = *(int *)(param_1 + 100);
  }
  uVar23 = *(int *)(param_1 + 0x2c) * iVar18;
  iVar32 = *(int *)(param_1 + 0x2c) * iVar32;
  lVar34 = (__int64)iVar32 * (__int64)iVar10 +
           (__int64)*(int *)(param_1 + 0x20) * (__int64)(int)uVar5 +
           (unsigned __int64)*(unsigned int *)(param_1 + 0x40);
  iVar32 = (((int)uVar23 >> 1) + (unsigned int)((int)uVar23 < 0 && (uVar23 & 1) != 0) + iVar32) * iVar20 +
           uVar4 * uVar5 + *(int *)(param_1 + 0x34);
  if (*(int *)(param_1 + 0x28) == 0) {
    lVar24 = 0;
  }
  else {
    uVar23 = iVar21 * *(int *)(param_1 + 0x2c) - 0x100;
    lVar24 = (__int64)((int)uVar23 >> 1) + (unsigned __int64)((int)uVar23 < 0 && (uVar23 & 1) != 0);
  }
  uVar23 = iVar21 * iVar18;
  lVar24 = (__int64)((int)uVar23 >> 1) + (unsigned __int64)((int)uVar23 < 0 && (uVar23 & 1) != 0) + lVar24
  ;
  if (lVar24 < 0) {
    uVar8 = uVar33 - lVar24;
    iStack_b4 = (int)uVar8 / iVar21;
    trapWord(6,uVar33,0);
    trapWord(5,uVar33 & ~(((uVar8 & 0x7fffffff) << 1 | (uVar8 & 0xffffffff) >> 0x1f) - 1),0xffff);
    iVar14 = 0;
    if (0 < iVar1) {
      piVar12 = (int *)(iVar7 + -4);
      puVar30 = puVar48;
      iVar31 = iVar1;
      do {
        piVar12 = piVar12 + 1;
        *puVar30 = (char)((int)((unsigned int)*(unsigned char *)(*piVar12 + iVar32) *
                                (0x80 - (unsigned int)(unsigned char)puVar30[uVar6 - (int)puVar48]) +
                               (unsigned int)*(unsigned char *)(iVar32 + 1 + *piVar12) *
                               (unsigned int)(unsigned char)puVar30[uVar6 - (int)puVar48]) >> 7);
        puVar30 = puVar30 + 1;
        iVar31 = iVar31 + -1;
        iVar14 = iVar1;
      } while (iVar31 != 0);
    }
    if (iVar14 < iVar10) {
      iVar31 = iVar10 - iVar14;
      piVar12 = (int *)(iVar14 * 4 + iVar7 + -4);
      do {
        piVar12 = piVar12 + 1;
        puVar48[iVar14] = *(unsigned char *)(*piVar12 + iVar32);
        iVar14 = iVar14 + 1;
        iVar31 = iVar31 + -1;
      } while (iVar31 != 0);
    }
    puVar30 = puVar48 + iVar45;
    uVar23 = iVar18 * *(int *)(param_1 + 0x2c);
    iVar14 = ((int)uVar23 >> 1) + (unsigned int)((int)uVar23 < 0 && (uVar23 & 1) != 0);
    iVar31 = iVar14 + 1;
    if (iVar31 < iVar14 + iStack_b4) {
      iVar14 = (int)puVar48 - (int)puVar30;
      do {
        iVar22 = iVar10;
        puVar48 = puVar30;
        if (0 < iVar10) {
          do {
            *puVar48 = puVar48[iVar14];
            iVar22 = iVar22 + -1;
            puVar48 = puVar48 + 1;
          } while (iVar22 != 0);
        }
        iVar31 = iVar31 + 1;
        puVar30 = puVar30 + iVar45;
        uVar23 = iVar18 * *(int *)(param_1 + 0x2c);
        iVar14 = iVar14 - iVar45;
      } while (iVar31 < (int)(((int)uVar23 >> 1) + (unsigned int)((int)uVar23 < 0 && (uVar23 & 1) != 0) +
                             iStack_b4));
    }
    puVar48 = puVar30;
    lVar24 = (__int64)iStack_b4 * (__int64)iVar21 + lVar24;
  }
  if (uVar35 == 0x40) {
    if (*(int *)(param_1 + 0x28) == 0) {
      fn_82CDBCA0(iVar32,puVar48);
      lVar34 = (__int64)(int)uStack_d8 * (__int64)iVar21;
      iVar14 = iVar45 * uStack_d8;
      goto LAB_82cc8cec;
    }
    fn_82CDC788(iVar32,puVar48,lVar34,iVar1,iVar10,iVar45,iVar20,uVar43);
    iVar14 = uStack_d8 - 2;
  }
  else if (uVar35 == 0x80) {
    if (*(int *)(param_1 + 0x28) == 0) {
      fn_82CDB448(iVar32,puVar48);
      lVar34 = (__int64)(int)uStack_d8 * (__int64)iVar21;
      iVar14 = iVar45 * uStack_d8;
      goto LAB_82cc8cec;
    }
    fn_82CDB7E0(iVar32,puVar48,lVar34,iVar1,iVar10,iVar45);
    iVar14 = uStack_d8 - 1;
  }
  else {
    if (uVar35 != 0xc0) {
      fn_82CDED68(iVar32,puVar48,lVar34,iVar1,iVar10,iVar45);
      iVar18 = (uStack_d8 - iStack_b4) - iVar18;
      iVar14 = iVar18 * iVar45;
      lVar34 = (__int64)iVar18 * (__int64)iVar21;
      goto LAB_82cc8cec;
    }
    if (*(int *)(param_1 + 0x28) == 0) {
      fn_82CDDCA8(iVar32);
      lVar34 = (__int64)(int)uStack_d8 * (__int64)iVar21;
      iVar14 = iVar45 * uStack_d8;
      goto LAB_82cc8cec;
    }
    fn_82CDE4C8(iVar32,puVar48,lVar34,iVar1,iVar10,iVar45);
    iVar14 = uStack_d8 - 1;
  }
  lVar34 = (__int64)iVar14 * (__int64)iVar21;
  iVar14 = iVar14 * iVar45;
LAB_82cc8cec:
  puVar48 = puVar48 + iVar14;
  lVar34 = lVar34 + lVar24;
  if (((int)(*(int *)(param_1 + 0x2c) * uStack_d8) < (int)(*(int *)(param_1 + 0x2c) * uVar42)) &&
     ((int)uStack_d8 < (int)uVar42)) {
    lVar24 = uVar42 - uVar43;
    iVar18 = uVar6 - (int)puVar48;
    do {
      iVar31 = ((int)lVar34 >> 8) * iVar20 + iVar32;
      iVar14 = 0;
      if (0 < iVar1) {
        piVar12 = (int *)(iVar7 + -4);
        puVar30 = puVar48;
        iVar21 = iVar1;
        do {
          piVar12 = piVar12 + 1;
          *puVar30 = (char)((int)((unsigned int)*(unsigned char *)(*piVar12 + iVar31) *
                                  (0x80 - (unsigned int)(unsigned char)puVar30[iVar18]) +
                                 (unsigned int)*(unsigned char *)(iVar31 + 1 + *piVar12) *
                                 (unsigned int)(unsigned char)puVar30[iVar18]) >> 7);
          puVar30 = puVar30 + 1;
          iVar21 = iVar21 + -1;
          iVar14 = iVar1;
        } while (iVar21 != 0);
      }
      if (iVar14 < iVar10) {
        iVar21 = iVar10 - iVar14;
        piVar12 = (int *)(iVar14 * 4 + iVar7 + -4);
        do {
          piVar12 = piVar12 + 1;
          puVar48[iVar14] = *(unsigned char *)(*piVar12 + iVar31);
          iVar14 = iVar14 + 1;
          iVar21 = iVar21 + -1;
        } while (iVar21 != 0);
      }
      lVar24 = lVar24 + -1;
      puVar48 = puVar48 + iVar45;
      iVar18 = iVar18 - iVar45;
      lVar34 = lVar34 + uVar33;
    } while (lVar24 != 0);
  }
  fn_82C53970(uVar6);
  fn_82C53970(iVar7);
  return;
}

