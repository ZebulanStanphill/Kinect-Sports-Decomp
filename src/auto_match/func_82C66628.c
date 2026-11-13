extern int fn_82C4E3B0();
extern int fn_82C4E470();
extern int fn_82C4E5E8();


unsigned __int64 fn_82C66628(int param_1,int *param_2,int param_3,short *param_4,int param_5)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned char bVar3;
  unsigned char bVar4;
  unsigned char bVar5;
  char cVar6;
  unsigned char bVar7;
  short sVar8;
  int iVar9;
  int iVar10;
  unsigned int uVar11;
  int iVar12;
  int *piVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  unsigned __int64 *puVar17;
  __int64 *plVar18;
  unsigned int uVar19;
  unsigned char *pbVar20;
  int iVar21;
  int iVar22;
  __int64 lVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  __int64 lVar27;
  unsigned __int64 uVar28;
  unsigned __int64 uVar29;
  unsigned __int64 uVar30;
  unsigned __int64 uVar31;
  unsigned __int64 uVar32;
  unsigned __int64 uVar33;
  int iVar34;
  
  param_2 = (int *)*param_2;
  iVar9 = *(int *)(param_1 + 0x13c);
  iVar10 = *(int *)(param_1 + 0x140);
  uVar29 = 0;
  lVar27 = 1;
  uVar11 = param_2[10];
  iVar22 = param_2[3];
  iVar24 = param_2[4];
  iVar26 = param_2[5];
  iVar12 = param_2[6];
  piVar13 = (int *)*param_2;
  iVar14 = param_2[7];
  uVar28 = (unsigned __int64)(unsigned int)param_2[2] + 1;
  iVar15 = param_2[8];
  iVar16 = param_2[1];
  if (param_3 != 0) {
    do {
      puVar17 = *(unsigned __int64 **)(param_1 + 0x54);
      if (piVar13 == (int *)0x0) {
        uVar31 = 0;
        *(unsigned int *)((int)puVar17 + 0x14) = 3;
      }
      else {
        iVar34 = *piVar13;
        sVar8 = *(short *)((int)((*puVar17 >> (0x40 - (unsigned __int64)*(unsigned char *)(piVar13 + 2) & 0x7f) &
                                 0xffffffff) << 1) + iVar34);
        uVar31 = (unsigned __int64)sVar8;
        if (sVar8 < 0) {
          fn_82C4E470(puVar17);
          do {
            uVar30 = *puVar17;
            fn_82C4E470(puVar17,1);
            sVar8 = *(short *)((int)(((uVar31 - ((__int64)uVar30 >> 0x3f)) + 0x8000 & 0xffffffff)
                                    << 1) + iVar34);
            uVar31 = (unsigned __int64)sVar8;
          } while (sVar8 < 0);
        }
        else {
          iVar34 = *(int *)(puVar17 + 1);
          iVar25 = (int)(uVar31 & 0xf);
          *puVar17 = *puVar17 << (uVar31 & 0xf);
          *(int *)(puVar17 + 1) = iVar34 - iVar25;
          if (iVar34 < iVar25) {
            do {
              pbVar20 = *(unsigned char **)((int)puVar17 + 0xc);
              if (pbVar20 < (unsigned char *)(*(int *)(puVar17 + 2) - 4U)) {
                bVar7 = *pbVar20;
                bVar1 = pbVar20[1];
                bVar2 = pbVar20[2];
                bVar3 = pbVar20[3];
                bVar4 = pbVar20[4];
                bVar5 = pbVar20[5];
                iVar34 = *(int *)(puVar17 + 1);
                *(unsigned char **)((int)puVar17 + 0xc) = pbVar20 + 6;
                *(int *)(puVar17 + 1) = iVar34 + 0x30;
                *puVar17 = ((((((unsigned __int64)bVar7 * 0x100 + (unsigned __int64)bVar1) * 0x100 +
                              (unsigned __int64)bVar2) * 0x100 + (unsigned __int64)bVar3) * 0x100 +
                            (unsigned __int64)bVar4) * 0x100 + (unsigned __int64)bVar5 <<
                           ((__int64)-iVar34 & 0x7fU)) + *puVar17;
                goto LAB_82c667a4;
              }
              iVar34 = fn_82C4E3B0(puVar17);
            } while (iVar34 == 1);
            uVar31 = (unsigned __int64)((int)sVar8 >> 4);
          }
          else {
LAB_82c667a4:
            uVar31 = (unsigned __int64)((int)sVar8 >> 4);
          }
        }
      }
      plVar18 = *(__int64 **)(param_1 + 0x54);
      uVar31 = uVar31 & 0xff;
      if (*(int *)((int)plVar18 + 0x14) != 0) {
        return 1;
      }
      iVar34 = (int)uVar31;
      if (iVar16 < iVar34) {
        return 1;
      }
      if (iVar34 == iVar16) {
        lVar23 = *plVar18;
        uVar19 = *(unsigned int *)(plVar18 + 1);
        *plVar18 = lVar23 << 1;
        *(int *)(plVar18 + 1) = (int)((unsigned __int64)uVar19 - 1);
        if ((__int64)((unsigned __int64)uVar19 - 1) < 0) {
          fn_82C4E5E8();
        }
        if (lVar23 < 0) {
          plVar18 = *(__int64 **)(param_1 + 0x54);
          lVar23 = *plVar18;
          uVar19 = *(unsigned int *)(plVar18 + 1);
          *plVar18 = lVar23 << 1;
          *(int *)(plVar18 + 1) = (int)((unsigned __int64)uVar19 - 1);
          if ((__int64)((unsigned __int64)uVar19 - 1) < 0) {
            fn_82C4E5E8();
          }
          if (lVar23 < 0) {
            puVar17 = *(unsigned __int64 **)(param_1 + 0x54);
            uVar19 = *(unsigned int *)(puVar17 + 1);
            uVar29 = *puVar17 >> 0x3f;
            *puVar17 = *puVar17 << 1;
            *(int *)(puVar17 + 1) = (int)((unsigned __int64)uVar19 - 1);
            if ((__int64)((unsigned __int64)uVar19 - 1) < 0) {
              fn_82C4E5E8();
            }
            puVar17 = *(unsigned __int64 **)(param_1 + 0x54);
            uVar32 = 6;
            lVar23 = 0;
            uVar31 = (unsigned __int64)*(unsigned int *)(puVar17 + 1);
            uVar30 = uVar31 + 0x10;
            if ((uVar30 & 0xffffffff) < 6) {
              do {
                if ((uVar30 & 0xffffffff) == 0) break;
                uVar32 = uVar32 - uVar30;
                *(int *)(puVar17 + 1) = (int)(uVar31 - uVar30);
                lVar23 = (unsigned __int64)
                         (unsigned int)((int)(*puVar17 >> (0x40 - uVar30 & 0x7f)) << ((unsigned int)uVar32 & 0x3f))
                         + lVar23;
                *puVar17 = *puVar17 << (uVar30 & 0x7f);
                if ((__int64)(uVar31 - uVar30) < 0) {
                  fn_82C4E5E8(puVar17);
                }
                uVar31 = (unsigned __int64)*(unsigned int *)(puVar17 + 1);
                uVar30 = uVar31 + 0x10;
              } while ((uVar30 & 0xffffffff) < (uVar32 & 0xffffffff));
            }
            *(int *)(puVar17 + 1) = (int)(uVar31 - uVar32);
            uVar30 = (*puVar17 >> (0x40 - uVar32 & 0x7f) & 0xffffffff) + lVar23;
            *puVar17 = *puVar17 << (uVar32 & 0x7f);
            if ((__int64)(uVar31 - uVar32) < 0) {
              fn_82C4E5E8(puVar17);
            }
            plVar18 = *(__int64 **)(param_1 + 0x54);
            uVar19 = *(unsigned int *)(plVar18 + 1);
            *plVar18 = *plVar18 << 1;
            *(int *)(plVar18 + 1) = (int)((unsigned __int64)uVar19 - 1);
            if ((__int64)((unsigned __int64)uVar19 - 1) < 0) {
              fn_82C4E5E8();
            }
            puVar17 = *(unsigned __int64 **)(param_1 + 0x54);
            uVar33 = 0xc;
            iVar34 = 0;
            uVar31 = (unsigned __int64)*(unsigned int *)(puVar17 + 1);
            uVar32 = uVar31 + 0x10;
            iVar25 = 0;
            if ((uVar32 & 0xffffffff) < 0xc) {
              do {
                iVar34 = iVar25;
                if ((uVar32 & 0xffffffff) == 0) break;
                uVar33 = uVar33 - uVar32;
                *(int *)(puVar17 + 1) = (int)(uVar31 - uVar32);
                iVar34 = ((int)(*puVar17 >> (0x40 - uVar32 & 0x7f)) << ((unsigned int)uVar33 & 0x3f)) +
                         iVar34;
                *puVar17 = *puVar17 << (uVar32 & 0x7f);
                if ((__int64)(uVar31 - uVar32) < 0) {
                  fn_82C4E5E8(puVar17);
                }
                uVar31 = (unsigned __int64)*(unsigned int *)(puVar17 + 1);
                uVar32 = uVar31 + 0x10;
                iVar25 = iVar34;
              } while ((uVar32 & 0xffffffff) < (uVar33 & 0xffffffff));
            }
            *(int *)(puVar17 + 1) = (int)(uVar31 - uVar33);
            iVar34 = (int)(*puVar17 >> (0x40 - uVar33 & 0x7f)) + iVar34;
            *puVar17 = *puVar17 << (uVar33 & 0x7f);
            if ((__int64)(uVar31 - uVar33) < 0) {
              fn_82C4E5E8(puVar17);
            }
            if (0x7ff < iVar34) {
              iVar34 = iVar34 + -0x1000;
            }
            plVar18 = *(__int64 **)(param_1 + 0x54);
            uVar19 = *(unsigned int *)(plVar18 + 1);
            *plVar18 = *plVar18 << 1;
            *(int *)(plVar18 + 1) = (int)((unsigned __int64)uVar19 - 1);
            if ((__int64)((unsigned __int64)uVar19 - 1) < 0) {
              fn_82C4E5E8();
            }
          }
          else {
            puVar17 = *(unsigned __int64 **)(param_1 + 0x54);
            if (*(int *)((int)puVar17 + 0x14) != 0) {
              return 1;
            }
            if (piVar13 == (int *)0x0) {
              uVar31 = 0;
              *(unsigned int *)((int)puVar17 + 0x14) = 3;
            }
            else {
              iVar34 = *piVar13;
              sVar8 = *(short *)((int)((*puVar17 >>
                                        (0x40 - (unsigned __int64)*(unsigned char *)(piVar13 + 2) & 0x7f) &
                                       0xffffffff) << 1) + iVar34);
              uVar31 = (unsigned __int64)sVar8;
              if (sVar8 < 0) {
                fn_82C4E470(puVar17);
                do {
                  uVar30 = *puVar17;
                  fn_82C4E470(puVar17,1);
                  sVar8 = *(short *)((int)(((uVar31 - ((__int64)uVar30 >> 0x3f)) + 0x8000 &
                                           0xffffffff) << 1) + iVar34);
                  uVar31 = (unsigned __int64)sVar8;
                } while (sVar8 < 0);
              }
              else {
                iVar34 = *(int *)(puVar17 + 1);
                iVar25 = (int)(uVar31 & 0xf);
                *puVar17 = *puVar17 << (uVar31 & 0xf);
                *(int *)(puVar17 + 1) = iVar34 - iVar25;
                if (iVar34 < iVar25) {
                  do {
                    pbVar20 = *(unsigned char **)((int)puVar17 + 0xc);
                    if (pbVar20 < (unsigned char *)(*(int *)(puVar17 + 2) - 4U)) {
                      bVar7 = *pbVar20;
                      bVar1 = pbVar20[1];
                      bVar2 = pbVar20[2];
                      bVar3 = pbVar20[3];
                      bVar4 = pbVar20[4];
                      bVar5 = pbVar20[5];
                      iVar34 = *(int *)(puVar17 + 1);
                      *(unsigned char **)((int)puVar17 + 0xc) = pbVar20 + 6;
                      *(int *)(puVar17 + 1) = iVar34 + 0x30;
                      *puVar17 = ((((((unsigned __int64)bVar1 + (unsigned __int64)bVar7 * 0x100) * 0x100 +
                                    (unsigned __int64)bVar2) * 0x100 + (unsigned __int64)bVar3) * 0x100 +
                                  (unsigned __int64)bVar4) * 0x100 + (unsigned __int64)bVar5 <<
                                 ((__int64)-iVar34 & 0x7fU)) + *puVar17;
                      goto LAB_82c66b9c;
                    }
                    iVar34 = fn_82C4E3B0(puVar17);
                  } while (iVar34 == 1);
                  uVar31 = (unsigned __int64)((int)sVar8 >> 4);
                }
                else {
LAB_82c66b9c:
                  uVar31 = (unsigned __int64)((int)sVar8 >> 4);
                }
              }
            }
            plVar18 = *(__int64 **)(param_1 + 0x54);
            uVar31 = uVar31 & 0xff;
            if (*(int *)((int)plVar18 + 0x14) != 0) {
              return 1;
            }
            iVar25 = (int)uVar31;
            if (iVar25 == iVar16) {
              return 1;
            }
            if (uVar11 <= uVar31) {
              return 1;
            }
            cVar6 = *(char *)(iVar25 + iVar14);
            iVar34 = (int)cVar6;
            iVar21 = iVar26;
            if ((uVar28 & 0xffffffff) <= uVar31) {
              uVar29 = 1;
              iVar21 = iVar12;
            }
            uVar19 = *(unsigned int *)(plVar18 + 1);
            lVar23 = *plVar18;
            uVar30 = (unsigned __int64)*(unsigned char *)(cVar6 + iVar21) + (unsigned __int64)*(unsigned char *)(iVar25 + iVar15) +
                     1;
            *plVar18 = lVar23 << 1;
            *(int *)(plVar18 + 1) = (int)((unsigned __int64)uVar19 - 1);
            if ((__int64)((unsigned __int64)uVar19 - 1) < 0) {
              fn_82C4E5E8();
            }
            if (lVar23 < 0) {
              iVar34 = -(int)cVar6;
            }
          }
        }
        else {
          puVar17 = *(unsigned __int64 **)(param_1 + 0x54);
          if (*(int *)((int)puVar17 + 0x14) != 0) {
            return 1;
          }
          if (piVar13 == (int *)0x0) {
            uVar31 = 0;
            *(unsigned int *)((int)puVar17 + 0x14) = 3;
          }
          else {
            iVar34 = *piVar13;
            sVar8 = *(short *)((int)((*puVar17 >> (0x40 - (unsigned __int64)*(unsigned char *)(piVar13 + 2) & 0x7f)
                                     & 0xffffffff) << 1) + iVar34);
            uVar31 = (unsigned __int64)sVar8;
            if (sVar8 < 0) {
              fn_82C4E470(puVar17);
              do {
                uVar30 = *puVar17;
                fn_82C4E470(puVar17,1);
                sVar8 = *(short *)((int)(((uVar31 - ((__int64)uVar30 >> 0x3f)) + 0x8000 &
                                         0xffffffff) << 1) + iVar34);
                uVar31 = (unsigned __int64)sVar8;
              } while (sVar8 < 0);
            }
            else {
              iVar34 = *(int *)(puVar17 + 1);
              iVar25 = (int)(uVar31 & 0xf);
              *puVar17 = *puVar17 << (uVar31 & 0xf);
              *(int *)(puVar17 + 1) = iVar34 - iVar25;
              if (iVar34 < iVar25) {
                do {
                  pbVar20 = *(unsigned char **)((int)puVar17 + 0xc);
                  if (pbVar20 < (unsigned char *)(*(int *)(puVar17 + 2) - 4U)) {
                    bVar7 = *pbVar20;
                    bVar1 = pbVar20[1];
                    bVar2 = pbVar20[2];
                    bVar3 = pbVar20[3];
                    bVar4 = pbVar20[4];
                    bVar5 = pbVar20[5];
                    iVar34 = *(int *)(puVar17 + 1);
                    *(unsigned char **)((int)puVar17 + 0xc) = pbVar20 + 6;
                    *(int *)(puVar17 + 1) = iVar34 + 0x30;
                    *puVar17 = ((((((unsigned __int64)bVar1 + (unsigned __int64)bVar7 * 0x100) * 0x100 +
                                  (unsigned __int64)bVar2) * 0x100 + (unsigned __int64)bVar3) * 0x100 +
                                (unsigned __int64)bVar4) * 0x100 + (unsigned __int64)bVar5 <<
                               ((__int64)-iVar34 & 0x7fU)) + *puVar17;
                    goto LAB_82c66998;
                  }
                  iVar34 = fn_82C4E3B0(puVar17);
                } while (iVar34 == 1);
                uVar31 = (unsigned __int64)((int)sVar8 >> 4);
              }
              else {
LAB_82c66998:
                uVar31 = (unsigned __int64)((int)sVar8 >> 4);
              }
            }
          }
          plVar18 = *(__int64 **)(param_1 + 0x54);
          uVar31 = uVar31 & 0xff;
          if (*(int *)((int)plVar18 + 0x14) != 0) {
            return 1;
          }
          iVar34 = (int)uVar31;
          if (iVar34 == iVar16) {
            return 1;
          }
          if (uVar11 <= uVar31) {
            return 1;
          }
          uVar30 = (unsigned __int64)*(unsigned char *)(iVar34 + iVar15);
          iVar25 = iVar22;
          if ((uVar28 & 0xffffffff) <= uVar31) {
            uVar29 = 1;
            iVar25 = iVar24;
          }
          uVar19 = *(unsigned int *)(plVar18 + 1);
          iVar34 = (int)*(char *)((unsigned int)*(unsigned char *)(iVar34 + iVar15) + iVar25) +
                   (int)*(char *)(iVar34 + iVar14);
          lVar23 = *plVar18;
          *(int *)(plVar18 + 1) = (int)((unsigned __int64)uVar19 - 1);
          *plVar18 = lVar23 << 1;
          if ((__int64)((unsigned __int64)uVar19 - 1) < 0) {
            fn_82C4E5E8();
          }
          if (lVar23 < 0) {
            iVar34 = -iVar34;
          }
        }
      }
      else {
        if (uVar11 <= uVar31) {
          return 1;
        }
        lVar23 = *plVar18;
        uVar19 = *(unsigned int *)(plVar18 + 1);
        uVar30 = (unsigned __int64)*(unsigned char *)(iVar34 + iVar15);
        uVar29 = -((unsigned __int64)(uVar31 < uVar28) - 1);
        *plVar18 = lVar23 << 1;
        *(int *)(plVar18 + 1) = (int)((unsigned __int64)uVar19 - 1);
        if ((__int64)((unsigned __int64)uVar19 - 1) < 0) {
          fn_82C4E5E8();
        }
        if (lVar23 < 0) {
          iVar34 = -(int)*(char *)(iVar34 + iVar14);
        }
        else {
          iVar34 = (int)*(char *)(iVar34 + iVar14);
        }
      }
      if (*(int *)(*(int *)(param_1 + 0x54) + 0x14) != 0) {
        return 1;
      }
      uVar30 = uVar30 + lVar27;
      if (0x3f < (uVar30 & 0xffffffff)) {
        return 1;
      }
      bVar7 = *(unsigned char *)((int)uVar30 + param_5);
      if ((bVar7 & 0xf8) == 0) {
        param_4[bVar7] = param_4[bVar7] + (short)iVar34;
      }
      else if ((bVar7 & 7) == 0) {
        iVar25 = (*(unsigned char *)((int)uVar30 + param_5) >> 3) + 8;
        param_4[iVar25] = param_4[iVar25] + (short)iVar34;
      }
      else if (iVar34 < 1) {
        *(int *)((unsigned int)bVar7 * 4 + *(int *)(param_1 + 0x6e4)) = iVar34 * iVar9 - iVar10;
      }
      else {
        *(int *)((unsigned int)bVar7 * 4 + *(int *)(param_1 + 0x6e4)) = iVar34 * iVar9 + iVar10;
      }
      lVar27 = uVar30 + 1;
    } while ((int)uVar29 == 0);
  }
  iVar22 = 0x20;
  iVar24 = 4;
  lVar27 = 7;
  do {
    sVar8 = param_4[1];
    iVar26 = (int)sVar8;
    if (iVar26 == 0) {
      *(unsigned int *)(iVar24 + *(int *)(param_1 + 0x6e4)) = 0;
    }
    else if (iVar26 < 1) {
      *(int *)(iVar24 + *(int *)(param_1 + 0x6e4)) = iVar26 * iVar9 - iVar10;
    }
    else {
      *(int *)(iVar24 + *(int *)(param_1 + 0x6e4)) = sVar8 * iVar9 + iVar10;
    }
    iVar26 = (int)param_4[9];
    if (iVar26 == 0) {
      *(unsigned int *)(iVar22 + *(int *)(param_1 + 0x6e4)) = 0;
    }
    else if (iVar26 < 1) {
      *(int *)(iVar22 + *(int *)(param_1 + 0x6e4)) = iVar26 * iVar9 - iVar10;
    }
    else {
      *(int *)(iVar22 + *(int *)(param_1 + 0x6e4)) = param_4[9] * iVar9 + iVar10;
    }
    iVar24 = iVar24 + 4;
    iVar22 = iVar22 + 0x20;
    lVar27 = lVar27 + -1;
    param_4 = param_4 + 1;
  } while (lVar27 != 0);
  return 0;
}

