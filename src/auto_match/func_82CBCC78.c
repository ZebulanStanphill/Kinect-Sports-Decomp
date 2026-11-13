#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_82C4E3B0();
extern int fn_82C4E470();
extern int fn_82C4E5E8();
extern int fn_82CAF880();


unsigned __int64 fn_82CBCC78(int param_1,unsigned int *param_2,int param_3,int param_4,int param_5,int *param_6)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned char bVar3;
  unsigned char bVar4;
  unsigned char bVar5;
  unsigned char bVar6;
  short sVar7;
  int *piVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  unsigned __int64 *puVar11;
  int iVar12;
  int iVar13;
  unsigned char *pbVar14;
  unsigned int uVar15;
  unsigned __int64 *puVar16;
  __int64 *plVar17;
  int iVar19;
  __int64 lVar18;
  unsigned __int64 uVar20;
  int iVar21;
  unsigned int uVar22;
  unsigned __int64 uVar23;
  char cVar24;
  unsigned __int64 uVar25;
  unsigned __int64 uVar26;
  
  piVar8 = (int *)*param_2;
  uVar25 = ZEXT48(piVar8);
  uVar22 = param_2[1];
  uVar9 = param_2[7];
  uVar10 = param_2[8];
  puVar11 = *(unsigned __int64 **)(param_1 + 0x54);
  iVar12 = *(int *)(param_1 + 0x13c);
  uVar23 = (unsigned __int64)param_2[2] + 1;
  iVar13 = *(int *)(param_1 + 0x140);
  if (param_5 == 0) {
    uVar20 = *puVar11;
    uVar15 = *(unsigned int *)(puVar11 + 1);
    *puVar11 = uVar20 << 1;
    *(int *)(puVar11 + 1) = (int)((unsigned __int64)uVar15 - 1);
    if ((__int64)((unsigned __int64)uVar15 - 1) < 0) {
      fn_82C4E5E8(puVar11);
    }
    if ((__int64)uVar20 < 0) {
      if (uVar25 == 0) {
        *(unsigned int *)((int)puVar11 + 0x14) = 3;
      }
      else {
        iVar19 = *piVar8;
        sVar7 = *(short *)((int)((*puVar11 >> (0x40 - (unsigned __int64)*(unsigned char *)(piVar8 + 2) & 0x7f) &
                                 0xffffffff) << 1) + iVar19);
        uVar25 = (unsigned __int64)sVar7;
        if (sVar7 < 0) {
          fn_82C4E470(puVar11);
          do {
            uVar20 = *puVar11;
            fn_82C4E470(puVar11,1);
            sVar7 = *(short *)((int)(((uVar25 - ((__int64)uVar20 >> 0x3f)) + 0x8000 & 0xffffffff)
                                    << 1) + iVar19);
            uVar25 = (unsigned __int64)sVar7;
          } while (sVar7 < 0);
        }
        else {
          iVar19 = *(int *)(puVar11 + 1);
          iVar21 = (int)(uVar25 & 0xf);
          *(int *)(puVar11 + 1) = iVar19 - iVar21;
          *puVar11 = *puVar11 << (uVar25 & 0xf);
          if (iVar19 < iVar21) {
            do {
              pbVar14 = *(unsigned char **)((int)puVar11 + 0xc);
              if (pbVar14 < (unsigned char *)(*(int *)(puVar11 + 2) - 4U)) {
                bVar6 = *pbVar14;
                bVar1 = pbVar14[1];
                bVar2 = pbVar14[2];
                bVar3 = pbVar14[3];
                bVar4 = pbVar14[4];
                bVar5 = pbVar14[5];
                iVar19 = *(int *)(puVar11 + 1);
                *(unsigned char **)((int)puVar11 + 0xc) = pbVar14 + 6;
                *(int *)(puVar11 + 1) = iVar19 + 0x30;
                *puVar11 = ((((((unsigned __int64)bVar1 + (unsigned __int64)bVar6 * 0x100) * 0x100 +
                              (unsigned __int64)bVar2) * 0x100 + (unsigned __int64)bVar3) * 0x100 +
                            (unsigned __int64)bVar4) * 0x100 + (unsigned __int64)bVar5 <<
                           ((__int64)-iVar19 & 0x7fU)) + *puVar11;
                goto LAB_82cbcfac;
              }
              iVar19 = fn_82C4E3B0(puVar11);
            } while (iVar19 == 1);
            uVar25 = (unsigned __int64)((int)sVar7 >> 4);
          }
          else {
LAB_82cbcfac:
            uVar25 = (unsigned __int64)((int)sVar7 >> 4);
          }
        }
      }
      if ((uVar25 & 0xffffffff) == (unsigned __int64)uVar22) {
        return 0xffffffffffffffff;
      }
      uVar20 = *puVar11;
      uVar22 = *(unsigned int *)(puVar11 + 1);
      cVar24 = *(char *)((int)uVar25 + uVar9);
      bVar6 = *(unsigned char *)((int)uVar25 + uVar10);
      *puVar11 = uVar20 << 1;
      uVar9 = (unsigned int)((__int64)uVar20 >> 0x3f);
      *(int *)(puVar11 + 1) = (int)((unsigned __int64)uVar22 - 1);
      if ((__int64)((unsigned __int64)uVar22 - 1) < 0) {
        fn_82C4E5E8(puVar11);
      }
      if ((uVar25 & 0xffffffff) < (uVar23 & 0xffffffff)) {
        uVar22 = param_2[5];
      }
      else {
        uVar22 = param_2[6];
      }
      uVar22 = (unsigned int)*(unsigned char *)(uVar22 + (int)cVar24) + *(int *)(param_1 + 0x790) + (unsigned int)bVar6;
      iVar19 = ((int)cVar24 ^ uVar9) - uVar9;
    }
    else {
      uVar25 = *puVar11;
      uVar22 = *(unsigned int *)(puVar11 + 1);
      *puVar11 = uVar25 << 1;
      *(int *)(puVar11 + 1) = (int)((unsigned __int64)uVar22 - 1);
      if ((__int64)((unsigned __int64)uVar22 - 1) < 0) {
        fn_82C4E5E8(puVar11);
      }
      uVar25 = -(unsigned __int64)((__int64)uVar25 < 0) & uVar23;
      if (*(int *)(param_1 + 0x3cb0) < 4) {
        uVar23 = (unsigned __int64)*(unsigned int *)(puVar11 + 1);
        uVar26 = 6;
        iVar21 = 0;
        uVar20 = uVar23 + 0x10;
        iVar19 = 0;
        if ((uVar20 & 0xffffffff) < 6) {
          do {
            iVar21 = iVar19;
            if ((uVar20 & 0xffffffff) == 0) break;
            uVar26 = uVar26 - uVar20;
            *(int *)(puVar11 + 1) = (int)(uVar23 - uVar20);
            iVar21 = ((int)(*puVar11 >> (0x40 - uVar20 & 0x7f)) << ((unsigned int)uVar26 & 0x3f)) + iVar21;
            *puVar11 = *puVar11 << (uVar20 & 0x7f);
            if ((__int64)(uVar23 - uVar20) < 0) {
              fn_82C4E5E8(puVar11);
            }
            uVar23 = (unsigned __int64)*(unsigned int *)(puVar11 + 1);
            uVar20 = uVar23 + 0x10;
            iVar19 = iVar21;
          } while ((uVar20 & 0xffffffff) < (uVar26 & 0xffffffff));
        }
        *(int *)(puVar11 + 1) = (int)(uVar23 - uVar26);
        uVar22 = (int)(*puVar11 >> (0x40 - uVar26 & 0x7f)) + iVar21;
        *puVar11 = *puVar11 << (uVar26 & 0x7f);
        if ((__int64)(uVar23 - uVar26) < 0) {
          fn_82C4E5E8(puVar11);
        }
        uVar23 = (unsigned __int64)*(unsigned int *)(puVar11 + 1);
        uVar26 = 8;
        uVar20 = uVar23 + 0x10;
        iVar19 = 0;
        cVar24 = '\0';
        if ((uVar20 & 0xffffffff) < 8) {
          do {
            cVar24 = (char)iVar19;
            if ((uVar20 & 0xffffffff) == 0) break;
            uVar26 = uVar26 - uVar20;
            *(int *)(puVar11 + 1) = (int)(uVar23 - uVar20);
            iVar19 = ((int)(*puVar11 >> (0x40 - uVar20 & 0x7f)) << ((unsigned int)uVar26 & 0x3f)) + iVar19;
            cVar24 = (char)iVar19;
            *puVar11 = *puVar11 << (uVar20 & 0x7f);
            if ((__int64)(uVar23 - uVar20) < 0) {
              fn_82C4E5E8(puVar11);
            }
            uVar23 = (unsigned __int64)*(unsigned int *)(puVar11 + 1);
            uVar20 = uVar23 + 0x10;
          } while ((uVar20 & 0xffffffff) < (uVar26 & 0xffffffff));
        }
        uVar20 = *puVar11;
        *(int *)(puVar11 + 1) = (int)(uVar23 - uVar26);
        *puVar11 = uVar20 << (uVar26 & 0x7f);
        if ((__int64)(uVar23 - uVar26) < 0) {
          fn_82C4E5E8(puVar11);
        }
        iVar19 = (int)(char)((char)(uVar20 >> (0x40 - uVar26 & 0x7f)) + cVar24);
      }
      else {
        if (*(int *)(param_1 + 0x79c) != 0) {
          fn_82CAF880(param_1);
          *(unsigned int *)(param_1 + 0x79c) = 0;
        }
        puVar16 = *(unsigned __int64 **)(param_1 + 0x54);
        iVar19 = 0;
        uVar26 = (unsigned __int64)*(unsigned int *)(param_1 + 0x7a4);
        uVar23 = (unsigned __int64)*(unsigned int *)(puVar16 + 1);
        uVar20 = uVar23 + 0x10;
        if (uVar26 < 0x21) {
          if (uVar26 == 0) {
            uVar22 = 0;
          }
          else {
            iVar21 = 0;
            if ((uVar20 & 0xffffffff) < uVar26) {
              do {
                iVar19 = iVar21;
                if ((uVar20 & 0xffffffff) == 0) break;
                uVar26 = uVar26 - uVar20;
                *(int *)(puVar16 + 1) = (int)(uVar23 - uVar20);
                iVar19 = ((int)(*puVar16 >> (0x40 - uVar20 & 0x7f)) << ((unsigned int)uVar26 & 0x3f)) +
                         iVar19;
                *puVar16 = *puVar16 << (uVar20 & 0x7f);
                if ((__int64)(uVar23 - uVar20) < 0) {
                  fn_82C4E5E8(puVar16);
                }
                uVar23 = (unsigned __int64)*(unsigned int *)(puVar16 + 1);
                uVar20 = uVar23 + 0x10;
                iVar21 = iVar19;
              } while ((uVar20 & 0xffffffff) < (uVar26 & 0xffffffff));
            }
            *(int *)(puVar16 + 1) = (int)(uVar23 - uVar26);
            uVar22 = (int)(*puVar16 >> (0x40 - uVar26 & 0x7f)) + iVar19;
            *puVar16 = *puVar16 << (uVar26 & 0x7f);
            if ((__int64)(uVar23 - uVar26) < 0) {
              fn_82C4E5E8(puVar16);
            }
          }
        }
        else {
          uVar22 = 0;
        }
        plVar17 = *(__int64 **)(param_1 + 0x54);
        lVar18 = *plVar17;
        uVar9 = *(unsigned int *)(plVar17 + 1);
        *plVar17 = lVar18 << 1;
        *(int *)(plVar17 + 1) = (int)((unsigned __int64)uVar9 - 1);
        if ((__int64)((unsigned __int64)uVar9 - 1) < 0) {
          fn_82C4E5E8();
        }
        puVar16 = *(unsigned __int64 **)(param_1 + 0x54);
        uVar26 = (unsigned __int64)*(unsigned int *)(param_1 + 0x7a0);
        iVar19 = 0;
        uVar23 = (unsigned __int64)*(unsigned int *)(puVar16 + 1);
        uVar20 = uVar23 + 0x10;
        if (lVar18 < 0) {
          if (uVar26 < 0x21) {
            if (uVar26 == 0) {
              iVar19 = 0;
            }
            else {
              if ((uVar20 & 0xffffffff) < uVar26) {
                do {
                  if ((uVar20 & 0xffffffff) == 0) break;
                  uVar26 = uVar26 - uVar20;
                  *(int *)(puVar16 + 1) = (int)(uVar23 - uVar20);
                  iVar19 = ((int)(*puVar16 >> (0x40 - uVar20 & 0x7f)) << ((unsigned int)uVar26 & 0x3f)) +
                           iVar19;
                  *puVar16 = *puVar16 << (uVar20 & 0x7f);
                  if ((__int64)(uVar23 - uVar20) < 0) {
                    fn_82C4E5E8(puVar16);
                  }
                  uVar23 = (unsigned __int64)*(unsigned int *)(puVar16 + 1);
                  uVar20 = uVar23 + 0x10;
                } while ((uVar20 & 0xffffffff) < (uVar26 & 0xffffffff));
              }
              uVar20 = *puVar16;
              *(int *)(puVar16 + 1) = (int)(uVar23 - uVar26);
              *puVar16 = uVar20 << (uVar26 & 0x7f);
              if ((__int64)(uVar23 - uVar26) < 0) {
                fn_82C4E5E8(puVar16);
              }
              iVar19 = -((int)(uVar20 >> (0x40 - uVar26 & 0x7f)) + iVar19);
            }
          }
          else {
            iVar19 = 0;
          }
        }
        else if (uVar26 < 0x21) {
          if (uVar26 == 0) {
            iVar19 = 0;
          }
          else {
            if ((uVar20 & 0xffffffff) < uVar26) {
              do {
                if ((uVar20 & 0xffffffff) == 0) break;
                uVar26 = uVar26 - uVar20;
                *(int *)(puVar16 + 1) = (int)(uVar23 - uVar20);
                iVar19 = ((int)(*puVar16 >> (0x40 - uVar20 & 0x7f)) << ((unsigned int)uVar26 & 0x3f)) +
                         iVar19;
                *puVar16 = *puVar16 << (uVar20 & 0x7f);
                if ((__int64)(uVar23 - uVar20) < 0) {
                  fn_82C4E5E8(puVar16);
                }
                uVar23 = (unsigned __int64)*(unsigned int *)(puVar16 + 1);
                uVar20 = uVar23 + 0x10;
              } while ((uVar20 & 0xffffffff) < (uVar26 & 0xffffffff));
            }
            *(int *)(puVar16 + 1) = (int)(uVar23 - uVar26);
            iVar19 = (int)(*puVar16 >> (0x40 - uVar26 & 0x7f)) + iVar19;
            *puVar16 = *puVar16 << (uVar26 & 0x7f);
            if ((__int64)(uVar23 - uVar26) < 0) {
              fn_82C4E5E8(puVar16);
            }
          }
        }
        else {
          iVar19 = 0;
        }
      }
    }
  }
  else {
    if (uVar25 == 0) {
      *(unsigned int *)((int)puVar11 + 0x14) = 3;
    }
    else {
      iVar19 = *piVar8;
      sVar7 = *(short *)((int)((*puVar11 >> (0x40 - (unsigned __int64)*(unsigned char *)(piVar8 + 2) & 0x7f) &
                               0xffffffff) << 1) + iVar19);
      uVar25 = (unsigned __int64)sVar7;
      if (sVar7 < 0) {
        fn_82C4E470(puVar11);
        do {
          uVar20 = *puVar11;
          fn_82C4E470(puVar11,1);
          sVar7 = *(short *)((int)(((uVar25 - ((__int64)uVar20 >> 0x3f)) + 0x8000 & 0xffffffff) <<
                                  1) + iVar19);
          uVar25 = (unsigned __int64)sVar7;
        } while (sVar7 < 0);
      }
      else {
        iVar19 = *(int *)(puVar11 + 1);
        iVar21 = (int)(uVar25 & 0xf);
        *puVar11 = *puVar11 << (uVar25 & 0xf);
        *(int *)(puVar11 + 1) = iVar19 - iVar21;
        if (iVar19 < iVar21) {
          do {
            pbVar14 = *(unsigned char **)((int)puVar11 + 0xc);
            if (pbVar14 < (unsigned char *)(*(int *)(puVar11 + 2) - 4U)) {
              bVar6 = *pbVar14;
              bVar1 = pbVar14[1];
              bVar2 = pbVar14[2];
              bVar3 = pbVar14[3];
              bVar4 = pbVar14[4];
              bVar5 = pbVar14[5];
              iVar19 = *(int *)(puVar11 + 1);
              *(unsigned char **)((int)puVar11 + 0xc) = pbVar14 + 6;
              *(int *)(puVar11 + 1) = iVar19 + 0x30;
              *puVar11 = ((((((unsigned __int64)bVar6 * 0x100 + (unsigned __int64)bVar1) * 0x100 +
                            (unsigned __int64)bVar2) * 0x100 + (unsigned __int64)bVar3) * 0x100 + (unsigned __int64)bVar4
                          ) * 0x100 + (unsigned __int64)bVar5 << ((__int64)-iVar19 & 0x7fU)) + *puVar11;
              goto LAB_82cbcdbc;
            }
            iVar19 = fn_82C4E3B0(puVar11);
          } while (iVar19 == 1);
          uVar25 = (unsigned __int64)((int)sVar7 >> 4);
        }
        else {
LAB_82cbcdbc:
          uVar25 = (unsigned __int64)((int)sVar7 >> 4);
        }
      }
    }
    if ((uVar25 & 0xffffffff) == (unsigned __int64)uVar22) {
      return 0xffffffffffffffff;
    }
    uVar22 = *(unsigned int *)(puVar11 + 1);
    uVar15 = (unsigned int)((__int64)*puVar11 >> 0x3f);
    *puVar11 = *puVar11 << 1;
    *(int *)(puVar11 + 1) = (int)((unsigned __int64)uVar22 - 1);
    if ((__int64)((unsigned __int64)uVar22 - 1) < 0) {
      fn_82C4E5E8(puVar11);
    }
    bVar6 = *(unsigned char *)((int)uVar25 + uVar10);
    uVar22 = (unsigned int)bVar6;
    if ((uVar25 & 0xffffffff) < (uVar23 & 0xffffffff)) {
      uVar10 = param_2[3];
    }
    else {
      uVar10 = param_2[4];
    }
    iVar19 = ((int)*(char *)(uVar10 + bVar6) + (int)*(char *)((int)uVar25 + uVar9) ^ uVar15) -
             uVar15;
  }
  if (*(int *)((int)puVar11 + 0x14) != 0) {
    return 0xffffffffffffffff;
  }
  iVar21 = *param_6 + uVar22;
  *param_6 = iVar21;
  if (0x3f < iVar21) {
    return 0xffffffffffffffff;
  }
  bVar6 = *(unsigned char *)(iVar21 + param_4);
  uVar22 = (unsigned int)bVar6;
  if (7 < bVar6) {
    if ((bVar6 & 7) != 0) {
      if (iVar19 < 1) {
        *(int *)(*(int *)(param_1 + 0x6e4) + (unsigned int)bVar6 * 4) = iVar19 * iVar12 - iVar13;
      }
      else {
        *(int *)(*(int *)(param_1 + 0x6e4) + (unsigned int)bVar6 * 4) = iVar19 * iVar12 + iVar13;
      }
      goto LAB_82cbd544;
    }
    uVar22 = ((int)(unsigned int)bVar6 >> 3) + 8;
  }
  *(short *)(uVar22 * 2 + param_3) = *(short *)(uVar22 * 2 + param_3) + (short)iVar19;
LAB_82cbd544:
  *param_6 = *param_6 + 1;
  return uVar25;
}

