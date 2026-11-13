typedef unsigned char bool;
#define true 1
#define false 0
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int *auStack_a8;
extern unsigned int *auStack_ca;
extern unsigned int *auStack_cc;
extern int fn_82A2A378();
extern int fn_82CE23E0();
extern int fn_82CE2410();
extern int fn_82CE2498();
extern int fn_82CE24E8();
extern int fn_82CE2888();
extern int fn_82CE2BA0();
extern int fn_82CE3460();
extern int fn_82CE35B0();
extern int fn_82CE3628();
extern int fn_82CE36A8();
extern int fn_82CE3730();
extern int fn_82CE37E0();
extern int fn_82CE3818();
extern int fn_82CE3870();
extern int fn_82CE38F0();
extern int fn_82CE38F8();
extern int fn_82CE3978();
extern int fn_82CE39C8();
extern int fn_82CE3A28();
extern int fn_82CE3B38();
extern int fn_82F64CE0();
extern unsigned int iStack_b0;
extern unsigned int iStack_c0;
extern unsigned int iStack_d0;
extern unsigned int uStack_ac;
extern unsigned int uStack_b2;
extern unsigned int uStack_bc;
extern unsigned int uStack_c4;
extern unsigned int uStack_d6;
extern unsigned int uStack_d8;
extern unsigned int uStack_da;
extern unsigned int uStack_dc;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

__int64 fn_82CE2C20(int param_1,unsigned __int64 param_2,unsigned int *param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned char bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  bool bVar8;
  __int64 lVar9;
  unsigned __int64 uVar10;
  unsigned short *puVar11;
  unsigned __int64 *puVar12;
  unsigned int uVar13;
  unsigned short uVar14;
  unsigned int uVar15;
  unsigned __int64 uVar16;
  unsigned __int64 uVar17;
  int iVar18;
  unsigned __int64 uVar19;
  unsigned __int64 uVar20;
  unsigned int *puStack00000024;
  unsigned char bStack_e0;
  unsigned char bStack_df;
  unsigned char abStack_de [2];
  unsigned short uStack_dc;
  unsigned short uStack_da;
  unsigned short uStack_d8;
  unsigned short uStack_d6;
  unsigned char abStack_d4 [4];
  int iStack_d0;
  unsigned char auStack_cc [2];
  unsigned char auStack_ca [2];
  unsigned int *puStack_c8;
  unsigned int uStack_c4;
  int iStack_c0;
  unsigned int uStack_bc;
  unsigned int *puStack_b8;
  unsigned char abStack_b4 [2];
  unsigned short uStack_b2;
  int iStack_b0;
  unsigned int uStack_ac;
  unsigned char auStack_a8 [168];
  
  uStack_d6 = 0;
  puStack_b8 = (unsigned int *)0x0;
  if (0xf < (param_2 & 0xffffffff)) {
    return -0x7fffbffb;
  }
  if (param_3 == (unsigned int *)0x0) {
    uVar17 = 0;
  }
  else {
    uVar17 = (unsigned __int64)*param_3;
  }
  uStack_ac = *(unsigned int *)(param_1 + 0x28);
  iVar18 = param_1 + 0x1c;
  puStack00000024 = param_3;
  lVar9 = fn_82CE23E0(iVar18,&bStack_df);
  if (lVar9 < 0) {
    return lVar9;
  }
  bVar4 = bStack_df >> 2 & 3;
  if (bVar4 == 0) {
LAB_82ce2ea8:
    lVar9 = -0x7fffbffb;
  }
  else {
    if (bVar4 == 1) {
      puVar11 = &uStack_da;
    }
    else {
      if (2 < bVar4) goto LAB_82ce2ea8;
      puVar11 = &uStack_d6;
    }
    lVar9 = fn_82CE3870(iVar18,puVar11);
    if (-1 < lVar9) {
      if ((bStack_df & 0x80) != 0) {
        lVar9 = fn_82CE2BA0(param_1,param_2,&puStack_b8,0);
        if (lVar9 < 0) {
          return lVar9;
        }
        uVar15 = *(unsigned int *)(param_1 + 0x14);
        uVar13 = *(unsigned int *)(param_1 + 8);
        *puStack_b8 = 4;
        uVar17 = *(unsigned __int64 *)(puStack_b8 + 2) & 0xffffffff;
        *(unsigned __int64 *)(puStack_b8 + 2) = (unsigned __int64)uVar15 + (unsigned __int64)uVar13 & 0xffffffff;
      }
      if (((bStack_df & 0x40) == 0) || (lVar9 = fn_82CE3870(iVar18,auStack_cc), -1 < lVar9)) {
        if ((bStack_df & 0x20) == 0) {
          uStack_bc = 1;
          abStack_d4[0] = 0;
        }
        else {
          uStack_bc = *(unsigned int *)(param_1 + 0x438);
          lVar9 = fn_82CE3A28(param_1 + 0x38,bStack_df,iVar18,abStack_d4,&uStack_bc);
          if (lVar9 < 0) {
            return lVar9;
          }
        }
        uVar15 = 0;
        if ((bStack_df & 0xc) == 8) {
          lVar9 = fn_82CE2498(iVar18,&uStack_dc,&iStack_d0);
          if (lVar9 < 0) {
            return lVar9;
          }
          lVar9 = fn_82CE3978(param_1 + 0x38,(((unsigned __int64)(uStack_dc) >> 0) & 0xFF) & 0x3f,&iStack_b0);
          if (lVar9 < 0) {
            return lVar9;
          }
          uVar16 = *(unsigned __int64 *)(iStack_b0 + 8) & 0xffffffff;
          if ((uStack_dc & 0x4000) != 0) {
            lVar9 = fn_82CE2888(*(unsigned int *)(param_1 + 0x30),(((unsigned __int64)(iStack_d0) >> 0) & 0xFFFF),&uStack_c4);
            if (lVar9 < 0) {
              return lVar9;
            }
            uVar16 = uVar16 & uStack_c4;
          }
          lVar9 = fn_82CE39C8(param_1 + 0x38,(((unsigned __int64)(uStack_dc) >> 0) & 0xFF) & 0x3f);
          if (lVar9 < 0) {
            return lVar9;
          }
        }
        else {
          uVar16 = 0;
          uStack_dc = 0;
        }
        uVar1 = *(unsigned int *)(param_1 + 0x28);
        if (uStack_bc != 0) {
          do {
            uVar14 = 0;
            bVar5 = false;
            bStack_e0 = bStack_e0 & 0xf3;
            do {
              if ((bStack_df & 0xc) == 8) {
                bVar6 = false;
                if (uVar14 < (uStack_dc & 0xff)) {
                  lVar9 = fn_82CE3818(iVar18,abStack_de);
                  if (lVar9 < 0) {
                    return lVar9;
                  }
                  uVar13 = 0;
                  uStack_c4 = 0;
                  bVar8 = false;
                  if (abStack_de[0] != 0) {
                    do {
                      bVar6 = bVar8;
                      lVar9 = fn_82CE3870(iVar18,&uStack_da);
                      if (lVar9 < 0) {
                        return lVar9;
                      }
                      lVar9 = fn_82CE2888(*(unsigned int *)(param_1 + 0x30),uStack_da,&uStack_c4);
                      if (lVar9 < 0) {
                        return lVar9;
                      }
                      if (uVar16 == uStack_c4) {
                        bVar6 = true;
                        bVar5 = true;
                      }
                      uVar13 = uVar13 + 1;
                      bVar8 = bVar6;
                    } while (uVar13 < abStack_de[0]);
                  }
                  lVar9 = fn_82CE3870(iVar18,&uStack_da);
                  if (lVar9 < 0) {
                    return lVar9;
                  }
                  if (bVar6) goto LAB_82ce2f74;
                  uStack_c4 = (unsigned int)uStack_da;
                  lVar9 = fn_82CE38F0(iVar18,auStack_a8,&uStack_c4);
                  if (lVar9 < 0) {
                    return lVar9;
                  }
                  uVar13 = (unsigned int)bStack_e0;
                }
                else {
                  lVar9 = fn_82CE23E0(iVar18,&bStack_e0);
                  if (lVar9 < 0) {
                    return lVar9;
                  }
                  uVar13 = (unsigned int)bStack_e0;
                  if (((uVar13 & 0xc) != 0xc) || ((!bVar5 && ((uStack_dc & 0x8000) != 0))))
                  goto LAB_82ce2ea8;
                }
              }
              else {
LAB_82ce2f74:
                uVar2 = *(unsigned int *)(param_1 + 0x28);
                lVar9 = fn_82CE23E0(iVar18,&bStack_e0);
                if (lVar9 < 0) {
                  return lVar9;
                }
                uVar13 = (unsigned int)bStack_e0;
                bVar4 = bStack_e0 >> 2 & 3;
                if (bVar4 == 0) {
                  iStack_d0 = 0;
                  bVar6 = false;
                  if ((bStack_e0 & 0x80) != 0) {
                    lVar9 = fn_82CE2BA0(param_1,param_2,&puStack_b8,&iStack_d0);
                    if (lVar9 < 0) {
                      return lVar9;
                    }
                    uVar13 = *(unsigned int *)(param_1 + 0x14);
                    uVar3 = *(unsigned int *)(param_1 + 8);
                    uVar17 = *(unsigned __int64 *)(puStack_b8 + 2);
                    *puStack_b8 = 4;
                    *(unsigned __int64 *)(puStack_b8 + 2) =
                         (unsigned __int64)uVar13 + (unsigned __int64)uVar3 & 0xffffffff;
                    uVar17 = uVar17 & 0xffffffff;
                    uVar13 = (unsigned int)bStack_e0;
                  }
                  iVar7 = iStack_d0;
                  if ((uVar13 & 0x40) != 0) {
                    lVar9 = fn_82CE3870(iVar18,auStack_ca);
                    if (lVar9 < 0) {
                      return lVar9;
                    }
                    uVar13 = (unsigned int)bStack_e0;
                  }
                  uVar3 = 1 << (uVar13 & 3);
                  uVar19 = (unsigned __int64)uVar3;
                  if ((uVar13 & 0x20) == 0) {
                    iStack_c0 = 1;
                    uStack_d8 = 0;
                    uVar10 = uVar17;
                    puStack_c8 = (unsigned int *)uVar17;
                  }
                  else {
                    iStack_c0 = *(int *)(param_1 + 0x438);
                    lVar9 = fn_82CE3A28(param_1 + 0x38,uVar13,iVar18,&uStack_d8,&iStack_c0);
                    if (lVar9 < 0) {
                      return lVar9;
                    }
                    if (((uStack_d8 & 0x8000) == 0) && ((bStack_e0 & 0x80) == 0)) {
                      bVar8 = true;
                      if ((uVar17 & 0xffffffff) == 0) {
                        uVar19 = 0;
                      }
                      else {
                        uVar19 = (unsigned __int64)*(unsigned int *)uVar17;
                      }
                    }
                    else {
                      bVar8 = false;
                      uVar19 = uVar17;
                    }
                    puStack_c8 = (unsigned int *)uVar19;
                    bVar6 = false;
                    if (((uStack_d8 & 0x4000) != 0) && (bVar6 = true, iStack_c0 == 0)) {
                      iStack_c0 = fn_82F64CE0();
                      iStack_c0 = iStack_c0 + 1;
                    }
                    lVar9 = fn_82CE39C8(param_1 + 0x38,(((unsigned __int64)(uStack_d8) >> 0) & 0xFF) & 0x3f);
                    if (lVar9 < 0) {
                      return lVar9;
                    }
                    uVar13 = (unsigned int)bStack_e0;
                    uVar10 = ZEXT48(puStack_c8);
                    if (bVar8) {
                      uVar19 = 4;
                    }
                    else {
                      uVar19 = (__int64)iStack_c0 * (__int64)(int)uVar3;
                    }
                  }
                  uVar20 = 0;
                  if (bVar6) {
                    uVar10 = fn_82A2A378(0xfde9,0,uVar10,iStack_c0,
                                               (unsigned __int64)*(unsigned int *)(param_1 + 8) +
                                               (unsigned __int64)*(unsigned int *)(param_1 + 0x14),
                                               (unsigned __int64)*(unsigned int *)(param_1 + 0x10) -
                                               (unsigned __int64)*(unsigned int *)(param_1 + 0x14),0,0);
                    lVar9 = fn_82CE37E0(param_1 + 8,uVar10);
                    if (lVar9 < 0) {
                      return lVar9;
                    }
                    lVar9 = fn_82CE3B38(param_1 + 0x38,(((unsigned __int64)(uStack_d8) >> 0) & 0xFF) & 0x3f,
                                            uVar10 & 0xffffffff,1);
                    goto LAB_82ce3290;
                  }
                  lVar9 = 0;
                  if ((uVar10 & 0xffffffff) != 0) {
                    uVar3 = uVar13 & 3;
                    puVar12 = (unsigned __int64 *)uVar10;
                    if (uVar3 == 0) {
                      uVar20 = (unsigned __int64)*(unsigned char *)puVar12;
                      if (iVar7 == 0) {
                        lVar9 = fn_82CE35B0(param_1 + 8);
                        goto LAB_82ce3290;
                      }
                    }
                    else if (uVar3 == 1) {
                      uVar20 = (unsigned __int64)*(unsigned short *)puVar12;
                      if (iVar7 == 0) {
                        lVar9 = fn_82CE3628(param_1 + 8);
                        goto LAB_82ce3290;
                      }
                    }
                    else if (uVar3 < 3) {
                      uVar20 = (unsigned __int64)*(unsigned int *)puVar12;
                      if (iVar7 == 0) {
                        lVar9 = fn_82CE36A8(param_1 + 8);
                        goto LAB_82ce3290;
                      }
                    }
                    else if ((uVar3 == 3) && (uVar20 = *puVar12, iVar7 == 0)) {
                      lVar9 = fn_82CE3730(param_1 + 8);
LAB_82ce3290:
                      if ((int)lVar9 < 0) {
                        return lVar9;
                      }
                      uVar13 = (unsigned int)bStack_e0;
                      uVar10 = ZEXT48(puStack_c8);
                    }
                  }
                  if ((bStack_df & 0xc) == 8) {
                    uVar19 = (unsigned __int64)uStack_d6;
                  }
                  if ((uVar10 & 0xffffffff) != 0) {
                    uVar17 = uVar19 + uVar17;
                  }
                  param_3 = puStack00000024;
                  if ((uVar13 & 0x10) != 0) {
                    lVar9 = fn_82CE2410(iVar18,abStack_b4);
                    if (lVar9 < 0) {
                      return lVar9;
                    }
                    lVar9 = fn_82CE2888(*(unsigned int *)(param_1 + 0x30),uStack_b2,&uStack_c4);
                    if (lVar9 < 0) {
                      return lVar9;
                    }
                    lVar9 = fn_82CE38F8(param_1 + 0x38,abStack_b4[0] & 0x3f,abStack_b4[0] >> 6,
                                            uVar20,uStack_c4,abStack_b4,
                                            ((unsigned __int64)*(unsigned int *)(param_1 + 0x14) +
                                            (unsigned __int64)*(unsigned int *)(param_1 + 8)) -
                                            (unsigned __int64)(unsigned int)(1 << (abStack_b4[0] >> 6)));
                    if (lVar9 < 0) {
                      return lVar9;
                    }
                    uVar13 = (unsigned int)bStack_e0;
                    param_3 = puStack00000024;
                  }
                }
                else if (bVar4 < 3) {
                  fn_82CE3460(iVar18,uVar2);
                  puStack_c8 = (unsigned int *)uVar17;
                  if (((bStack_e0 & 0x20) != 0) && ((bStack_e0 & 0x80) == 0)) {
                    if ((uVar17 & 0xffffffff) == 0) {
                      puStack_c8 = (unsigned int *)0x0;
                    }
                    else {
                      puStack_c8 = (unsigned int *)*puStack_c8;
                    }
                  }
                  lVar9 = fn_82CE2C20(param_1,param_2 + 1,&puStack_c8);
                  if (lVar9 < 0) {
                    return lVar9;
                  }
                  uVar13 = (unsigned int)bStack_e0;
                  if ((bStack_e0 & 0x20) == 0) {
                    if ((bStack_df & 0xc) == 8) {
                      uVar17 = uStack_d6 + uVar17;
                    }
                    else {
                      uVar17 = ZEXT48(puStack_c8);
                    }
                  }
                  else {
                    uVar17 = uVar17 + 4;
                  }
                }
                else if (bVar4 != 3) goto LAB_82ce2ea8;
              }
              if ((bStack_df & 0xc) == 8) {
                uVar14 = uVar14 + 1;
              }
            } while ((uVar13 & 0xc) != 0xc);
            uVar15 = uVar15 + 1;
          } while ((uVar15 < uStack_bc) && (fn_82CE3460(iVar18,uVar1), uVar15 < uStack_bc));
        }
        if ((((bStack_df & 0x20) == 0) ||
            (lVar9 = fn_82CE39C8(param_1 + 0x38,abStack_d4[0] & 0x3f), -1 < lVar9)) &&
           ((uStack_bc != 0 ||
            ((lVar9 = fn_82CE3460(iVar18,uStack_ac), -1 < lVar9 &&
             (lVar9 = fn_82CE24E8(iVar18,0), -1 < lVar9)))))) {
          *param_3 = (unsigned int)uVar17;
        }
      }
    }
  }
  return lVar9;
}

