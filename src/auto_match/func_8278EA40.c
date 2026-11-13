typedef unsigned char bool;
#define true 1
#define false 0
#define CONCAT11(h,l) ((unsigned short)((((unsigned char)(h)) << 8) | ((unsigned char)(l))))
#define CONCAT21(h,l) ((unsigned int)((((unsigned short)(h)) << 8) | ((unsigned char)(l))))
#define CONCAT31(h,l) ((unsigned int)((((unsigned int)(h)) << 8) | ((unsigned char)(l))))
extern unsigned int *auStack_80;
extern int fn_826E7800();
extern int fn_826E7990();
extern int fn_826E9188();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern int fn_82F6A7A0();
extern unsigned int lbl_8200571C;
extern unsigned int lbl_82015600;
extern unsigned int lbl_82015608;
extern unsigned int lbl_82054148;
extern unsigned int uStack_82;
extern unsigned int uStack_84;
extern unsigned int uStack_92;


void fn_8278EA40(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned char uVar1;
  unsigned char uVar2;
  unsigned char uVar3;
  unsigned char uVar4;
  unsigned char *pbVar5;
  bool bVar6;
  unsigned short uVar7;
  unsigned short uVar8;
  unsigned short uVar9;
  int iVar10;
  int iVar11;
  unsigned char bVar12;
  char cVar17;
  int iVar15;
  unsigned __int64 uVar13;
  unsigned char *puVar16;
  unsigned char bVar18;
  unsigned __int64 uVar14;
  unsigned char bVar19;
  unsigned __int64 uVar20;
  unsigned __int64 uVar21;
  double dVar22;
  double dVar23;
  unsigned __int64 uVar24;
  double dVar25;
  double dVar26;
  unsigned short uStack_92;
  unsigned char bStack_87;
  unsigned char bStack_86;
  unsigned char bStack_85;
  unsigned short uStack_84;
  unsigned short uStack_82;
  unsigned int auStack_80 [32];
  
  iVar10 = fn_82F6A548();
  *(unsigned char *)(iVar10 + 0x15) = 0;
  if (*(int *)(iVar10 + 0x30) - *(int *)(iVar10 + 0x2c) < 1) {
    fn_826E7990();
  }
  uVar20 = 0;
  bVar6 = false;
  cVar17 = *(char *)(*(int *)(iVar10 + 0x3c) + *(int *)(iVar10 + 0x2c));
  *(int *)(iVar10 + 0x2c) = *(int *)(iVar10 + 0x2c) + 1;
  if (cVar17 != '\0') {
    dVar23 = (double)lbl_8200571C;
    dVar25 = (double)lbl_82015608;
    dVar26 = (double)lbl_82054148;
    uVar21 = param_2;
    uVar24 = lbl_82015600;
    do {
      cVar17 = cVar17 + -1;
      *(unsigned char *)(iVar10 + 0x15) = 0;
      if (*(int *)(iVar10 + 0x30) - *(int *)(iVar10 + 0x2c) < 1) {
        fn_826E7990(iVar10);
      }
      iVar11 = *(int *)(iVar10 + 0x2c) + 1;
      bVar19 = *(unsigned char *)(*(int *)(iVar10 + 0x3c) + *(int *)(iVar10 + 0x2c));
      bStack_85 = 0x10;
      uStack_84 = 0;
      *(int *)(iVar10 + 0x2c) = iVar11;
      uStack_82 = 0;
      auStack_80[0] = 0;
      if (bVar19 < 8) {
        pbVar5 = (unsigned char *)uVar21;
        if (bVar19 == 1) {
          *(unsigned char *)(iVar10 + 0x15) = 0;
          if (*(int *)(iVar10 + 0x30) - iVar11 < 4) {
            fn_826E7800(iVar10,4);
          }
          iVar11 = *(int *)(iVar10 + 0x2c) + 4;
          iVar15 = *(int *)(iVar10 + 0x3c) + *(int *)(iVar10 + 0x2c);
          uVar1 = *(unsigned char *)(iVar15 + 1);
          uVar7 = CONCAT11(*(unsigned char *)(iVar15 + 3),*(unsigned char *)(iVar15 + 2));
          *(int *)(iVar10 + 0x2c) = iVar11;
          uVar13 = (unsigned __int64)uVar7;
          if (0xf < uVar13) {
            uVar13 = 0xf;
          }
          *(unsigned char *)(iVar10 + 0x15) = 0;
          bStack_87 = (unsigned char)(CONCAT21(uVar7,uVar1) >> 4) & 0xf | (unsigned char)(uVar13 << 4);
          if (*(int *)(iVar10 + 0x30) - iVar11 < 4) {
            fn_826E7800(iVar10,4);
          }
          iVar11 = *(int *)(iVar10 + 0x2c) + 4;
          iVar15 = *(int *)(iVar10 + 0x3c) + *(int *)(iVar10 + 0x2c);
          uVar1 = *(unsigned char *)(iVar15 + 1);
          uVar7 = CONCAT11(*(unsigned char *)(iVar15 + 3),*(unsigned char *)(iVar15 + 2));
          *(int *)(iVar10 + 0x2c) = iVar11;
          uVar13 = (unsigned __int64)uVar7;
          if (0xf < uVar13) {
            uVar13 = 0xf;
          }
          *(unsigned char *)(iVar10 + 0x15) = 0;
          bStack_86 = (unsigned char)(CONCAT21(uVar7,uVar1) >> 4) & 0xf | (unsigned char)(uVar13 << 4);
          if (*(int *)(iVar10 + 0x30) - iVar11 < 1) {
            fn_826E7990(iVar10);
          }
          bVar18 = *(unsigned char *)(*(int *)(iVar10 + 0x3c) + *(int *)(iVar10 + 0x2c));
          *(int *)(iVar10 + 0x2c) = *(int *)(iVar10 + 0x2c) + 1;
          bVar18 = -(8 < (bVar18 & 0xf8)) & 0x80;
LAB_8278ee4c:
          if (((!bVar6) && ((param_2 & 0xffffffff) != 0)) && ((uVar20 & 0xffffffff) < 4)) {
            *pbVar5 = bVar18 | bVar19;
            pbVar5[1] = bStack_87;
            pbVar5[2] = bStack_86;
            pbVar5[3] = bStack_85;
            *(unsigned short *)(pbVar5 + 4) = uStack_84;
            *(unsigned short *)(pbVar5 + 6) = uStack_82;
LAB_8278ee94:
            uVar21 = uVar21 + 0xc;
            uVar20 = uVar20 + 1;
            *(unsigned int *)(pbVar5 + 8) = auStack_80[0];
          }
        }
        else if (bVar19 == 2) {
          fn_826E9188(iVar10,auStack_80);
          *(unsigned char *)(iVar10 + 0x15) = 0;
          if (*(int *)(iVar10 + 0x30) - *(int *)(iVar10 + 0x2c) < 4) {
            fn_826E7800(iVar10,4);
          }
          iVar11 = *(int *)(iVar10 + 0x2c) + 4;
          iVar15 = *(int *)(iVar10 + 0x3c) + *(int *)(iVar10 + 0x2c);
          uVar1 = *(unsigned char *)(iVar15 + 1);
          uVar7 = CONCAT11(*(unsigned char *)(iVar15 + 3),*(unsigned char *)(iVar15 + 2));
          *(int *)(iVar10 + 0x2c) = iVar11;
          uVar13 = (unsigned __int64)uVar7;
          if (0xf < uVar13) {
            uVar13 = 0xf;
          }
          *(unsigned char *)(iVar10 + 0x15) = 0;
          if (*(int *)(iVar10 + 0x30) - iVar11 < 4) {
            fn_826E7800(iVar10,4);
          }
          iVar11 = *(int *)(iVar10 + 0x2c) + 4;
          iVar15 = *(int *)(iVar10 + 0x3c) + *(int *)(iVar10 + 0x2c);
          uVar2 = *(unsigned char *)(iVar15 + 1);
          uVar8 = CONCAT11(*(unsigned char *)(iVar15 + 3),*(unsigned char *)(iVar15 + 2));
          *(int *)(iVar10 + 0x2c) = iVar11;
          uVar14 = (unsigned __int64)uVar8;
          if (0xf < uVar14) {
            uVar14 = 0xf;
          }
          *(unsigned char *)(iVar10 + 0x15) = 0;
          if (*(int *)(iVar10 + 0x30) - iVar11 < 2) {
            fn_826E7800(iVar10,2);
          }
          iVar11 = *(int *)(iVar10 + 0x2c) + 2;
          puVar16 = (unsigned char *)(*(int *)(iVar10 + 0x3c) + *(int *)(iVar10 + 0x2c));
          bVar19 = puVar16[1];
          uVar3 = *puVar16;
          *(int *)(iVar10 + 0x2c) = iVar11;
          uVar9 = CONCAT11(bVar19,uVar3);
          if (0xf < bVar19) {
            bVar19 = 0xf;
          }
          *(unsigned char *)(iVar10 + 0x15) = 0;
          if (*(int *)(iVar10 + 0x30) - iVar11 < 1) {
            fn_826E7990(iVar10);
          }
          bVar12 = 0;
          bVar18 = *(unsigned char *)(*(int *)(iVar10 + 0x3c) + *(int *)(iVar10 + 0x2c));
          *(int *)(iVar10 + 0x2c) = *(int *)(iVar10 + 0x2c) + 1;
          if ((bVar18 & 0x40) != 0) {
            bVar12 = 0x20;
          }
          if ((bVar18 & 0x20) == 0) {
            bVar12 = bVar12 | 0x40;
          }
          if (1 < (bVar18 & 0xf)) {
            bVar12 = bVar12 | 0x80;
          }
          if (((!bVar6) && ((param_2 & 0xffffffff) != 0)) && ((uVar20 & 0xffffffff) < 4)) {
            *pbVar5 = bVar12 | 2;
            pbVar5[4] = 0;
            pbVar5[5] = 0;
            pbVar5[1] = (unsigned char)(CONCAT21(uVar7,uVar1) >> 4) & 0xf | (unsigned char)(uVar13 << 4);
            pbVar5[2] = (unsigned char)(CONCAT21(uVar8,uVar2) >> 4) & 0xf | (unsigned char)(uVar14 << 4);
            pbVar5[3] = bVar19 << 4 | (unsigned char)(uVar9 >> 4) & 0xf;
            pbVar5[6] = 0;
            pbVar5[7] = 0;
            goto LAB_8278ee94;
          }
        }
        else {
          if (bVar19 == 3) {
            iVar15 = 0x1b;
            goto LAB_8278f228;
          }
          if (bVar19 == 4) {
LAB_8278f300:
            *(unsigned char *)(iVar10 + 0x15) = 0;
            if (*(int *)(iVar10 + 0x30) - iVar11 < 1) {
              fn_826E7990(iVar10);
            }
            iVar11 = *(int *)(iVar10 + 0x2c) + 1;
            iVar15 = (unsigned int)*(unsigned char *)(*(int *)(iVar10 + 0x3c) + *(int *)(iVar10 + 0x2c)) * 5 + 0x13;
          }
          else {
            if (bVar19 != 5) {
              if (bVar19 == 6) {
                iVar15 = 0x50;
                goto LAB_8278f228;
              }
              if (bVar19 == 0) {
                fn_826E9188(iVar10,auStack_80);
                *(unsigned char *)(iVar10 + 0x15) = 0;
                if (*(int *)(iVar10 + 0x30) - *(int *)(iVar10 + 0x2c) < 4) {
                  fn_826E7800(iVar10,4);
                }
                iVar11 = *(int *)(iVar10 + 0x2c) + 4;
                iVar15 = *(int *)(iVar10 + 0x3c) + *(int *)(iVar10 + 0x2c);
                uVar1 = *(unsigned char *)(iVar15 + 1);
                uVar7 = CONCAT11(*(unsigned char *)(iVar15 + 3),*(unsigned char *)(iVar15 + 2));
                *(int *)(iVar10 + 0x2c) = iVar11;
                uVar13 = (unsigned __int64)uVar7;
                if (0xf < uVar13) {
                  uVar13 = 0xf;
                }
                *(unsigned char *)(iVar10 + 0x15) = 0;
                bStack_87 = (unsigned char)(CONCAT21(uVar7,uVar1) >> 4) & 0xf | (unsigned char)(uVar13 << 4);
                if (*(int *)(iVar10 + 0x30) - iVar11 < 4) {
                  fn_826E7800(iVar10,4);
                }
                iVar11 = *(int *)(iVar10 + 0x2c) + 4;
                iVar15 = *(int *)(iVar10 + 0x3c) + *(int *)(iVar10 + 0x2c);
                uVar1 = *(unsigned char *)(iVar15 + 1);
                uVar7 = CONCAT11(*(unsigned char *)(iVar15 + 3),*(unsigned char *)(iVar15 + 2));
                *(int *)(iVar10 + 0x2c) = iVar11;
                uVar13 = (unsigned __int64)uVar7;
                if (0xf < uVar13) {
                  uVar13 = 0xf;
                }
                *(unsigned char *)(iVar10 + 0x15) = 0;
                bStack_86 = (unsigned char)(CONCAT21(uVar7,uVar1) >> 4) & 0xf | (unsigned char)(uVar13 << 4);
                if (*(int *)(iVar10 + 0x30) - iVar11 < 4) {
                  fn_826E7800(iVar10,4);
                }
                puVar16 = (unsigned char *)(*(int *)(iVar10 + 0x3c) + *(int *)(iVar10 + 0x2c));
                uVar1 = puVar16[3];
                uVar2 = puVar16[2];
                uVar3 = puVar16[1];
                uVar4 = *puVar16;
                *(int *)(iVar10 + 0x2c) = *(int *)(iVar10 + 0x2c) + 4;
                dVar22 = (double)fn_82F6A7A0((double)(float)((double)(float)((double)(__int64)
                                                                                      CONCAT31(
                                                  CONCAT21(CONCAT11(uVar1,uVar2),uVar3),uVar4) *
                                                  dVar26) * dVar25),uVar24);
                uStack_92 = (unsigned short)(int)dVar22;
                uStack_84 = uStack_92;
                *(unsigned char *)(iVar10 + 0x15) = 0;
                if (*(int *)(iVar10 + 0x30) - *(int *)(iVar10 + 0x2c) < 4) {
                  fn_826E7800(iVar10,4);
                }
                iVar11 = *(int *)(iVar10 + 0x2c) + 4;
                puVar16 = (unsigned char *)(*(int *)(iVar10 + 0x3c) + *(int *)(iVar10 + 0x2c));
                uVar1 = puVar16[3];
                uVar2 = puVar16[2];
                uVar3 = puVar16[1];
                uVar4 = *puVar16;
                *(int *)(iVar10 + 0x2c) = iVar11;
                *(unsigned char *)(iVar10 + 0x15) = 0;
                uStack_92 = (unsigned short)
                            (int)((double)(float)((double)(__int64)
                                                          CONCAT31(CONCAT21(CONCAT11(uVar1,uVar2),
                                                                            uVar3),uVar4) * dVar26)
                                 * dVar23);
                uStack_82 = uStack_92;
                if (*(int *)(iVar10 + 0x30) - iVar11 < 2) {
                  fn_826E7800(iVar10,2);
                }
                iVar11 = *(int *)(iVar10 + 0x2c) + 2;
                puVar16 = (unsigned char *)(*(int *)(iVar10 + 0x3c) + *(int *)(iVar10 + 0x2c));
                bVar18 = puVar16[1];
                uVar1 = *puVar16;
                *(int *)(iVar10 + 0x2c) = iVar11;
                uVar7 = CONCAT11(bVar18,uVar1);
                if (0xf < bVar18) {
                  bVar18 = 0xf;
                }
                *(unsigned char *)(iVar10 + 0x15) = 0;
                bStack_85 = bVar18 << 4 | (unsigned char)(uVar7 >> 4) & 0xf;
                if (*(int *)(iVar10 + 0x30) - iVar11 < 1) {
                  fn_826E7990(iVar10);
                }
                bVar18 = 0;
                bVar12 = *(unsigned char *)(*(int *)(iVar10 + 0x3c) + *(int *)(iVar10 + 0x2c));
                *(int *)(iVar10 + 0x2c) = *(int *)(iVar10 + 0x2c) + 1;
                if ((bVar12 & 0x40) != 0) {
                  bVar18 = 0x20;
                }
                if ((bVar12 & 0x20) == 0) {
                  bVar18 = bVar18 | 0x40;
                }
                if (1 < (bVar12 & 0xf)) {
                  bVar18 = bVar18 | 0x80;
                }
                goto LAB_8278ee4c;
              }
              goto LAB_8278f300;
            }
            *(unsigned char *)(iVar10 + 0x15) = 0;
            if (*(int *)(iVar10 + 0x30) - iVar11 < 1) {
              fn_826E7990(iVar10);
            }
            iVar11 = *(int *)(iVar10 + 0x2c) + 1;
            bVar19 = *(unsigned char *)(*(int *)(iVar10 + 0x3c) + *(int *)(iVar10 + 0x2c));
            *(int *)(iVar10 + 0x2c) = iVar11;
            *(unsigned char *)(iVar10 + 0x15) = 0;
            if (*(int *)(iVar10 + 0x30) - iVar11 < 1) {
              fn_826E7990(iVar10);
            }
            iVar11 = *(int *)(iVar10 + 0x2c) + 1;
            iVar15 = (unsigned int)*(unsigned char *)(*(int *)(iVar10 + 0x3c) + *(int *)(iVar10 + 0x2c)) *
                     (unsigned int)bVar19 * 4 + 0xd;
          }
          while (*(int *)(iVar10 + 0x2c) = iVar11, iVar15 != 0) {
LAB_8278f228:
            iVar15 = iVar15 + -1;
            *(unsigned char *)(iVar10 + 0x15) = 0;
            if (*(int *)(iVar10 + 0x30) - iVar11 < 1) {
              fn_826E7990(iVar10);
            }
            iVar11 = *(int *)(iVar10 + 0x2c) + 1;
          }
        }
      }
      if ((!bVar6) && ((uVar20 & 0xffffffff) == (param_3 & 0xffffffff))) {
        bVar6 = true;
      }
    } while (cVar17 != '\0');
  }
  fn_82F6A594(uVar20);
  return;
}

