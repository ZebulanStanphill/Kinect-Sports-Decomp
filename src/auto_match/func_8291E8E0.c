typedef unsigned char bool;
#define true 1
#define false 0
#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_8291E860();
extern int fn_82F68CC0();
extern int fn_82F691F0();
extern unsigned int lbl_28280086;
extern unsigned int uStack_a2;
extern unsigned int uStack_a4;
extern unsigned int uStack_ab;
extern unsigned int uStack_ad;


unsigned __int64 fn_8291E8E0(unsigned int *param_1,__int64 param_2,unsigned __int64 param_3)

{
  int iVar1;
  unsigned char bVar2;
  bool bVar3;
  bool bVar4;
  unsigned short *puVar5;
  int iVar6;
  unsigned short *puVar7;
  unsigned short *puVar8;
  unsigned __int64 uVar9;
  unsigned __int64 uVar10;
  unsigned __int64 uVar11;
  unsigned short *puVar12;
  unsigned int uVar13;
  unsigned int uVar14;
  unsigned int uVar15;
  unsigned int uVar16;
  unsigned __int64 uVar17;
  unsigned int uVar18;
  unsigned char *puVar19;
  unsigned __int64 uVar20;
  unsigned int uVar21;
  unsigned char bVar22;
  __int64 lVar23;
  unsigned int uVar24;
  unsigned char bStack_b0;
  unsigned char bStack_af;
  unsigned char bStack_ae;
  unsigned short uStack_ad;
  unsigned short uStack_ab;
  unsigned char bStack_a9;
  unsigned short uStack_a4;
  unsigned short uStack_a2;
  unsigned char bStack_a0;
  unsigned char bStack_9f;
  
  bVar3 = false;
  bVar4 = false;
  if ((param_3 & 0xffffffff) < 0x12) {
    return 0xffffffff80004005;
  }
  fn_82F68CC0(&bStack_b0,param_2,0x12);
  fn_8291E860(&bStack_b0,&bStack_b0);
  if ((bStack_af & 0xfe) != 0) {
    return 0xffffffff80004005;
  }
  if ((bStack_ae & 0xf4) != 0) {
    return 0xffffffff80004005;
  }
  uVar15 = (unsigned int)uStack_a4;
  if (uVar15 == 0) {
    return 0xffffffff80004005;
  }
  if (uStack_a2 == 0) {
    return 0xffffffff80004005;
  }
  uVar9 = (unsigned __int64)bStack_a9;
  if ((((bStack_af != 0) && (uVar9 != 0xf)) && (uVar9 != 0x10)) &&
     ((uVar9 != 0x18 && (uVar9 != 0x20)))) {
    return 0xffffffff80004005;
  }
  bVar2 = bStack_ae & 3;
  if (bVar2 == 1) {
    if (bStack_af == 0) {
      return 0xffffffff80004005;
    }
    if (bStack_a0 != 8) {
      return 0xffffffff80004005;
    }
    bVar3 = true;
    bVar4 = true;
    uVar10 = 8;
    puVar19 = (unsigned char *)0x18280086;
  }
  else if (bVar2 == 2) {
    uVar10 = (unsigned __int64)bStack_a0;
    puVar19 = (unsigned char *)0x28280043;
    if (uVar10 != 0xf) {
      if (uVar10 == 0x10) {
        puVar19 = (unsigned char *)0x18280043;
      }
      else if (uVar10 == 0x18) {
        puVar19 = &lbl_28280086;
      }
      else {
        puVar19 = (unsigned char *)0x18280086;
        bVar3 = false;
        if (uVar10 != 0x20) {
          return 0xffffffff80004005;
        }
      }
    }
  }
  else {
    if (bVar2 != 3) {
      return 0xffffffff80004005;
    }
    if (bStack_a0 != 8) {
      return 0xffffffff80004005;
    }
    uVar10 = 8;
    puVar19 = (unsigned char *)0x28000002;
  }
  uVar10 = uVar10 + 7 >> 3;
  if ((bVar3) || (uVar17 = uVar10, uVar10 == 3)) {
    uVar17 = 4;
  }
  uVar11 = (unsigned __int64)bStack_b0;
  bVar2 = bStack_9f >> 5;
  uVar14 = ~(unsigned int)bStack_9f >> 4 & 1;
  if ((param_3 - 0x12 & 0xffffffff) < uVar11) {
    return 0xffffffff80004005;
  }
  uVar20 = (param_3 - 0x12) - uVar11;
  uVar9 = (__int64)(int)(unsigned int)uStack_ab * (__int64)(int)(uVar9 + 7 >> 3);
  if ((uVar20 & 0xffffffff) < uVar9) {
    return 0xffffffff80004005;
  }
  if ((param_1[0x10] != 0) && (bVar4)) {
    if (0x100 < (unsigned int)uStack_ad + (unsigned int)uStack_ab) {
      return 0xffffffff80004005;
    }
    uVar9 = fn_8265C940(0x400,0x24810000);
    param_1[2] = (int)uVar9;
    if ((uVar9 & 0xffffffff) == 0) {
      return 0xffffffff8007000e;
    }
    param_1[0xf] = 1;
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(uVar9,0xff,0x400);
  }
  *param_1 = puVar19;
  uVar20 = uVar20 - uVar9;
  lVar23 = uVar9 + uVar11 + param_2 + 0x12;
  param_1[3] = (unsigned int)uStack_a4;
  param_1[1] = (int)lVar23;
  uVar13 = (unsigned int)uStack_a2;
  param_1[4] = uVar13;
  param_1[5] = 1;
  uVar16 = (unsigned int)uStack_a4;
  param_1[0xc] = uVar16 * (int)uVar17;
  uVar9 = (__int64)(int)((unsigned int)uStack_a2 * (unsigned int)uStack_a4) * (__int64)(int)uVar17;
  param_1[0xd] = 0;
  if (param_1[0x10] == 0) goto LAB_8291efa4;
  if ((((bVar4) || ((bStack_ae & 8) != 0)) || ((bVar2 & 1) == 0)) ||
     ((uVar14 == 0 || (uVar10 == 3)))) {
    uVar9 = fn_8265C940(uVar9,0x24810000);
    param_1[1] = (int)uVar9;
    if ((uVar9 & 0xffffffff) == 0) {
      return 0xffffffff8007000e;
    }
    param_1[0xe] = 1;
    if ((bVar2 & 1) == 0) {
      uVar9 = (__int64)(int)(uStack_a2 - 1) * (__int64)(int)param_1[0xc] + uVar9;
    }
    uVar18 = 0;
    if (uVar13 != 0) {
      do {
        uVar21 = 0;
        uVar11 = uVar9;
        if (uVar14 == 0) {
          uVar11 = ((unsigned int)param_1[0xc] - uVar17) + uVar9;
        }
        if (uVar16 != 0) {
          do {
            if ((bStack_ae & 8) == 0) {
              bVar22 = 0;
              uVar24 = uVar15;
            }
            else {
              if ((uVar20 & 0xffffffff) == 0) {
                return 0xffffffff80004005;
              }
              bVar22 = *(unsigned char *)lVar23 & 0x80;
              uVar24 = (*(unsigned char *)lVar23 & 0x7f) + 1;
              if (uVar15 - uVar21 <= uVar24) {
                uVar24 = uVar15 - uVar21;
              }
              lVar23 = lVar23 + 1;
              uVar20 = uVar20 - 1;
            }
            uVar21 = uVar24 + uVar21;
            while (uVar24 != 0) {
              uVar24 = uVar24 - 1;
              if ((uVar20 & 0xffffffff) < uVar10) {
                return 0xffffffff80004005;
              }
              puVar19 = (unsigned char *)uVar11;
              if (bVar4) {
                iVar1 = (unsigned int)*(unsigned char *)lVar23 * 4;
                iVar6 = iVar1 + param_1[2];
                *puVar19 = *(unsigned char *)(iVar1 + param_1[2]);
                puVar19[1] = *(unsigned char *)(iVar6 + 1);
                puVar19[2] = *(unsigned char *)(iVar6 + 2);
                puVar19[3] = *(unsigned char *)(iVar6 + 3);
              }
              else {
                fn_82F68CC0(uVar11,lVar23,uVar10);
                if (uVar10 == 3) {
                  puVar19[3] = 0xff;
                }
              }
              if (bVar22 == 0) {
                lVar23 = uVar10 + lVar23;
                uVar20 = uVar20 - uVar10;
              }
              if (uVar14 == 0) {
                uVar11 = uVar11 - uVar17;
              }
              else {
                uVar11 = uVar11 + uVar17;
              }
            }
            if (bVar22 != 0) {
              lVar23 = uVar10 + lVar23;
              uVar20 = uVar20 - uVar10;
            }
          } while (uVar21 < uVar16);
        }
        uVar11 = (unsigned __int64)(unsigned int)param_1[0xc];
        if ((bVar2 & 1) == 0) {
          uVar11 = -uVar11;
        }
        uVar9 = uVar11 + uVar9;
        uVar18 = uVar18 + 1;
      } while (uVar18 < uVar13);
    }
  }
  else {
    if ((uVar20 & 0xffffffff) < (uVar9 & 0xffffffff)) {
      return 0xffffffff80004005;
    }
    param_1[1] = (int)lVar23;
    param_1[0xe] = 0;
  }
  uVar9 = (CONCAT44(*param_1,*param_1) & 0xfffffffffffffe3f) - 0x18280003;
  if (uVar9 == 0) {
    puVar12 = (unsigned short *)param_1[1];
    puVar5 = (unsigned short *)(param_1[0xc] * param_1[4] + (int)puVar12);
    if (puVar12 < puVar5) {
      do {
        puVar7 = puVar12 + param_1[3];
        puVar8 = puVar12;
        if (puVar12 < puVar7) {
          do {
            if ((*puVar8 & 0x80) != 0) break;
            puVar8 = puVar8 + 1;
          } while (puVar8 < puVar7);
          if (puVar8 < puVar7) break;
        }
        puVar12 = (unsigned short *)(param_1[0xc] + (int)puVar12);
      } while (puVar12 < puVar5);
    }
    if (puVar12 != puVar5) goto LAB_8291efa4;
    puVar19 = (unsigned char *)0x28280043;
  }
  else {
    if ((uVar9 & 0xffffffff) != 3) goto LAB_8291efa4;
    uVar15 = param_1[1];
    uVar14 = param_1[0xc] * param_1[4] + uVar15;
    if (uVar15 < uVar14) {
      do {
        uVar16 = uVar15 + param_1[3] * 4;
        uVar13 = uVar15;
        if (uVar15 < uVar16) {
          do {
            if (*(char *)(uVar13 + 3) != '\0') break;
            uVar13 = uVar13 + 4;
          } while (uVar13 < uVar16);
          if (uVar13 < uVar16) break;
        }
        uVar15 = param_1[0xc] + uVar15;
      } while (uVar15 < uVar14);
    }
    if (uVar15 != uVar14) goto LAB_8291efa4;
    puVar19 = &lbl_28280086;
  }
  *param_1 = puVar19;
LAB_8291efa4:
  if (bVar4) {
    if (param_1[2] != 0) {
      fn_8265C990(param_1[2],0x24810000);
      param_1[2] = 0;
    }
    param_1[0xf] = 0;
  }
  return 0;
}

