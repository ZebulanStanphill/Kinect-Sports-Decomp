typedef unsigned char bool;
#define true 1
#define false 0
#define CONCAT11(h,l) ((unsigned short)((((unsigned char)(h)) << 8) | ((unsigned char)(l))))
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int *auStack_3e0;
extern unsigned int *auStack_460;
extern unsigned int *auStack_4d0;
extern int fn_82AA8F30();
extern int fn_82AA9058();
extern int fn_82AA9100();
extern int fn_82B67650();
extern int fn_82B67E60();
extern int fn_82B68798();
extern int fn_82F68CC0();
extern int fn_82F691F0();
extern unsigned int iStack0000001c;
extern unsigned int iStack0000002c;
extern unsigned int iStack00000034;
extern unsigned int iStack0000003c;
extern unsigned int iStack_4d4;
extern unsigned int iStack_4e0;
extern unsigned int iStack_4f0;
extern unsigned int iStack_4fc;
extern unsigned int uStack_4d8;
extern unsigned int uStack_4e4;
extern unsigned int uStack_4f4;
extern unsigned int uStack_4f8;


int fn_82AA9308(int param_1,int param_2,__int64 param_3,int param_4,int param_5,int param_6)

{
  unsigned char bVar1;
  unsigned short uVar2;
  unsigned int uVar3;
  unsigned char *puVar4;
  int *piVar5;
  int iVar6;
  bool bVar7;
  int iVar8;
  __int64 lVar9;
  unsigned __int64 uVar10;
  unsigned __int64 uVar11;
  unsigned __int64 uVar12;
  unsigned __int64 uVar13;
  int iVar16;
  int iVar17;
  unsigned __int64 uVar14;
  unsigned short uVar18;
  __int64 lVar15;
  int iVar19;
  unsigned int *puVar20;
  __int64 lVar21;
  int iVar22;
  __int64 lVar23;
  int *piVar24;
  unsigned __int64 uVar25;
  unsigned __int64 uVar26;
  unsigned __int64 uVar27;
  int iVar28;
  unsigned __int64 uVar29;
  unsigned __int64 uVar30;
  int iVar31;
  unsigned int *puVar32;
  unsigned __int64 uVar33;
  unsigned int uVar35;
  __int64 lVar34;
  unsigned __int64 uVar36;
  unsigned char *pbVar37;
  unsigned int uVar38;
  unsigned int *puVar39;
  int iStack0000001c;
  int iStack0000002c;
  int iStack00000034;
  int iStack0000003c;
  int iStack_4fc;
  unsigned int uStack_4f8;
  unsigned int uStack_4f4;
  int iStack_4f0;
  unsigned int uStack_4e4;
  int iStack_4e0;
  unsigned char *pbStack_4dc;
  unsigned int uStack_4d8;
  int iStack_4d4;
  unsigned char auStack_4d0 [44];
  int aiStack_4a4 [17];
  unsigned char auStack_460 [128];
  unsigned char auStack_3e0 [992];
  
  iVar17 = *(int *)(param_1 + 0xe0);
  uVar18 = *(unsigned short *)(param_1 + 0x5e);
  uVar27 = (unsigned __int64)uVar18;
  iVar16 = 0x3c;
  uVar3 = *(unsigned int *)(iVar17 + 0x38);
  do {
    iVar19 = (int)param_3;
    if (*(int *)(iVar17 + iVar16) != 0) {
      iStack_4fc = 1;
      uStack_4d8 = param_2 * iVar19 * param_4;
      goto LAB_82aa9378;
    }
    iVar16 = iVar16 + 4;
  } while (iVar16 < 0x45);
  iStack_4fc = 0;
LAB_82aa9378:
  iVar16 = 0x34;
  do {
    if (*(int *)(iVar17 + iVar16) != 0) {
      bVar7 = true;
      goto LAB_82aa9398;
    }
    iVar16 = iVar16 + 4;
  } while (iVar16 < 0x39);
  bVar7 = false;
LAB_82aa9398:
  uVar2 = *(unsigned short *)(param_1 + 0x5c);
  iVar17 = 0;
  iStack_4f0 = 0;
  if (uVar2 != 0) {
    piVar24 = aiStack_4a4;
    do {
      iVar17 = iVar17 + 1;
      piVar24 = piVar24 + 1;
      *piVar24 = 0;
    } while (iVar17 < (int)(unsigned int)uVar2);
  }
  uStack_4f8 = 0;
  uStack_4f4 = 0;
  trapWord(6,uVar27,0);
  uVar11 = (uVar27 + param_3) - 1;
  iVar17 = (int)uVar11 / (int)(unsigned int)uVar18;
  trapWord(5,uVar27 & ~(((uVar11 & 0x7fffffff) << 1 | (uVar11 & 0xffffffff) >> 0x1f) - 1),0xffff);
  iStack0000001c = param_2;
  iStack0000002c = param_4;
  iStack00000034 = param_5;
  iStack0000003c = param_6;
  if (0 < iVar17) {
    uVar11 = (unsigned __int64)uVar3;
    do {
      if (uStack_4f8 == iVar17 - 1U) {
        uVar27 = param_3 - (unsigned __int64)uStack_4f4;
      }
      iVar16 = *(int *)(param_1 + 0xe0);
      uVar36 = (unsigned __int64)*(unsigned int *)(param_1 + 0x6c);
      uVar26 = (unsigned __int64)*(unsigned int *)(param_1 + 0x78);
      iVar8 = fn_82AA8F30(param_1,(__int64)(*(int *)(iVar16 + 0x18) + iStack0000001c) *
                                    (__int64)*(int *)(iVar16 + 0x14) +
                                    (unsigned __int64)*(unsigned int *)(iVar16 + 0x1c) + (unsigned __int64)uStack_4f8);
      iVar16 = iStack00000034;
      iVar28 = (int)uVar27;
      if (-1 < iVar8) {
        uVar35 = (unsigned int)*(unsigned short *)(param_1 + 0x5c);
        lVar21 = 0;
        if (*(unsigned short *)(param_1 + 0x5c) != 0) {
          lVar23 = 0;
          puVar20 = (unsigned int *)(iStack00000034 + 0x40);
          piVar24 = aiStack_4a4;
          do {
            iVar8 = (int)((uVar27 & 0xffffffff) << 4);
            pbVar37 = (unsigned char *)uVar36;
            uVar29 = 0;
            iVar22 = (int)lVar21;
            uVar30 = (__int64)iVar8 * (__int64)iVar22;
            pbStack_4dc = pbVar37;
            fn_82AA9058(param_1 + 0x28,lVar21,&uStack_4e4,&iStack_4d4,&iStack_4e0);
            iVar6 = iStack_4e0;
            uVar25 = 0;
            if (iStack_4fc != 0) {
              uVar25 = (__int64)(int)(unsigned int)(*(unsigned short *)(param_1 + 0x5e) >> 2) *
                       (__int64)(int)uStack_4f8 + (__int64)(iVar19 >> 2) * (__int64)iVar22;
            }
            if (iStack_4e0 == 0) {
              bVar1 = *pbVar37;
              if ((bVar1 & 1) == 0) {
                uVar14 = (unsigned __int64)bVar1 << 2;
                uVar36 = uVar36 + 1;
                uVar29 = 1;
              }
              else {
                uVar36 = uVar36 + 2;
                uVar29 = 2;
                uVar14 = ((unsigned __int64)CONCAT11(pbVar37[1],bVar1) & 0xfffe) << 2;
              }
            }
            else {
              uVar14 = (unsigned __int64)(iVar8 >> 2);
            }
            uVar10 = (unsigned __int64)uStack_4e4;
            if (uStack_4e4 == 0) {
              iVar8 = *(int *)(param_1 + 0x40);
            }
            else {
              iVar8 = *(int *)(param_1 + 0x44);
            }
            iVar31 = (int)uVar14;
            if (iVar31 != 0) {
              if (iVar22 == uVar35 - 1) {
                uVar33 = *(unsigned int *)(param_1 + 0x78) - uVar26;
              }
              else {
                puVar4 = (unsigned char *)uVar36;
                uVar29 = uVar29 + 2;
                uVar36 = uVar36 + 2;
                uVar33 = (unsigned __int64)CONCAT11(puVar4[1],*puVar4);
              }
              uVar11 = (uVar30 & 0x3fffffff) * 4 + (unsigned __int64)*(unsigned int *)(param_1 + 0xcc);
              uVar18 = *(unsigned short *)(param_1 + 0x3e);
              if (uStack_4e4 != 0) {
                uVar18 = uVar18 >> 2;
              }
              uVar18 = uVar18 & 3;
              if (iStack_4e0 != 0) {
                uVar18 = 2;
              }
              if (uVar18 == 0) {
                if (iVar28 < iVar31) {
                  lVar34 = fn_82B67650(auStack_460,uVar36,uVar26,0,uVar11,uVar27,1);
                  if (bVar7) {
                    lVar9 = fn_82B67650(auStack_460,lVar34 + uVar36,uVar26 - lVar34,0,
                                              (uVar27 & 0x3fffffff) * 4 + uVar11,uVar14 - uVar27,1);
                    goto LAB_82aa9760;
                  }
LAB_82aa976c:
                  lVar9 = uVar33 - lVar34;
                  uVar29 = uVar33;
LAB_82aa9774:
                  uVar26 = (uVar26 - lVar9) - lVar34;
                  goto LAB_82aa9790;
                }
                lVar34 = fn_82B67650(auStack_460,uVar36,uVar26,0,uVar11,uVar14,1);
              }
              else if (uVar18 == 1) {
                uVar12 = 320000;
                uVar35 = 320000 >> (0x10 - *(unsigned short *)(param_1 + 0x5a) & 0x3f);
                lVar34 = (__int64)(int)uVar35;
                iVar22 = iVar8 >> 4;
                if (iVar28 < iVar31) {
                  if (iVar8 != 0) {
                    uVar13 = (__int64)iVar22 + 1;
                    uVar10 = (((unsigned __int64)uVar35 & 0x7fffffff) << 1 | (unsigned __int64)(uVar35 >> 0x1f)) -
                             1;
                    trapWord(6,uVar13,0);
                    uVar12 = uVar13 & ~uVar10;
                    lVar34 = (__int64)((int)uVar35 / (int)uVar13) + 1;
                    trapWord(5,uVar12,0xffff);
                  }
                  lVar34 = fn_82B67E60(auStack_4d0,uVar36,uVar26,uVar11,uVar27,lVar34,uVar10,
                                             uVar12);
                  if (!bVar7) goto LAB_82aa976c;
                  uVar35 = 24000 >> (0x10 - *(unsigned short *)(param_1 + 0x5a) & 0x3f);
                  lVar9 = (__int64)(int)uVar35;
                  if (iVar8 != 0) {
                    uVar10 = (__int64)iVar22 + 1;
                    trapWord(6,uVar10,0);
                    lVar9 = (__int64)((int)uVar35 / (int)uVar10) + 1;
                    trapWord(5,uVar10 & ~((((unsigned __int64)uVar35 & 0x7fffffff) << 1 |
                                          (unsigned __int64)(uVar35 >> 0x1f)) - 1),0xffff);
                  }
                  lVar9 = fn_82B67E60(auStack_4d0,lVar34 + uVar36,uVar26 - lVar34,
                                            (uVar27 & 0x3fffffff) * 4 + uVar11,uVar14 - uVar27,lVar9
                                           );
LAB_82aa9760:
                  uVar29 = lVar9 + lVar34 + uVar29;
                  goto LAB_82aa9774;
                }
                if (iVar8 != 0) {
                  uVar10 = (__int64)iVar22 + 1;
                  uVar12 = uVar10 & ~((((unsigned __int64)uVar35 & 0x7fffffff) << 1 |
                                      (unsigned __int64)(uVar35 >> 0x1f)) - 1);
                  trapWord(6,uVar10,0);
                  lVar34 = (__int64)((int)uVar35 / (int)uVar10) + 1;
                  trapWord(5,uVar12,0xffff);
                }
                lVar34 = fn_82B67E60(auStack_4d0,uVar36,uVar26,uVar11,uVar14,lVar34,uVar10,
                                           uVar12);
              }
              else {
                if (2 < uVar18) {
                  if (uVar18 == 3) {
                    lVar34 = (uVar14 & 0x3fffffff) * 4;
                    fn_82F68CC0(uVar11,uVar36,lVar34);
                    uVar29 = lVar34 + uVar29;
                  }
                  goto LAB_82aa9790;
                }
                lVar34 = fn_82B68798(auStack_3e0,uVar36,uVar26,uVar11,
                                           *(unsigned int *)(param_1 + 200),0x10,uVar27);
              }
              uVar29 = lVar34 + uVar29;
              uVar26 = uVar26 - lVar34;
            }
LAB_82aa9790:
            if (iVar6 == 0) {
              uVar36 = (__int64)(iVar28 >> 4) + (unsigned __int64)(iVar28 < 0 && (uVar27 & 0xf) != 0);
              if (iVar31 < (int)uVar36) {
                uVar36 = uVar14;
              }
              if (1 < (int)uVar36) {
                lVar34 = uVar36 - 1;
                uVar36 = uVar11;
                do {
                  piVar5 = (int *)uVar36;
                  uVar36 = uVar36 + 4;
                  *(int *)uVar36 = piVar5[1] + *piVar5;
                  lVar34 = lVar34 + -1;
                } while (lVar34 != 0);
              }
              if (iVar8 != 0) {
                if (iStack_4d4 != 0) {
                  iVar8 = iVar8 << 1;
                }
                if (0 < iVar31) {
                  lVar34 = (uVar30 & 0x3fffffff) * 4 + (unsigned __int64)*(unsigned int *)(param_1 + 0xcc) + -4;
                  uVar36 = uVar14;
                  do {
                    iVar6 = (int)lVar34;
                    lVar34 = lVar34 + 4;
                    *(int *)lVar34 = *(int *)(iVar6 + 4) * iVar8;
                    uVar36 = uVar36 - 1;
                  } while (uVar36 != 0);
                }
              }
              if (bVar7) {
                    /* WARNING: Subroutine does not return */
                fn_82F691F0((uVar14 & 0x3fffffff) * 4 +
                             (uVar30 & 0x3fffffff) * 4 + (unsigned __int64)*(unsigned int *)(param_1 + 0xcc),0,
                             ((uVar27 & 0xfffffff) * 0x10 - uVar14 & 0x3fffffff) << 2);
              }
              lVar34 = 0;
              if (iStack_4fc != 0) {
                lVar34 = (unsigned __int64)*(unsigned int *)(param_1 + 0xbc) +
                         ((unsigned __int64)uStack_4d8 & 0x3fffffff) * 4;
              }
              fn_82AA9100(*(unsigned int *)(param_1 + 200),
                            (uVar30 & 0x3fffffff) * 4 + (unsigned __int64)*(unsigned int *)(param_1 + 0xcc),
                            (uVar25 & 0x3fffffff) * 4 + lVar34,uVar27,
                            (__int64)iVar19 * (__int64)iStack0000002c,iStack_4fc,0);
              uVar38 = piVar24[1];
              lVar34 = (uVar27 & 0x3fffffff) * 4;
              puVar32 = (unsigned int *)(iVar16 + 0x3c);
              lVar9 = 0x10;
              uVar36 = (unsigned __int64)*(unsigned int *)(param_1 + 200);
              do {
                puVar32 = puVar32 + 1;
                fn_82F68CC0((unsigned __int64)*puVar32 + ((unsigned __int64)uVar38 + lVar23 & 0x3fffffff) * 4,
                             uVar36,lVar34);
                lVar9 = lVar9 + -1;
                uVar36 = lVar34 + uVar36;
              } while (lVar9 != 0);
            }
            else {
              uVar38 = piVar24[1];
              lVar34 = (uVar30 & 0x3fffffff) * 4 + (unsigned __int64)*(unsigned int *)(param_1 + 0xcc) + -1;
              lVar9 = 0x10;
              puVar32 = puVar20;
              do {
                uVar11 = (unsigned __int64)*puVar32 + ((unsigned __int64)uVar38 + lVar23 & 0x3fffffff) * 4;
                if (*(unsigned short *)(param_1 + 0x58) == 1) {
                  if (0 < iVar28) {
                    lVar15 = uVar11 - 4;
                    uVar36 = uVar27;
                    do {
                      iVar8 = (int)lVar34;
                      lVar34 = lVar34 + 1;
                      lVar15 = lVar15 + 4;
                      *(unsigned int *)lVar15 = (unsigned int)*(unsigned char *)(iVar8 + 1);
                      uVar36 = uVar36 - 1;
                    } while (uVar36 != 0);
                  }
                }
                else {
                  iVar8 = (1 << (*(unsigned short *)(param_1 + 0x58) - 1 & 0x3f)) + -1;
                  uVar36 = uVar11;
                  uVar25 = uVar27;
                  if (0 < iVar28) {
                    do {
                      lVar34 = lVar34 + 1;
                      if (*(char *)lVar34 == '\x01') {
                        *(int *)uVar36 = iVar8;
                      }
                      else {
                        *(int *)uVar36 = -1 - iVar8;
                      }
                      uVar25 = uVar25 - 1;
                      uVar36 = uVar36 + 4;
                    } while (uVar25 != 0);
                  }
                }
                lVar9 = lVar9 + -1;
                puVar32 = puVar32 + 1;
              } while (lVar9 != 0);
            }
            uVar35 = (unsigned int)*(unsigned short *)(param_1 + 0x5c);
            lVar21 = lVar21 + 1;
            iStack_4f0 = (int)uVar29 + iStack_4f0;
            piVar24 = piVar24 + 1;
            *piVar24 = uVar38 + iVar28;
            lVar23 = lVar23 + param_3;
            uVar36 = ZEXT48(pbStack_4dc) + uVar29;
          } while ((int)lVar21 < (int)uVar35);
        }
      }
      uStack_4f8 = uStack_4f8 + 1;
      uStack_4f4 = uStack_4f4 + iVar28;
    } while ((int)uStack_4f8 < iVar17);
  }
  if (uVar3 != 0) {
    lVar23 = 0x10;
    lVar21 = (__int64)iStack0000002c;
    puVar39 = (unsigned int *)(iStack0000003c + 0x40);
    iVar17 = iStack00000034 - iStack0000003c;
    do {
      fn_82F68CC0(*puVar39,*(unsigned int *)(iVar17 + (int)puVar39),
                   (iVar19 * lVar21 & 0x3fffffffU) << 2);
      lVar23 = lVar23 + -1;
      puVar39 = puVar39 + 1;
    } while (lVar23 != 0);
  }
  return iStack_4f0;
}

