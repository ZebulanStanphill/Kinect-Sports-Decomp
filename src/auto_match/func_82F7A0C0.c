typedef unsigned char bool;
#define true 1
#define false 0
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_82A2B528();
extern int fn_82F63BA0();
extern int free();
extern int fn_82F66FA8();
extern int fn_82F68240();
extern int malloc();
extern int __iob_func();
extern int fn_82F6E8A0();
extern int fn_82F70238();
extern int fn_82F7AB20();
extern int fn_82F7AB88();
extern int fn_82F85C08();
extern unsigned int iStack_8b0;
extern unsigned int lbl_82169540;
extern unsigned int lbl_82169558;
extern unsigned int lbl_8216955C;
extern unsigned int lbl_82169560;
extern unsigned int lbl_831BBCA8;
extern unsigned int lbl_831BBFC0;
extern unsigned int lbl_831BBFC8;
extern unsigned int lbl_831BBFCC;
extern unsigned int stack0x00000000;
extern unsigned int uStack_8b4;
extern unsigned int uStack_8b8;
extern unsigned int uStack_8bc;
extern unsigned int uStack_8c4;
extern unsigned int uStack_8d0;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

unsigned __int64 fn_82F7A0C0(unsigned __int64 param_1,unsigned short *param_2,unsigned __int64 param_3,unsigned __int64 *param_4)

{
  unsigned short uVar1;
  unsigned short *puVar2;
  int *piVar3;
  bool bVar4;
  unsigned __int64 *puVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  unsigned __int64 uVar15;
  unsigned int *puVar18;
  unsigned __int64 uVar16;
  __int64 lVar17;
  int iVar19;
  unsigned __int64 uVar20;
  unsigned int uVar21;
  char *pcVar22;
  unsigned __int64 uVar23;
  __int64 lVar24;
  unsigned short *puVar25;
  unsigned __int64 uVar26;
  int iVar27;
  unsigned __int64 uVar28;
  unsigned __int64 uVar29;
  unsigned __int64 uVar30;
  __int64 lVar31;
  unsigned __int64 uVar32;
  unsigned int uStack_8d0;
  unsigned short uStack_8c4;
  unsigned int uStack_8bc;
  unsigned int uStack_8b8;
  unsigned int uStack_8b4;
  int iStack_8b0;
  
  uVar15 = ZEXT48(&stack0x00000000);
  uStack_8bc = 0;
  bVar14 = false;
  uVar28 = 0;
  bVar13 = false;
  bVar12 = false;
  bVar11 = false;
  bVar10 = false;
  bVar9 = false;
  bVar8 = false;
  bVar7 = false;
  bVar6 = false;
  uVar23 = 0;
  uVar26 = 0;
  lVar24 = 0;
  bVar4 = false;
  if (((param_1 & 0xffffffff) == 0) || (param_2 == (unsigned short *)0x0)) {
LAB_82f7a100:
    puVar18 = (unsigned int *)fn_82F68240();
    *puVar18 = 0x16;
    fn_82F63BA0();
    uVar16 = 0xffffffffffffffff;
  }
  else {
    lVar17 = __iob_func();
    if (((param_1 & 0xffffffff) == (lVar17 + 0x20U & 0xffffffff)) ||
       (lVar17 = __iob_func(), (param_1 & 0xffffffff) == (lVar17 + 0x40U & 0xffffffff))) {
      uVar16 = fn_82F70238(uVar15 - 0x4a0,0x200,param_2,param_4);
      if ((int)uVar16 == -1) {
        uVar16 = 0x1ff;
      }
      fn_82A2B528(uVar15 - 0x4a0);
    }
    else {
      uVar32 = (unsigned __int64)*param_2;
      uVar16 = 0;
      uVar29 = 0;
      iStack_8b0 = 0;
      uStack_8d0 = 0;
      uStack_8b4 = 0;
      if (uVar32 != 0) {
        uVar30 = (unsigned __int64)uStack_8b8;
        while( true ) {
          puVar25 = param_2 + 1;
          if ((int)uVar16 < 0) break;
          iVar19 = (int)uVar32;
          if ((uVar32 < 0x20) || (0x78 < uVar32)) {
            uVar21 = 0;
          }
          else {
            uVar21 = (unsigned char)(&lbl_82169540)[iVar19] & 0xf;
          }
          uStack_8b4 = (int)(char)(&lbl_82169560)[uVar21 * 8 + uStack_8b4] >> 4;
          if (7 < uStack_8b4) goto LAB_82f7aabc;
          if (uStack_8b4 == 0) {
LAB_82f7a3b8:
            bVar4 = true;
            fn_82F7AB20(uVar32,param_1,uVar15 - 0x8d0);
            uVar16 = (unsigned __int64)uStack_8d0;
            goto LAB_82f7aabc;
          }
          if (uStack_8b4 == 1) {
            bVar4 = false;
            uVar26 = 0xffffffffffffffff;
            uStack_8b8 = 0;
            bVar14 = false;
            uVar23 = 0;
            lVar24 = 0;
            uVar28 = 0;
            bVar13 = false;
            bVar12 = false;
            bVar11 = false;
            bVar10 = false;
            bVar9 = false;
            bVar8 = false;
            bVar7 = false;
            bVar6 = false;
            goto LAB_82f7aabc;
          }
          if (uStack_8b4 == 2) {
            if (iVar19 == 0x20) {
              bVar13 = true;
            }
            else if (iVar19 == 0x23) {
              bVar6 = true;
            }
            else if (iVar19 == 0x2b) {
              bVar12 = true;
            }
            else if (iVar19 == 0x2d) {
              uVar28 = uVar28 | 4;
            }
            else if (iVar19 == 0x30) {
              uVar28 = uVar28 | 8;
            }
            goto LAB_82f7aabc;
          }
          if (uStack_8b4 == 3) {
            if (uVar32 == 0x2a) {
              uVar21 = (int)param_4 + 7U & 0xfffffff8;
              param_4 = (unsigned __int64 *)(uVar21 + 8);
              uVar21 = *(unsigned int *)(uVar21 + 4);
              uVar23 = (unsigned __int64)uVar21;
              if ((int)uVar21 < 0) {
                uVar28 = uVar28 | 4;
                uVar23 = -uVar23;
              }
            }
            else {
              uVar23 = (uVar23 * 10 + uVar32) - 0x30;
            }
            goto LAB_82f7aabc;
          }
          if (uStack_8b4 == 4) {
            uVar26 = 0;
            goto LAB_82f7aabc;
          }
          if (uStack_8b4 == 5) {
            if (uVar32 == 0x2a) {
              uVar21 = (int)param_4 + 7U & 0xfffffff8;
              param_4 = (unsigned __int64 *)(uVar21 + 8);
              uVar21 = *(unsigned int *)(uVar21 + 4);
              uVar26 = (unsigned __int64)uVar21;
              if ((int)uVar21 < 0) {
                uVar26 = 0xffffffffffffffff;
              }
            }
            else {
              uVar26 = (uVar26 * 10 + uVar32) - 0x30;
            }
            goto LAB_82f7aabc;
          }
          if (uStack_8b4 == 6) {
            if (iVar19 == 0x49) {
              uVar1 = *puVar25;
              if ((uVar1 == 0x36) && (param_2[2] == 0x34)) {
                bVar7 = true;
                puVar25 = param_2 + 3;
              }
              else if ((uVar1 == 0x33) && (param_2[2] == 0x32)) {
                bVar7 = false;
                puVar25 = param_2 + 3;
              }
              else if (((((uVar1 != 100) && (uVar1 != 0x69)) && (uVar1 != 0x6f)) &&
                       ((uVar1 != 0x75 && (uVar1 != 0x78)))) && (uVar1 != 0x58)) {
                uStack_8b4 = 0;
                goto LAB_82f7a3b8;
              }
            }
            else if (iVar19 == 0x68) {
              uVar28 = uVar28 | 0x20;
            }
            else if (iVar19 == 0x6c) {
              if (*puVar25 == 0x6c) {
                bVar8 = true;
                puVar25 = param_2 + 2;
              }
              else {
                uVar28 = uVar28 | 0x10;
              }
            }
            else if (iVar19 == 0x77) {
              uVar28 = uVar28 | 0x800;
            }
            goto LAB_82f7aabc;
          }
          iVar27 = (int)uVar26;
          switch(iVar19 + -0x41) {
          case 0:
          case 4:
          case 6:
            uStack_8b8 = 1;
            uVar32 = uVar32 + 0x20 & 0xffff;
          case 0x20:
          case 0x24:
          case 0x25:
          case 0x26:
            uVar29 = uVar15 - 0x8a0;
            lVar31 = 0x200;
            uVar30 = uVar29;
            lVar17 = lVar31;
            if (iVar27 < 0) {
              uVar26 = 6;
            }
            else if (iVar27 == 0) {
              if (uVar32 == 0x67) {
                uVar26 = 1;
              }
            }
            else {
              if (0x200 < iVar27) {
                uVar26 = 0x200;
              }
              if (0xa3 < (int)uVar26) {
                lVar17 = uVar26 + 0x15d;
                uVar30 = malloc(lVar17);
                iStack_8b0 = (int)uVar30;
                if ((uVar30 & 0xffffffff) == 0) {
                  uVar26 = 0xa3;
                  uVar30 = uVar29;
                  lVar17 = lVar31;
                }
              }
            }
            param_4 = (unsigned __int64 *)(((int)param_4 + 7U & 0xfffffff8) + 8);
            (*(int (**)())lbl_831BBFC0)
                      (uVar15 - 0x8a8,uVar30,lVar17,(char)uVar32,uVar26,uStack_8b8,
                       0xffffffff831bbca8);
            if ((bVar6) && ((int)uVar26 == 0)) {
              (*(int (**)())lbl_831BBFCC)(uVar30,0xffffffff831bbca8);
            }
            if ((uVar32 == 0x67) && (!bVar6)) {
              (*(int (**)())lbl_831BBFC8)(uVar30,0xffffffff831bbca8);
            }
            if (*(char *)uVar30 == '-') {
              bVar11 = true;
              uVar30 = uVar30 + 1;
            }
            bVar9 = true;
            uVar29 = uVar30;
            do {
              pcVar22 = (char *)uVar29;
              uVar29 = uVar29 + 1;
            } while (*pcVar22 != '\0');
            lVar17 = uVar29 - uVar30;
code_r0x82f7a4f8:
            uVar29 = lVar17 - 1U & 0xffffffff;
LAB_82f7a8fc:
            if (!bVar14) {
              if ((bVar9) && (((bVar11 || (bVar12)) || (bVar13)))) {
                lVar24 = 1;
              }
              lVar31 = (uVar23 - uVar29) - lVar24;
              iVar27 = (int)lVar31;
              lVar17 = lVar31;
              iVar19 = iVar27;
              if ((uVar28 & 0xc) == 0) {
                while (0 < iVar19) {
                  lVar17 = lVar17 + -1;
                  fn_82F7AB20(0x20,param_1,uVar15 - 0x8d0);
                  if (uStack_8d0 == 0xffffffff) break;
                  iVar19 = (int)lVar17;
                }
              }
              fn_82F7AB88(uVar15 - 0x8c8,lVar24,param_1,uVar15 - 0x8d0);
              if (((uVar28 & 8) != 0) && (lVar17 = lVar31, iVar19 = iVar27, (uVar28 & 4) == 0)) {
                while (0 < iVar19) {
                  lVar17 = lVar17 + -1;
                  fn_82F7AB20(0x30,param_1,uVar15 - 0x8d0);
                  if (uStack_8d0 == 0xffffffff) break;
                  iVar19 = (int)lVar17;
                }
              }
              if ((bVar4) || (uVar16 = uVar30, uVar32 = uVar29, (int)uVar29 < 1)) {
                fn_82F7AB88(uVar30,uVar29,param_1,uVar15 - 0x8d0);
              }
              else {
                do {
                  uVar32 = uVar32 - 1;
                  lVar17 = fn_82F85C08(uVar15 - 0x8c4,uVar16,
                                        *(unsigned int *)(lbl_831BBCA8 + 0xac),0xffffffff831bbca8)
                  ;
                  if (lVar17 < 1) {
                    uVar16 = 0xffffffffffffffff;
                    uStack_8d0 = 0xffffffff;
                    goto LAB_82f7aa60;
                  }
                  fn_82F7AB20(uStack_8c4,param_1,uVar15 - 0x8d0);
                  uVar16 = lVar17 + uVar16;
                } while (0 < (int)uVar32);
              }
              uVar16 = (unsigned __int64)uStack_8d0;
LAB_82f7aa60:
              if ((-1 < (int)uVar16) && ((uVar28 & 4) != 0)) {
                while (0 < iVar27) {
                  lVar31 = lVar31 + -1;
                  fn_82F7AB20(0x20,param_1,uVar15 - 0x8d0);
                  uVar16 = (unsigned __int64)uStack_8d0;
                  if (uStack_8d0 == 0xffffffff) break;
                  iVar27 = (int)lVar31;
                }
              }
            }
LAB_82f7aaa4:
            if (iStack_8b0 != 0) {
              free();
              iStack_8b0 = 0;
            }
LAB_82f7aabc:
            param_2 = puVar25;
            uVar32 = (unsigned __int64)*param_2;
            if (uVar32 == 0) {
              return uVar16;
            }
            break;
          default:
            goto LAB_82f7a8fc;
          case 2:
            if ((uVar28 & 0x830) == 0) {
              uVar28 = uVar28 | 0x20;
            }
          case 0x22:
            uVar29 = 1;
            uVar21 = (int)param_4 + 7U & 0xfffffff8;
            param_4 = (unsigned __int64 *)(uVar21 + 8);
            bVar4 = true;
            uStack_8c4 = (unsigned short)*(unsigned int *)(uVar21 + 4);
            if (((uVar28 & 0x20) != 0) &&
               (iVar19 = fn_82F85C08(uVar15 - 0x8a0,uVar15 - 0x8cc,
                                      *(unsigned int *)(lbl_831BBCA8 + 0xac),0xffffffff831bbca8),
               iVar19 < 0)) {
              bVar14 = true;
            }
            uVar30 = uVar15 - 0x8a0;
            goto LAB_82f7a8fc;
          case 0x12:
            if ((uVar28 & 0x830) == 0) {
              uVar28 = uVar28 | 0x20;
            }
          case 0x32:
            uVar32 = uVar26;
            if (iVar27 == -1) {
              uVar32 = 0x7fffffff;
            }
            uVar21 = (int)param_4 + 7U & 0xfffffff8;
            param_4 = (unsigned __int64 *)(uVar21 + 8);
            uVar30 = (unsigned __int64)*(unsigned int *)(uVar21 + 4);
            if ((uVar28 & 0x20) == 0) {
              if (uVar30 == 0) {
                uVar30 = (unsigned __int64)lbl_8216955C;
              }
              bVar4 = true;
              for (uVar29 = uVar30;
                  ((int)uVar32 != 0 && (uVar32 = uVar32 - 1, *(short *)uVar29 != 0));
                  uVar29 = uVar29 + 2) {
              }
              uVar29 = (unsigned __int64)((int)(short *)uVar29 - (int)uVar30 >> 1);
            }
            else {
              if (uVar30 == 0) {
                uVar30 = (unsigned __int64)lbl_82169558;
              }
              uVar29 = 0;
              uVar20 = uVar30;
              if (0 < (int)uVar32) {
                do {
                  if (*(char *)uVar20 == '\0') break;
                  iVar19 = fn_82F66FA8(*(char *)uVar20,0xffffffff831bbca8);
                  if (iVar19 != 0) {
                    uVar20 = uVar20 + 1;
                  }
                  uVar29 = uVar29 + 1;
                  uVar20 = uVar20 + 1;
                } while ((int)uVar29 < (int)uVar32);
              }
            }
            goto LAB_82f7a8fc;
          case 0x17:
            goto code_r0x82f7a75c;
          case 0x19:
            uVar21 = (int)param_4 + 7U & 0xfffffff8;
            param_4 = (unsigned __int64 *)(uVar21 + 8);
            puVar2 = *(unsigned short **)(uVar21 + 4);
            if ((puVar2 != (unsigned short *)0x0) &&
               (uVar30 = (unsigned __int64)*(unsigned int *)(puVar2 + 2), uVar30 != 0)) {
              if ((uVar28 & 0x800) == 0) {
                uVar29 = (unsigned __int64)(short)*puVar2;
                bVar4 = false;
              }
              else {
                uVar1 = *puVar2;
                bVar4 = true;
                uVar29 = (__int64)((int)(short)uVar1 >> 1) +
                         (unsigned __int64)((short)uVar1 < 0 && (uVar1 & 1) != 0);
              }
              goto LAB_82f7a8fc;
            }
            uVar30 = (unsigned __int64)lbl_82169558;
            uVar29 = uVar30;
            do {
              pcVar22 = (char *)uVar29;
              uVar29 = uVar29 + 1;
            } while (*pcVar22 != '\0');
            lVar17 = uVar29 - uVar30;
            goto code_r0x82f7a4f8;
          case 0x23:
          case 0x28:
            bVar9 = true;
          case 0x34:
            iVar19 = 10;
            goto code_r0x82f7a7a0;
          case 0x2d:
            uVar21 = (int)param_4 + 7U & 0xfffffff8;
            param_4 = (unsigned __int64 *)(uVar21 + 8);
            piVar3 = *(int **)(uVar21 + 4);
            iVar19 = fn_82F6E8A0();
            if (iVar19 != 0) {
              if ((uVar28 & 0x20) == 0) {
                *piVar3 = (int)uVar16;
              }
              else {
                *(short *)piVar3 = (short)uVar16;
              }
              bVar14 = true;
              goto LAB_82f7aaa4;
            }
            goto LAB_82f7a100;
          case 0x2e:
            iVar19 = 8;
            if (bVar6) {
              bVar10 = true;
            }
            goto code_r0x82f7a7a0;
          case 0x2f:
            uVar26 = 8;
            goto code_r0x82f7a75c;
          case 0x37:
            uStack_8bc = 0x27;
            goto code_r0x82f7a768;
          }
        }
      }
    }
  }
  return uVar16;
code_r0x82f7a75c:
  uStack_8bc = 7;
code_r0x82f7a768:
  iVar19 = 0x10;
  if (bVar6) {
    lVar24 = 2;
  }
code_r0x82f7a7a0:
  if ((bVar7) || (bVar8)) {
    puVar5 = (unsigned __int64 *)((int)param_4 + 7U & 0xfffffff8);
    param_4 = puVar5 + 1;
    uVar29 = *puVar5;
  }
  else if ((uVar28 & 0x20) == 0) {
    uVar21 = (int)param_4 + 7U & 0xfffffff8;
    param_4 = (unsigned __int64 *)(uVar21 + 8);
    if (bVar9) {
      uVar29 = (unsigned __int64)*(int *)(uVar21 + 4);
    }
    else {
      uVar29 = (unsigned __int64)*(unsigned int *)(uVar21 + 4);
    }
  }
  else {
    uVar21 = (int)param_4 + 7U & 0xfffffff8;
    param_4 = (unsigned __int64 *)(uVar21 + 8);
    uVar21 = *(unsigned int *)(uVar21 + 4);
    if (bVar9) {
      uVar29 = (unsigned __int64)(short)uVar21;
    }
    else {
      uVar29 = (unsigned __int64)uVar21 & 0xffff;
    }
  }
  if ((bVar9) && ((__int64)uVar29 < 0)) {
    uVar29 = -uVar29;
    bVar11 = true;
  }
  if ((!bVar7) && (!bVar8)) {
    uVar29 = uVar29 & 0xffffffff;
  }
  if ((int)uVar26 < 0) {
    uVar26 = 1;
  }
  else {
    uVar28 = uVar28 & 0xfffffff7;
    if (0x200 < (int)uVar26) {
      uVar26 = 0x200;
    }
  }
  if (uVar29 == 0) {
    lVar24 = 0;
  }
  uVar32 = uVar15 - 0x6a1;
  while( true ) {
    iVar27 = (int)uVar26;
    uVar26 = uVar26 - 1;
    if ((iVar27 < 1) && (uVar29 == 0)) break;
    uVar20 = (unsigned __int64)iVar19;
    trapDoubleWordImmediate(6,uVar20,0);
    uVar30 = uVar29 - (uVar29 / uVar20) * uVar20;
    uVar29 = uVar29 / uVar20;
    trapDoubleWordImmediate(6,uVar20,0);
    lVar17 = (uVar30 & 0xffffffff) + 0x30;
    if (0x39 < (int)lVar17) {
      lVar17 = lVar17 + (unsigned __int64)uStack_8bc;
    }
    *(unsigned char *)uVar32 = (char)lVar17;
    uVar32 = uVar32 - 1;
  }
  uVar29 = (uVar15 - 0x6a1) - uVar32;
  uVar30 = uVar32 + 1;
  if ((bVar10) && (((int)uVar29 == 0 || (*(char *)uVar30 != '0')))) {
    uVar29 = uVar29 + 1;
    *(unsigned char *)uVar32 = 0x30;
    uVar30 = uVar32;
  }
  goto LAB_82f7a8fc;
}

