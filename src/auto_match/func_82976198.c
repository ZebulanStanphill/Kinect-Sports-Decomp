extern int fn_8265C940();
extern int fn_829632F0();
extern int fn_829640A0();
extern int fn_82964588();
extern int fn_82964628();
extern int fn_829646C8();
extern int fn_829655B8();
extern int fn_82969030();
extern int fn_829690E8();
extern int fn_829693C0();
extern int fn_8296CF68();
extern int fn_8296DD28();
extern int fn_8296E438();
extern int fn_82971580();
extern int fn_82971768();
extern int fn_829A9A18();
extern unsigned int lbl_82005710;
extern unsigned int lbl_8201261C;


unsigned __int64 fn_82976198(int param_1)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  unsigned __int64 uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  unsigned int uVar13;
  int iVar14;
  unsigned __int64 uVar15;
  unsigned __int64 uVar16;
  unsigned __int64 uVar17;
  unsigned __int64 uVar18;
  unsigned int uVar19;
  unsigned __int64 uVar20;
  unsigned int uVar21;
  unsigned int uVar22;
  int iVar23;
  unsigned int uVar24;
  __int64 lVar25;
  unsigned __int64 uVar26;
  __int64 lVar27;
  unsigned __int64 uVar28;
  
  if (((*(unsigned int *)(param_1 + 0xcc) & 0x100) == 0) && ((*(unsigned int *)(param_1 + 0xcc) & 4) == 0)) {
    uVar8 = fn_82971768(param_1);
    if (-1 < (int)uVar8) {
      uVar9 = fn_8265C940(0x200,0x24810000);
      if ((uVar9 & 0xffffffff) == 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = fn_829A9A18(uVar9,*(unsigned int *)(param_1 + 0xe0));
      }
      *(int *)(param_1 + 0xe4) = (int)uVar9;
      if ((uVar9 & 0xffffffff) == 0) {
LAB_82976850:
        uVar8 = 0xffffffff8007000e;
      }
      else {
        uVar8 = fn_8296DD28(uVar9,param_1,0x46580201,*(unsigned int *)(param_1 + 0xcc) | 0x100);
        if (((-1 < (int)uVar8) &&
            (uVar8 = fn_829690E8(*(unsigned int *)(param_1 + 0xe4)), -1 < (int)uVar8)) &&
           (uVar8 = fn_829693C0(param_1), -1 < (int)uVar8)) {
          uVar22 = 0;
          if (*(int *)(param_1 + 8) != 0) {
            iVar23 = 0;
            do {
              uVar22 = uVar22 + 1;
              *(unsigned int *)(*(int *)(*(int *)(param_1 + 0x14) + iVar23) + 0x30) = 0xffffffff;
              piVar5 = (int *)(*(int *)(param_1 + 0x14) + iVar23);
              iVar23 = iVar23 + 4;
              *(unsigned int *)(*piVar5 + 0x44) = 0xffffffff;
            } while (uVar22 < *(unsigned int *)(param_1 + 8));
          }
          uVar9 = 0xffffffffffffffff;
          lVar25 = 0;
          uVar22 = 0;
          uVar8 = lbl_82005710;
          if (*(int *)(param_1 + 0xc) != 0) {
            iVar23 = 0;
            do {
              puVar2 = *(unsigned int **)(iVar23 + *(int *)(param_1 + 0x18));
              uVar21 = *puVar2;
              if ((uVar21 & 0xfff00000) != 0) {
                uVar1 = puVar2[1];
                uVar7 = (unsigned __int64)uVar21 & 0xfffff;
                uVar26 = 0;
                trapWord(6,uVar7,0);
                if ((int)(uVar1 / uVar7) != 0) {
                  lVar27 = 0;
                  do {
                    uVar28 = 0;
                    uVar20 = 0;
                    if ((uVar21 & 0xfffff) != 0) {
                      uVar18 = (unsigned __int64)puVar2[2];
                      uVar16 = (unsigned __int64)*(unsigned int *)(param_1 + 0x14);
                      uVar15 = (unsigned __int64)*(unsigned int *)(param_1 + 0x10);
                      do {
                        if (((*(unsigned int *)(*(int *)(*(int *)(*(int *)(*(int *)((int)((lVar27 + uVar20 &
                                                                                  0xffffffff) << 2)
                                                                           + (int)uVar18) * 4 +
                                                                  (int)uVar16) + 4) * 4 +
                                                (int)uVar15) + 4) & 2) != 0) &&
                           (iVar10 = fn_829655B8(param_1), iVar10 == 0)) {
                          uVar28 = uVar28 + 1;
                        }
                        uVar20 = uVar20 + 1;
                      } while ((uVar20 & 0xffffffff) < uVar7);
                      if ((uVar28 & 0xffffffff) != 0) {
                        if ((((int)uVar9 == -1) &&
                            (uVar9 = fn_82964588(param_1,&lbl_8201261C,0x80251,
                                                       0xffffffffffffffff,4), (int)uVar9 == -1)) ||
                           (iVar10 = fn_829646C8(*(unsigned int *)(param_1 + 0xe4),
                                                       uVar28 & 0xffffffff000fffff | 0x10000000,
                                                       uVar28,uVar28), iVar10 == -1))
                        goto LAB_82976850;
                        puVar3 = *(unsigned int **)(iVar10 * 4 + *(int *)(*(int *)(param_1 + 0xe4) + 0x18));
                        fn_829632F0(puVar3,puVar2);
                        uVar28 = 0;
                        uVar17 = 0;
                        uVar20 = 0;
                        iVar10 = 0;
                        do {
                          uVar19 = puVar2[2];
                          iVar6 = (int)((lVar27 + uVar20 & 0x3fffffff) << 2);
                          iVar4 = *(int *)(iVar6 + uVar19);
                          iVar14 = iVar4 * 4;
                          iVar12 = *(int *)(iVar14 + *(int *)(param_1 + 0x14));
                          if ((((*(unsigned int *)(*(int *)(*(int *)(iVar12 + 4) * 4 +
                                                   *(int *)(param_1 + 0x10)) + 4) & 2) != 0) &&
                              (iVar11 = fn_829655B8(param_1,iVar4), iVar11 == 0)) &&
                             ((*(int *)(iVar12 + 0x48) == -1 ||
                              ((**(unsigned int **)(*(int *)(iVar12 + 0x48) * 4 + *(int *)(param_1 + 0x18))
                               & 0xfff00000) != 0x10100000)))) {
                            if (*(int *)(iVar12 + 0x30) == -1) {
                              iVar12 = fn_82964628(uVar8,*(int *)(param_1 + 0xe4),
                                                         *(unsigned int *)
                                                          (*(int *)(param_1 + 0xe4) + 0x84),lVar25,
                                                         uVar28);
                              if (iVar12 == -1) goto LAB_82976850;
                              *(int *)(puVar3[4] + iVar10) = iVar12;
                              *(int *)(puVar3[2] + iVar10) = iVar4;
                              uVar13 = fn_82964628(uVar8,param_1,uVar9,lVar25,uVar28);
                              *(unsigned int *)(iVar6 + puVar2[2]) = uVar13;
                              if (*(int *)(iVar6 + puVar2[2]) == -1) goto LAB_82976850;
                              iVar4 = *(int *)(*(int *)(iVar6 + puVar2[2]) * 4 +
                                              *(int *)(param_1 + 0x14));
                              fn_829640A0(iVar4,*(unsigned int *)(iVar14 + *(int *)(param_1 + 0x14)))
                              ;
                              *(int *)(iVar4 + 0x44) = iVar12;
                              uVar28 = uVar28 + 1;
                              *(unsigned int *)(iVar4 + 100) = 0;
                              iVar10 = iVar10 + 4;
                              *(unsigned int *)(iVar4 + 0x60) = 0;
                              uVar17 = 1;
                              *(unsigned int *)(*(int *)(iVar14 + *(int *)(param_1 + 0x14)) + 0x30) =
                                   *(unsigned int *)(iVar6 + puVar2[2]);
                            }
                            else {
                              *(int *)(iVar6 + uVar19) = *(int *)(iVar12 + 0x30);
                            }
                          }
                          uVar20 = uVar20 + 1;
                        } while ((uVar20 & 0xffffffff) < uVar7);
                        uVar19 = (unsigned int)uVar28;
                        if ((uVar28 & 0xffffffff) == 0) {
                          uVar24 = 0;
                        }
                        else {
                          uVar24 = uVar19 & 0xfffff | 0x10000000;
                        }
                        *puVar3 = uVar24;
                        puVar3[3] = uVar19;
                        puVar3[1] = uVar19;
                        if ((int)uVar17 != 0) {
                          lVar25 = lVar25 + 1;
                        }
                      }
                    }
                    uVar26 = uVar26 + 1;
                    lVar27 = lVar27 + uVar7;
                  } while ((uVar26 & 0xffffffff) < uVar1 / uVar7);
                }
              }
              uVar22 = uVar22 + 1;
              iVar23 = iVar23 + 4;
            } while (uVar22 < *(unsigned int *)(param_1 + 0xc));
          }
          uVar22 = 0;
          if (*(int *)(param_1 + 8) != 0) {
            iVar23 = 0;
            do {
              iVar10 = *(int *)(*(int *)(param_1 + 0x14) + iVar23);
              if (((*(int *)(iVar10 + 8) != -1) &&
                  (iVar4 = *(int *)(*(int *)(iVar10 + 8) * 4 + *(int *)(param_1 + 0x14)),
                  (*(unsigned int *)(*(int *)(*(int *)(iVar4 + 4) * 4 + *(int *)(param_1 + 0x10)) + 4) & 2)
                  != 0)) && (iVar12 = fn_829655B8(param_1), iVar12 == 0)) {
                if (*(int *)(iVar4 + 0x30) == -1) {
                  if ((((int)uVar9 == -1) &&
                      (uVar9 = fn_82964588(param_1,&lbl_8201261C,0x80251,0xffffffffffffffff,4)
                      , (int)uVar9 == -1)) ||
                     (iVar12 = fn_829646C8(*(unsigned int *)(param_1 + 0xe4),0x10000001,1,1),
                     iVar12 == -1)) goto LAB_82976850;
                  iVar12 = *(int *)(iVar12 * 4 + *(int *)(*(int *)(param_1 + 0xe4) + 0x18));
                  fn_829632F0(iVar12,*(unsigned int *)
                                       (*(int *)(iVar4 + 0x48) * 4 + *(int *)(param_1 + 0x18)));
                  **(unsigned int **)(iVar12 + 8) = *(unsigned int *)(iVar10 + 8);
                  uVar13 = fn_82964628(uVar8,*(int *)(param_1 + 0xe4),
                                             *(unsigned int *)(*(int *)(param_1 + 0xe4) + 0x84),lVar25
                                             ,0);
                  **(unsigned int **)(iVar12 + 0x10) = uVar13;
                  if (**(int **)(iVar12 + 0x10) == -1) goto LAB_82976850;
                  iVar14 = fn_82964628(uVar8,param_1,uVar9,lVar25,0);
                  *(int *)(iVar4 + 0x30) = iVar14;
                  if (iVar14 == -1) goto LAB_82976850;
                  iVar14 = *(int *)(iVar14 * 4 + *(int *)(param_1 + 0x14));
                  fn_829640A0(iVar14,iVar4);
                  lVar25 = lVar25 + 1;
                  uVar13 = **(unsigned int **)(iVar12 + 0x10);
                  *(unsigned int *)(iVar14 + 0x60) = 0;
                  *(unsigned int *)(iVar14 + 100) = 0;
                  *(unsigned int *)(iVar14 + 0x44) = uVar13;
                }
                *(unsigned int *)(iVar10 + 8) = *(unsigned int *)(iVar4 + 0x30);
              }
              uVar22 = uVar22 + 1;
              iVar23 = iVar23 + 4;
            } while (uVar22 < *(unsigned int *)(param_1 + 8));
          }
          uVar8 = fn_8296E438(*(unsigned int *)(param_1 + 0xe4));
          if (((int)uVar8 == 0) || (-1 < (int)uVar8)) {
            uVar8 = fn_82969030(*(unsigned int *)(param_1 + 0xe4));
            if (((int)uVar8 == 0) || (-1 < (int)uVar8)) {
              fn_8296CF68(*(unsigned int *)(param_1 + 0xe4));
              uVar8 = fn_8296E438(param_1);
              if (((int)uVar8 == 0) || (-1 < (int)uVar8)) {
                uVar8 = fn_82969030(param_1);
                if (((int)uVar8 == 0) || (-1 < (int)uVar8)) {
                  uVar8 = fn_82971580(param_1);
                  if (((int)uVar8 == 0) || (-1 < (int)uVar8)) {
                    if ((int)uVar9 != -1) {
                      uVar22 = 0xffffffff;
                      uVar21 = 0;
                      if (*(unsigned int *)(param_1 + 8) != 0) {
                        iVar23 = 0;
                        do {
                          iVar10 = *(int *)(*(int *)(param_1 + 0x14) + iVar23);
                          if (((unsigned __int64)*(unsigned int *)(iVar10 + 4) == (uVar9 & 0xffffffff)) &&
                             (uVar1 = *(unsigned int *)(iVar10 + 0xc), uVar1 < uVar22)) {
                            uVar22 = uVar1;
                          }
                          uVar21 = uVar21 + 1;
                          iVar23 = iVar23 + 4;
                        } while (uVar21 < *(unsigned int *)(param_1 + 8));
                        if (uVar22 != 0xffffffff) {
                          uVar21 = 0;
                          iVar23 = 0;
                          do {
                            iVar10 = *(int *)(*(int *)(param_1 + 0x14) + iVar23);
                            if (((unsigned __int64)*(unsigned int *)(iVar10 + 4) == (uVar9 & 0xffffffff)) &&
                               (*(int *)(iVar10 + 0xc) != -1)) {
                              iVar10 = *(int *)(*(int *)(param_1 + 0x14) + iVar23);
                              *(unsigned int *)(iVar10 + 0xc) = *(int *)(iVar10 + 0xc) - uVar22;
                            }
                            uVar21 = uVar21 + 1;
                            iVar23 = iVar23 + 4;
                          } while (uVar21 < *(unsigned int *)(param_1 + 8));
                        }
                      }
                    }
                    uVar8 = 0;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else {
    uVar8 = 1;
  }
  return uVar8;
}

