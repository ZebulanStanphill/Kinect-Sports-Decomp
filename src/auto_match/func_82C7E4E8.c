typedef unsigned char bool;
#define true 1
#define false 0
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_82C4E3B0();
extern int fn_82C4E470();
extern int fn_82C4E5E8();
extern int fn_82C7D448();


unsigned __int64 fn_82C7E4E8(int param_1)

{
  char cVar1;
  unsigned char bVar2;
  unsigned char bVar3;
  unsigned char bVar4;
  unsigned char bVar5;
  unsigned char bVar6;
  short sVar7;
  __int64 *plVar8;
  unsigned __int64 *puVar9;
  bool bVar10;
  unsigned __int64 uVar11;
  int iVar12;
  int iVar13;
  __int64 lVar14;
  unsigned __int64 uVar15;
  __int64 lVar16;
  unsigned char *pbVar17;
  unsigned int uVar18;
  unsigned __int64 uVar19;
  unsigned char bVar22;
  unsigned __int64 uVar20;
  int iVar21;
  char *pcVar23;
  unsigned int *puVar24;
  unsigned __int64 uVar25;
  unsigned __int64 uVar26;
  __int64 lVar27;
  unsigned int *puVar28;
  unsigned __int64 uVar29;
  int iVar30;
  unsigned __int64 uVar31;
  unsigned char *puVar32;
  
  plVar8 = *(__int64 **)(param_1 + 0x54);
  bVar10 = false;
  lVar14 = *plVar8;
  uVar18 = *(unsigned int *)(plVar8 + 1);
  uVar26 = ((unsigned __int64)*(unsigned int *)(param_1 + 0x88) + 1 & 0xffffffff) >> 1;
  puVar24 = *(unsigned int **)(param_1 + 0x110);
  uVar20 = ((unsigned __int64)*(unsigned int *)(param_1 + 0x8c) + 1 & 0xffffffff) >> 1;
  pbVar17 = *(unsigned char **)(param_1 + 0x5748);
  uVar31 = ZEXT48(pbVar17);
  iVar13 = (int)uVar20;
  iVar12 = (int)uVar26;
  uVar25 = (__int64)iVar13 * (__int64)iVar12;
  *plVar8 = lVar14 << 1;
  *(int *)(plVar8 + 1) = (int)((unsigned __int64)uVar18 - 1);
  if ((__int64)((unsigned __int64)uVar18 - 1) < 0) {
    fn_82C4E5E8();
  }
  puVar9 = *(unsigned __int64 **)(param_1 + 0x54);
  uVar29 = 2;
  lVar27 = 0;
  uVar15 = (unsigned __int64)*(unsigned int *)(puVar9 + 1);
  uVar19 = uVar15 + 0x10;
  if ((uVar19 & 0xffffffff) < 2) {
    do {
      if ((uVar19 & 0xffffffff) == 0) break;
      uVar29 = uVar29 - uVar19;
      *(int *)(puVar9 + 1) = (int)(uVar15 - uVar19);
      lVar27 = (unsigned __int64)(unsigned int)((int)(*puVar9 >> (0x40 - uVar19 & 0x7f)) << ((unsigned int)uVar29 & 0x3f))
               + lVar27;
      *puVar9 = *puVar9 << (uVar19 & 0x7f);
      if ((__int64)(uVar15 - uVar19) < 0) {
        fn_82C4E5E8(puVar9);
      }
      uVar15 = (unsigned __int64)*(unsigned int *)(puVar9 + 1);
      uVar19 = uVar15 + 0x10;
    } while ((uVar19 & 0xffffffff) < (uVar29 & 0xffffffff));
  }
  *(int *)(puVar9 + 1) = (int)(uVar15 - uVar29);
  uVar19 = (*puVar9 >> (0x40 - uVar29 & 0x7f) & 0xffffffff) + lVar27;
  *puVar9 = *puVar9 << (uVar29 & 0x7f);
  if ((__int64)(uVar15 - uVar29) < 0) {
    fn_82C4E5E8(puVar9);
  }
  iVar21 = (int)uVar25;
  if ((uVar19 & 0xffffffff) == 1) {
    plVar8 = *(__int64 **)(param_1 + 0x54);
    lVar27 = *plVar8;
    uVar18 = *(unsigned int *)(plVar8 + 1);
    *plVar8 = lVar27 << 1;
    *(int *)(plVar8 + 1) = (int)((unsigned __int64)uVar18 - 1);
    if ((__int64)((unsigned __int64)uVar18 - 1) < 0) {
      fn_82C4E5E8();
    }
    if (lVar27 < 0) {
      uVar15 = uVar26;
      if (iVar12 != 0) {
        do {
          plVar8 = *(__int64 **)(param_1 + 0x54);
          lVar27 = *plVar8;
          uVar18 = *(unsigned int *)(plVar8 + 1);
          *plVar8 = lVar27 << 1;
          *(int *)(plVar8 + 1) = (int)((unsigned __int64)uVar18 - 1);
          if ((__int64)((unsigned __int64)uVar18 - 1) < 0) {
            fn_82C4E5E8();
          }
          if (lVar27 < 0) {
            if (iVar13 != 0) {
              lVar27 = uVar31 - uVar26;
              uVar19 = uVar20;
              do {
                plVar8 = *(__int64 **)(param_1 + 0x54);
                lVar16 = *plVar8;
                uVar18 = *(unsigned int *)(plVar8 + 1);
                *plVar8 = lVar16 << 1;
                *(int *)(plVar8 + 1) = (int)((unsigned __int64)uVar18 - 1);
                if ((__int64)((unsigned __int64)uVar18 - 1) < 0) {
                  fn_82C4E5E8();
                }
                uVar19 = uVar19 - 1;
                lVar27 = lVar27 + uVar26;
                *(unsigned char *)lVar27 = (unsigned char)((unsigned __int64)lVar16 >> 0x3f);
              } while (uVar19 != 0);
            }
          }
          else if (iVar13 != 0) {
            lVar27 = uVar31 - uVar26;
            uVar19 = uVar20;
            do {
              lVar27 = lVar27 + uVar26;
              *(unsigned char *)lVar27 = 0;
              uVar19 = uVar19 - 1;
            } while (uVar19 != 0);
          }
          uVar15 = uVar15 - 1;
          uVar31 = uVar31 + 1;
        } while (uVar15 != 0);
      }
    }
    else if (iVar13 != 0) {
      do {
        plVar8 = *(__int64 **)(param_1 + 0x54);
        lVar27 = *plVar8;
        uVar18 = *(unsigned int *)(plVar8 + 1);
        *plVar8 = lVar27 << 1;
        *(int *)(plVar8 + 1) = (int)((unsigned __int64)uVar18 - 1);
        if ((__int64)((unsigned __int64)uVar18 - 1) < 0) {
          fn_82C4E5E8();
        }
        if (lVar27 < 0) {
          iVar30 = 0;
          if (iVar12 != 0) {
            do {
              plVar8 = *(__int64 **)(param_1 + 0x54);
              lVar27 = *plVar8;
              uVar18 = *(unsigned int *)(plVar8 + 1);
              *plVar8 = lVar27 << 1;
              *(int *)(plVar8 + 1) = (int)((unsigned __int64)uVar18 - 1);
              if ((__int64)((unsigned __int64)uVar18 - 1) < 0) {
                fn_82C4E5E8();
              }
              *(unsigned char *)((int)uVar31 + iVar30) = (unsigned char)((unsigned __int64)lVar27 >> 0x3f);
              iVar30 = iVar30 + 1;
            } while (iVar30 < iVar12);
          }
        }
        else {
          iVar30 = 0;
          uVar15 = uVar26;
          if (iVar12 != 0) {
            do {
              *(unsigned char *)((int)uVar31 + iVar30) = 0;
              iVar30 = iVar30 + 1;
              uVar15 = uVar15 - 1;
            } while (uVar15 != 0);
          }
        }
        uVar20 = uVar20 - 1;
        uVar31 = uVar31 + uVar26;
      } while (uVar20 != 0);
    }
  }
  else if ((uVar19 & 0xffffffff) == 2) {
    iVar30 = (int)(uVar25 & 1);
    if (iVar30 != 0) {
      plVar8 = *(__int64 **)(param_1 + 0x54);
      lVar27 = *plVar8;
      uVar18 = *(unsigned int *)(plVar8 + 1);
      *plVar8 = lVar27 << 1;
      *(int *)(plVar8 + 1) = (int)((unsigned __int64)uVar18 - 1);
      if ((__int64)((unsigned __int64)uVar18 - 1) < 0) {
        fn_82C4E5E8();
      }
      *pbVar17 = (unsigned char)((unsigned __int64)lVar27 >> 0x3f);
      uVar31 = uVar31 + 1;
    }
    if (iVar30 < iVar21) {
      lVar27 = (((uVar25 - (uVar25 & 1)) - 1 & 0xffffffff) >> 1) + 1;
      do {
        plVar8 = *(__int64 **)(param_1 + 0x54);
        lVar16 = *plVar8;
        uVar18 = *(unsigned int *)(plVar8 + 1);
        *plVar8 = lVar16 << 1;
        *(int *)(plVar8 + 1) = (int)((unsigned __int64)uVar18 - 1);
        if ((__int64)((unsigned __int64)uVar18 - 1) < 0) {
          fn_82C4E5E8();
        }
        puVar32 = (unsigned char *)uVar31;
        if (lVar16 < 0) {
          plVar8 = *(__int64 **)(param_1 + 0x54);
          lVar16 = *plVar8;
          uVar18 = *(unsigned int *)(plVar8 + 1);
          *plVar8 = lVar16 << 1;
          *(int *)(plVar8 + 1) = (int)((unsigned __int64)uVar18 - 1);
          if ((__int64)((unsigned __int64)uVar18 - 1) < 0) {
            fn_82C4E5E8();
          }
          if (lVar16 < 0) {
            *puVar32 = 1;
            puVar32[1] = 1;
          }
          else {
            plVar8 = *(__int64 **)(param_1 + 0x54);
            lVar16 = *plVar8;
            uVar18 = *(unsigned int *)(plVar8 + 1);
            *plVar8 = lVar16 << 1;
            *(int *)(plVar8 + 1) = (int)((unsigned __int64)uVar18 - 1);
            if ((__int64)((unsigned __int64)uVar18 - 1) < 0) {
              fn_82C4E5E8();
            }
            if (-1 < lVar16) {
              *puVar32 = 1;
              goto LAB_82c7e8d0;
            }
            *puVar32 = 0;
            puVar32[1] = 1;
          }
        }
        else {
          *puVar32 = 0;
LAB_82c7e8d0:
          puVar32[1] = 0;
        }
        uVar31 = uVar31 + 2;
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
    }
  }
  else if ((uVar19 & 0xffffffff) == 3) {
    uVar11 = fn_82C7D448(param_1,uVar31);
    if ((int)uVar11 != 0) {
      return uVar11;
    }
  }
  else {
    plVar8 = *(__int64 **)(param_1 + 0x54);
    lVar27 = *plVar8;
    uVar18 = *(unsigned int *)(plVar8 + 1);
    *plVar8 = lVar27 << 1;
    *(int *)(plVar8 + 1) = (int)((unsigned __int64)uVar18 - 1);
    if ((__int64)((unsigned __int64)uVar18 - 1) < 0) {
      fn_82C4E5E8();
    }
    if (lVar27 < 0) {
      iVar30 = (int)(uVar25 & 1);
      bVar10 = true;
      if (iVar30 != 0) {
        plVar8 = *(__int64 **)(param_1 + 0x54);
        lVar27 = *plVar8;
        uVar18 = *(unsigned int *)(plVar8 + 1);
        *plVar8 = lVar27 << 1;
        *(int *)(plVar8 + 1) = (int)((unsigned __int64)uVar18 - 1);
        if ((__int64)((unsigned __int64)uVar18 - 1) < 0) {
          fn_82C4E5E8();
        }
        *pbVar17 = (unsigned char)((unsigned __int64)lVar27 >> 0x3f);
        uVar31 = uVar31 + 1;
      }
      if (iVar30 < iVar21) {
        lVar27 = (((uVar25 - (uVar25 & 1)) - 1 & 0xffffffff) >> 1) + 1;
        do {
          plVar8 = *(__int64 **)(param_1 + 0x54);
          lVar16 = *plVar8;
          uVar18 = *(unsigned int *)(plVar8 + 1);
          *plVar8 = lVar16 << 1;
          *(int *)(plVar8 + 1) = (int)((unsigned __int64)uVar18 - 1);
          if ((__int64)((unsigned __int64)uVar18 - 1) < 0) {
            fn_82C4E5E8();
          }
          puVar32 = (unsigned char *)uVar31;
          if (lVar16 < 0) {
            plVar8 = *(__int64 **)(param_1 + 0x54);
            lVar16 = *plVar8;
            uVar18 = *(unsigned int *)(plVar8 + 1);
            *plVar8 = lVar16 << 1;
            *(int *)(plVar8 + 1) = (int)((unsigned __int64)uVar18 - 1);
            if ((__int64)((unsigned __int64)uVar18 - 1) < 0) {
              fn_82C4E5E8();
            }
            if (lVar16 < 0) {
              *puVar32 = 1;
              puVar32[1] = 1;
            }
            else {
              plVar8 = *(__int64 **)(param_1 + 0x54);
              lVar16 = *plVar8;
              uVar18 = *(unsigned int *)(plVar8 + 1);
              *plVar8 = lVar16 << 1;
              *(int *)(plVar8 + 1) = (int)((unsigned __int64)uVar18 - 1);
              if ((__int64)((unsigned __int64)uVar18 - 1) < 0) {
                fn_82C4E5E8();
              }
              if (-1 < lVar16) {
                *puVar32 = 1;
                goto LAB_82c7e750;
              }
              *puVar32 = 0;
              puVar32[1] = 1;
            }
          }
          else {
            *puVar32 = 0;
LAB_82c7e750:
            puVar32[1] = 0;
          }
          uVar31 = uVar31 + 2;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
      }
    }
    else {
      plVar8 = *(__int64 **)(param_1 + 0x54);
      lVar27 = *plVar8;
      uVar18 = *(unsigned int *)(plVar8 + 1);
      *plVar8 = lVar27 << 1;
      *(int *)(plVar8 + 1) = (int)((unsigned __int64)uVar18 - 1);
      if ((__int64)((unsigned __int64)uVar18 - 1) < 0) {
        fn_82C4E5E8();
      }
      if (lVar27 < 0) {
        bVar10 = true;
        fn_82C7D448(param_1,uVar31);
      }
    }
  }
  pbVar17 = *(unsigned char **)(param_1 + 0x5748);
  if (bVar10) {
    lVar27 = 0;
    if (iVar13 != 0) {
      do {
        lVar16 = 0;
        if (iVar12 != 0) {
          do {
            if (lVar16 + lVar27 == 0) {
LAB_82c7eae4:
              bVar22 = (unsigned char)((unsigned __int64)lVar14 >> 0x3f);
            }
            else if ((int)lVar27 == 0) {
              bVar22 = pbVar17[-1];
            }
            else if ((int)lVar16 == 0) {
              bVar22 = pbVar17[-iVar12];
            }
            else {
              bVar22 = pbVar17[-1];
              if (pbVar17[-1] != pbVar17[-iVar12]) goto LAB_82c7eae4;
            }
            lVar16 = lVar16 + 1;
            *pbVar17 = *pbVar17 ^ bVar22;
            pbVar17 = pbVar17 + 1;
          } while ((int)lVar16 < iVar12);
        }
        lVar27 = lVar27 + 1;
      } while ((int)lVar27 < iVar13);
    }
  }
  else if ((lVar14 < 0) && (iVar13 = 0, 0 < iVar21)) {
    do {
      pbVar17[iVar13] = pbVar17[iVar13] ^ 1;
      iVar13 = iVar13 + 1;
      uVar25 = uVar25 - 1;
    } while (uVar25 != 0);
  }
  pcVar23 = *(char **)(param_1 + 0x5748);
  lVar14 = (unsigned __int64)*(unsigned int *)(param_1 + 0x8c) - ((unsigned __int64)*(unsigned int *)(param_1 + 0x8c) & 1);
  iVar13 = *(unsigned int *)(param_1 + 0x88) - (*(unsigned int *)(param_1 + 0x88) & 1);
  if (0 < lVar14) {
    lVar14 = ((lVar14 - 1U & 0xffffffff) >> 1) + 1;
    do {
      uVar26 = 0;
      puVar28 = puVar24;
      if (0 < iVar13) {
        do {
          cVar1 = *pcVar23;
          pcVar23 = pcVar23 + 1;
          if (cVar1 == '\0') {
            puVar9 = *(unsigned __int64 **)(param_1 + 0x54);
            if ((int *)(param_1 + 0x574c) == (int *)0x0) {
              uVar20 = 0;
              *(unsigned int *)((int)puVar9 + 0x14) = 3;
            }
            else {
              iVar12 = *(int *)(param_1 + 0x574c);
              sVar7 = *(short *)((int)((*puVar9 >>
                                        (0x40 - (unsigned __int64)*(unsigned char *)(param_1 + 0x5754) & 0x7f) &
                                       0xffffffff) << 1) + iVar12);
              uVar20 = (unsigned __int64)sVar7;
              if (sVar7 < 0) {
                fn_82C4E470(puVar9);
                do {
                  uVar25 = *puVar9;
                  fn_82C4E470(puVar9,1);
                  sVar7 = *(short *)((int)(((uVar20 - ((__int64)uVar25 >> 0x3f)) + 0x8000 &
                                           0xffffffff) << 1) + iVar12);
                  uVar20 = (unsigned __int64)sVar7;
                } while (sVar7 < 0);
              }
              else {
                iVar12 = *(int *)(puVar9 + 1);
                iVar21 = (int)(uVar20 & 0xf);
                *puVar9 = *puVar9 << (uVar20 & 0xf);
                *(int *)(puVar9 + 1) = iVar12 - iVar21;
                if (iVar12 < iVar21) {
                  do {
                    pbVar17 = *(unsigned char **)((int)puVar9 + 0xc);
                    if (pbVar17 < (unsigned char *)(*(int *)(puVar9 + 2) - 4U)) {
                      bVar22 = *pbVar17;
                      bVar2 = pbVar17[1];
                      bVar3 = pbVar17[2];
                      bVar4 = pbVar17[3];
                      bVar5 = pbVar17[4];
                      bVar6 = pbVar17[5];
                      iVar12 = *(int *)(puVar9 + 1);
                      *(unsigned char **)((int)puVar9 + 0xc) = pbVar17 + 6;
                      *(int *)(puVar9 + 1) = iVar12 + 0x30;
                      *puVar9 = ((((((unsigned __int64)bVar2 + (unsigned __int64)bVar22 * 0x100) * 0x100 +
                                   (unsigned __int64)bVar3) * 0x100 + (unsigned __int64)bVar4) * 0x100 +
                                 (unsigned __int64)bVar5) * 0x100 + (unsigned __int64)bVar6 <<
                                ((__int64)-iVar12 & 0x7fU)) + *puVar9;
                      goto LAB_82c7ec94;
                    }
                    iVar12 = fn_82C4E3B0(puVar9);
                  } while (iVar12 == 1);
                  uVar20 = (unsigned __int64)((int)sVar7 >> 4);
                }
                else {
LAB_82c7ec94:
                  uVar20 = (unsigned __int64)((int)sVar7 >> 4);
                }
              }
            }
            iVar21 = (int)uVar20;
            *puVar28 = (unsigned int)((uVar20 & 0xffffffff) << 0x1f) | *puVar28 & 0x7fffffff;
            puVar28[6] = (iVar21 >> 1) << 0x1f | puVar28[6] & 0x7fffffff;
            uVar20 = *(unsigned int *)(param_1 + 0x88) + uVar26;
            iVar12 = (int)((uVar20 + (uVar20 & 0x7fffffff) * 2 & 0xffffffff) << 3);
            *(unsigned int *)(iVar12 + (int)puVar24) =
                 (iVar21 >> 2) << 0x1f | *(unsigned int *)(iVar12 + (int)puVar24) & 0x7fffffff;
            uVar20 = *(unsigned int *)(param_1 + 0x88) + uVar26 + 1;
            iVar12 = (int)((uVar20 + (uVar20 & 0x7fffffff) * 2 & 0x1fffffff) << 3);
            uVar18 = (iVar21 >> 3) << 0x1f | *(unsigned int *)(iVar12 + (int)puVar24) & 0x7fffffff;
          }
          else {
            puVar28[6] = puVar28[6] | 0x80000000;
            *puVar28 = *puVar28 | 0x80000000;
            uVar20 = *(unsigned int *)(param_1 + 0x88) + uVar26;
            iVar12 = (int)((uVar20 + (uVar20 & 0x7fffffff) * 2 & 0xffffffff) << 3);
            *(unsigned int *)(iVar12 + (int)puVar24) = *(unsigned int *)(iVar12 + (int)puVar24) | 0x80000000;
            uVar20 = *(unsigned int *)(param_1 + 0x88) + uVar26 + 1;
            iVar12 = (int)((uVar20 + (uVar20 & 0x7fffffff) * 2 & 0x1fffffff) << 3);
            uVar18 = *(unsigned int *)(iVar12 + (int)puVar24) | 0x80000000;
          }
          uVar26 = uVar26 + 2;
          *(unsigned int *)(iVar12 + (int)puVar24) = uVar18;
          puVar28 = puVar28 + 0xc;
        } while ((int)uVar26 < iVar13);
      }
      if ((*(unsigned int *)(param_1 + 0x88) & 1) != 0) {
        cVar1 = *pcVar23;
        pcVar23 = pcVar23 + 1;
        if (cVar1 == '\0') {
          puVar9 = *(unsigned __int64 **)(param_1 + 0x54);
          if ((int *)(param_1 + 0x574c) == (int *)0x0) {
            uVar20 = 0;
            *(unsigned int *)((int)puVar9 + 0x14) = 3;
          }
          else {
            iVar12 = *(int *)(param_1 + 0x574c);
            sVar7 = *(short *)((int)((*puVar9 >>
                                      (0x40 - (unsigned __int64)*(unsigned char *)(param_1 + 0x5754) & 0x7f) &
                                     0xffffffff) << 1) + iVar12);
            uVar20 = (unsigned __int64)sVar7;
            if (sVar7 < 0) {
              fn_82C4E470(puVar9);
              do {
                uVar25 = *puVar9;
                fn_82C4E470(puVar9,1);
                sVar7 = *(short *)((int)(((uVar20 - ((__int64)uVar25 >> 0x3f)) + 0x8000 &
                                         0xffffffff) << 1) + iVar12);
                uVar20 = (unsigned __int64)sVar7;
              } while (sVar7 < 0);
            }
            else {
              iVar12 = *(int *)(puVar9 + 1);
              iVar21 = (int)(uVar20 & 0xf);
              *puVar9 = *puVar9 << (uVar20 & 0xf);
              *(int *)(puVar9 + 1) = iVar12 - iVar21;
              if (iVar12 < iVar21) {
                do {
                  pbVar17 = *(unsigned char **)((int)puVar9 + 0xc);
                  if (pbVar17 < (unsigned char *)(*(int *)(puVar9 + 2) - 4U)) {
                    bVar22 = *pbVar17;
                    bVar2 = pbVar17[1];
                    bVar3 = pbVar17[2];
                    bVar4 = pbVar17[3];
                    bVar5 = pbVar17[4];
                    bVar6 = pbVar17[5];
                    iVar12 = *(int *)(puVar9 + 1);
                    *(unsigned char **)((int)puVar9 + 0xc) = pbVar17 + 6;
                    *(int *)(puVar9 + 1) = iVar12 + 0x30;
                    *puVar9 = ((((((unsigned __int64)bVar2 + (unsigned __int64)bVar22 * 0x100) * 0x100 +
                                 (unsigned __int64)bVar3) * 0x100 + (unsigned __int64)bVar4) * 0x100 +
                               (unsigned __int64)bVar5) * 0x100 + (unsigned __int64)bVar6 <<
                              ((__int64)-iVar12 & 0x7fU)) + *puVar9;
                    goto LAB_82c7eec8;
                  }
                  iVar12 = fn_82C4E3B0(puVar9);
                } while (iVar12 == 1);
                uVar20 = (unsigned __int64)((int)sVar7 >> 4);
              }
              else {
LAB_82c7eec8:
                uVar20 = (unsigned __int64)((int)sVar7 >> 4);
              }
            }
          }
          iVar12 = (int)((uVar26 + (uVar26 & 0x7fffffff) * 2 & 0xffffffff) << 3);
          *(unsigned int *)(iVar12 + (int)puVar24) =
               (unsigned int)((uVar20 & 0xffffffff) << 0x1f) | *(unsigned int *)(iVar12 + (int)puVar24) & 0x7fffffff
          ;
          uVar26 = *(unsigned int *)(param_1 + 0x88) + uVar26;
          iVar12 = (int)((uVar26 + (uVar26 & 0x7fffffff) * 2 & 0xffffffff) << 3);
          *(unsigned int *)(iVar12 + (int)puVar24) =
               ((int)uVar20 >> 2) << 0x1f | *(unsigned int *)(iVar12 + (int)puVar24) & 0x7fffffff;
        }
        else {
          iVar12 = (int)((uVar26 + (uVar26 & 0x7fffffff) * 2 & 0xffffffff) << 3);
          *(unsigned int *)(iVar12 + (int)puVar24) = *(unsigned int *)(iVar12 + (int)puVar24) | 0x80000000;
          uVar26 = *(unsigned int *)(param_1 + 0x88) + uVar26;
          iVar12 = (int)((uVar26 + (uVar26 & 0x7fffffff) * 2 & 0xffffffff) << 3);
          *(unsigned int *)(iVar12 + (int)puVar24) = *(unsigned int *)(iVar12 + (int)puVar24) | 0x80000000;
        }
      }
      lVar14 = lVar14 + -1;
      puVar24 = puVar24 + *(int *)(param_1 + 0x88) * 0xc;
    } while (lVar14 != 0);
  }
  if ((*(unsigned int *)(param_1 + 0x8c) & 1) != 0) {
    uVar26 = 0;
    if (0 < iVar13) {
      lVar14 = (unsigned __int64)(iVar13 - 1U >> 1) + 1;
      uVar26 = lVar14 * 2 & 0xfffffffe;
      puVar28 = puVar24;
      do {
        cVar1 = *pcVar23;
        pcVar23 = pcVar23 + 1;
        if (cVar1 == '\0') {
          puVar9 = *(unsigned __int64 **)(param_1 + 0x54);
          if ((int *)(param_1 + 0x574c) == (int *)0x0) {
            uVar20 = 0;
            *(unsigned int *)((int)puVar9 + 0x14) = 3;
          }
          else {
            iVar13 = *(int *)(param_1 + 0x574c);
            sVar7 = *(short *)((int)((*puVar9 >>
                                      (0x40 - (unsigned __int64)*(unsigned char *)(param_1 + 0x5754) & 0x7f) &
                                     0xffffffff) << 1) + iVar13);
            uVar20 = (unsigned __int64)sVar7;
            if (sVar7 < 0) {
              fn_82C4E470(puVar9);
              do {
                uVar25 = *puVar9;
                fn_82C4E470(puVar9,1);
                sVar7 = *(short *)((int)(((uVar20 - ((__int64)uVar25 >> 0x3f)) + 0x8000 &
                                         0xffffffff) << 1) + iVar13);
                uVar20 = (unsigned __int64)sVar7;
              } while (sVar7 < 0);
            }
            else {
              iVar13 = *(int *)(puVar9 + 1);
              iVar12 = (int)(uVar20 & 0xf);
              *puVar9 = *puVar9 << (uVar20 & 0xf);
              *(int *)(puVar9 + 1) = iVar13 - iVar12;
              if (iVar13 < iVar12) {
                do {
                  pbVar17 = *(unsigned char **)((int)puVar9 + 0xc);
                  if (pbVar17 < (unsigned char *)(*(int *)(puVar9 + 2) - 4U)) {
                    bVar22 = *pbVar17;
                    bVar2 = pbVar17[1];
                    bVar3 = pbVar17[2];
                    bVar4 = pbVar17[3];
                    bVar5 = pbVar17[4];
                    bVar6 = pbVar17[5];
                    iVar13 = *(int *)(puVar9 + 1);
                    *(unsigned char **)((int)puVar9 + 0xc) = pbVar17 + 6;
                    *(int *)(puVar9 + 1) = iVar13 + 0x30;
                    *puVar9 = ((((((unsigned __int64)bVar22 * 0x100 + (unsigned __int64)bVar2) * 0x100 +
                                 (unsigned __int64)bVar3) * 0x100 + (unsigned __int64)bVar4) * 0x100 +
                               (unsigned __int64)bVar5) * 0x100 + (unsigned __int64)bVar6 <<
                              ((__int64)-iVar13 & 0x7fU)) + *puVar9;
                    goto LAB_82c7f0d8;
                  }
                  iVar13 = fn_82C4E3B0(puVar9);
                } while (iVar13 == 1);
                uVar20 = (unsigned __int64)((int)sVar7 >> 4);
              }
              else {
LAB_82c7f0d8:
                uVar20 = (unsigned __int64)((int)sVar7 >> 4);
              }
            }
          }
          *puVar28 = (unsigned int)((uVar20 & 0xffffffff) << 0x1f) | *puVar28 & 0x7fffffff;
          puVar28[6] = ((int)uVar20 >> 1) << 0x1f | puVar28[6] & 0x7fffffff;
        }
        else {
          *puVar28 = *puVar28 | 0x80000000;
          puVar28[6] = puVar28[6] | 0x80000000;
        }
        lVar14 = lVar14 + -1;
        puVar28 = puVar28 + 0xc;
      } while (lVar14 != 0);
    }
    if ((*(unsigned int *)(param_1 + 0x88) & 1) != 0) {
      if (*pcVar23 == '\0') {
        puVar9 = *(unsigned __int64 **)(param_1 + 0x54);
        if ((int *)(param_1 + 0x574c) == (int *)0x0) {
          uVar20 = 0;
          *(unsigned int *)((int)puVar9 + 0x14) = 3;
        }
        else {
          iVar13 = *(int *)(param_1 + 0x574c);
          sVar7 = *(short *)((int)((*puVar9 >>
                                    (0x40 - (unsigned __int64)*(unsigned char *)(param_1 + 0x5754) & 0x7f) &
                                   0xffffffff) << 1) + iVar13);
          uVar20 = (unsigned __int64)sVar7;
          if (sVar7 < 0) {
            fn_82C4E470(puVar9);
            do {
              uVar25 = *puVar9;
              fn_82C4E470(puVar9,1);
              sVar7 = *(short *)((int)(((uVar20 - ((__int64)uVar25 >> 0x3f)) + 0x8000 & 0xffffffff)
                                      << 1) + iVar13);
              uVar20 = (unsigned __int64)sVar7;
            } while (sVar7 < 0);
          }
          else {
            iVar13 = *(int *)(puVar9 + 1);
            iVar12 = (int)(uVar20 & 0xf);
            *puVar9 = *puVar9 << (uVar20 & 0xf);
            *(int *)(puVar9 + 1) = iVar13 - iVar12;
            if (iVar13 < iVar12) {
              do {
                pbVar17 = *(unsigned char **)((int)puVar9 + 0xc);
                if (pbVar17 < (unsigned char *)(*(int *)(puVar9 + 2) - 4U)) {
                  bVar22 = *pbVar17;
                  bVar2 = pbVar17[1];
                  bVar3 = pbVar17[2];
                  bVar4 = pbVar17[3];
                  bVar5 = pbVar17[4];
                  bVar6 = pbVar17[5];
                  iVar13 = *(int *)(puVar9 + 1);
                  *(unsigned char **)((int)puVar9 + 0xc) = pbVar17 + 6;
                  *(int *)(puVar9 + 1) = iVar13 + 0x30;
                  *puVar9 = ((((((unsigned __int64)bVar22 * 0x100 + (unsigned __int64)bVar2) * 0x100 +
                               (unsigned __int64)bVar3) * 0x100 + (unsigned __int64)bVar4) * 0x100 +
                             (unsigned __int64)bVar5) * 0x100 + (unsigned __int64)bVar6 <<
                            ((__int64)-iVar13 & 0x7fU)) + *puVar9;
                  goto LAB_82c7f274;
                }
                iVar13 = fn_82C4E3B0(puVar9);
              } while (iVar13 == 1);
              uVar20 = (unsigned __int64)((int)sVar7 >> 4);
            }
            else {
LAB_82c7f274:
              uVar20 = (unsigned __int64)((int)sVar7 >> 4);
            }
          }
        }
        iVar13 = (int)((uVar26 + (uVar26 & 0x7fffffff) * 2 & 0xffffffff) << 3);
        *(unsigned int *)(iVar13 + (int)puVar24) =
             (unsigned int)((uVar20 & 0xffffffff) << 0x1f) | *(unsigned int *)(iVar13 + (int)puVar24) & 0x7fffffff;
        return 0;
      }
      iVar13 = (int)((uVar26 + (uVar26 & 0x7fffffff) * 2 & 0xffffffff) << 3);
      *(unsigned int *)(iVar13 + (int)puVar24) = *(unsigned int *)(iVar13 + (int)puVar24) | 0x80000000;
    }
  }
  return 0;
}

