extern int fn_829191A0();
extern unsigned int lbl_8202E370;
extern unsigned int lbl_8202E380;
extern unsigned int lbl_821AAD20;


unsigned int fn_82919F58(int param_1,unsigned __int64 param_2,int *param_3,unsigned __int64 param_4,__int64 param_5)

{
  unsigned short uVar1;
  unsigned short uVar2;
  unsigned short *puVar3;
  int iVar4;
  float *pfVar5;
  unsigned int uVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  float fVar9;
  unsigned int uVar10;
  unsigned char *puVar11;
  unsigned int uVar12;
  __int64 lVar13;
  __int64 lVar14;
  unsigned __int64 uVar15;
  __int64 lVar16;
  unsigned int uVar19;
  unsigned int *puVar20;
  int *piVar21;
  unsigned int *puVar22;
  unsigned __int64 uVar17;
  unsigned __int64 uVar18;
  unsigned int uVar23;
  unsigned int uVar24;
  unsigned __int64 uVar25;
  int iVar26;
  int iVar27;
  
  puVar3 = *(unsigned short **)(param_1 + 0x18);
  iVar26 = *(int *)(param_1 + 0x20);
  uVar1 = *puVar3;
  if (uVar1 == 0) {
    param_4 = (param_4 & 0xfffffff) << 4;
    if (puVar3[4] < param_4) {
      param_4 = (unsigned __int64)puVar3[4];
    }
    uVar12 = 0;
    if (param_4 != 0) {
      puVar20 = (unsigned int *)(iVar26 + -4);
      uVar25 = param_4;
      do {
        uVar19 = uVar12 & 0xc;
        uVar10 = uVar12 & 3;
        uVar23 = uVar12 >> 2;
        uVar12 = uVar12 + 1;
        puVar20 = puVar20 + 1;
        *puVar20 = *(unsigned int *)
                    ((uVar19 + uVar10) * 4 + *(int *)((uVar23 & 0x3ffffffc) + (int)param_3));
        uVar25 = uVar25 - 1;
      } while (uVar25 != 0);
    }
  }
  else if (uVar1 == 1) {
    param_4 = (param_4 & 0x3fffffff) << 2;
    if (puVar3[4] < param_4) {
      param_4 = (unsigned __int64)puVar3[4];
    }
    uVar12 = 0;
    if (param_4 != 0) {
      uVar23 = (unsigned int)puVar3[3];
      puVar20 = (unsigned int *)(iVar26 + -4);
      do {
        uVar19 = 0;
        if (uVar23 != 0) {
          do {
            if (uVar19 < 5) {
              uVar24 = *(unsigned int *)
                        (((uVar12 & 3) * 4 + uVar19) * 4 +
                        *(int *)((uVar12 & 0xfffffffc) + (int)param_3));
            }
            else {
              uVar24 = 0;
            }
            puVar20 = puVar20 + 1;
            *puVar20 = uVar24;
            uVar19 = uVar19 + 1;
            uVar23 = (unsigned int)puVar3[3];
          } while (uVar19 < uVar23);
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 < param_4);
    }
  }
  else if (uVar1 < 3) {
    if ((unsigned __int64)puVar3[4] < (param_4 & 0xffffffff)) {
      param_4 = (unsigned __int64)puVar3[4];
    }
    if ((param_4 & 0xffffffff) != 0) {
      puVar20 = (unsigned int *)(iVar26 + -4);
      uVar25 = param_4;
      do {
        uVar12 = 0;
        if (puVar3[2] != 0) {
          uVar19 = (unsigned int)puVar3[3];
          uVar23 = 0;
          do {
            uVar10 = 0;
            if (uVar19 != 0) {
              do {
                if ((uVar23 < 0x11) && (uVar10 < 5)) {
                  uVar24 = *(unsigned int *)((uVar23 + uVar10) * 4 + *param_3);
                }
                else {
                  uVar24 = 0;
                }
                uVar10 = uVar10 + 1;
                puVar20 = puVar20 + 1;
                *puVar20 = uVar24;
                uVar19 = (unsigned int)puVar3[3];
              } while (uVar10 < uVar19);
            }
            uVar12 = uVar12 + 1;
            uVar23 = uVar23 + 4;
          } while (uVar12 < puVar3[2]);
        }
        param_3 = param_3 + 1;
        uVar25 = uVar25 - 1;
      } while (uVar25 != 0);
    }
  }
  else {
    if (uVar1 != 3) {
      if (uVar1 != 5) {
        return 0x80004001;
      }
      uVar12 = *(unsigned int *)(param_1 + 0x34);
      uVar25 = ((param_4 & 0xfffffff) << 4) / (unsigned __int64)uVar12;
      uVar23 = (unsigned int)uVar25;
      trapWord(6,(unsigned __int64)uVar12,0);
      if (puVar3[4] < uVar25) {
        uVar23 = (unsigned int)puVar3[4];
      }
      lVar16 = (__int64)(int)uVar12 * (__int64)(int)uVar23;
      uVar12 = 0;
      if (lVar16 != 0) {
        puVar20 = (unsigned int *)(iVar26 + -4);
        do {
          uVar10 = uVar12 & 0xc;
          uVar6 = uVar12 & 3;
          uVar19 = uVar12 >> 2;
          uVar12 = uVar12 + 1;
          puVar20 = puVar20 + 1;
          *puVar20 = *(unsigned int *)
                      ((uVar10 + uVar6) * 4 + *(int *)((uVar19 & 0x3ffffffc) + (int)param_3));
          lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
      }
      uVar12 = 0;
      if (uVar23 != 0) {
        do {
          uVar19 = 0;
          if (puVar3[5] != 0) {
            iVar27 = 0;
            do {
              iVar4 = *(int *)(*(int *)(param_1 + 0x38) + iVar27);
              uVar10 = fn_829191A0(iVar4,param_2,iVar26,*(unsigned int *)(iVar4 + 0x30),param_5);
              if ((int)uVar10 < 0) {
                return uVar10;
              }
              uVar19 = uVar19 + 1;
              iVar27 = iVar27 + 4;
              iVar26 = *(int *)(iVar4 + 0x30) * 4 + iVar26;
            } while (uVar19 < puVar3[5]);
          }
          uVar12 = uVar12 + 1;
        } while (uVar12 < uVar23);
      }
      return 0;
    }
    if ((unsigned __int64)puVar3[4] < (param_4 & 0xffffffff)) {
      param_4 = (unsigned __int64)puVar3[4];
    }
    if ((param_4 & 0xffffffff) != 0) {
      puVar20 = (unsigned int *)(iVar26 + -4);
      uVar25 = param_4;
      do {
        uVar12 = 0;
        if (puVar3[3] != 0) {
          uVar23 = (unsigned int)puVar3[2];
          do {
            uVar19 = 0;
            if (uVar23 != 0) {
              iVar27 = uVar12 << 2;
              do {
                if ((uVar19 < 5) && (uVar12 < 5)) {
                  uVar24 = *(unsigned int *)(*param_3 + iVar27);
                }
                else {
                  uVar24 = 0;
                }
                uVar19 = uVar19 + 1;
                puVar20 = puVar20 + 1;
                *puVar20 = uVar24;
                uVar23 = (unsigned int)puVar3[2];
                iVar27 = iVar27 + 0x10;
              } while (uVar19 < uVar23);
            }
            uVar12 = uVar12 + 1;
          } while (uVar12 < puVar3[3]);
        }
        param_3 = param_3 + 1;
        uVar25 = uVar25 - 1;
      } while (uVar25 != 0);
    }
  }
  fVar9 = lbl_821AAD20;
  uVar1 = puVar3[1];
  iVar27 = (int)param_4;
  if (uVar1 != 3) {
    uVar25 = (__int64)*(int *)(param_1 + 0x34) * (__int64)iVar27;
    if (uVar1 == 1) {
      if ((uVar25 & 0xffffffff) != 0) {
        puVar22 = (unsigned int *)(iVar26 + -4);
        do {
          pfVar5 = (float *)(puVar22 + 1);
          puVar22 = puVar22 + 1;
          *puVar22 = (unsigned int)(*pfVar5 != fVar9);
          uVar25 = uVar25 - 1;
        } while (uVar25 != 0);
      }
    }
    else if ((uVar1 == 2) && ((uVar25 & 0xffffffff) != 0)) {
      piVar21 = (int *)(iVar26 + -4);
      do {
        pfVar5 = (float *)(piVar21 + 1);
        piVar21 = piVar21 + 1;
        *piVar21 = (int)*pfVar5;
        uVar25 = uVar25 - 1;
      } while (uVar25 != 0);
    }
  }
  if (*(short *)(param_1 + 8) != 0) {
    if (*puVar3 == 3) {
      uVar1 = puVar3[2];
      uVar2 = puVar3[3];
    }
    else {
      uVar1 = puVar3[3];
      uVar2 = puVar3[2];
    }
    uVar25 = (unsigned __int64)uVar1;
    if ((uVar1 & 3) != 0) {
      if (*(short *)(param_1 + 8) == 1) {
        puVar11 = &lbl_8202E380;
      }
      else {
        puVar11 = &lbl_8202E370;
      }
      uVar15 = (__int64)(int)(unsigned int)uVar2 * (__int64)iVar27;
      uVar7 = uVar25 + 3 & 0xfffffffc;
      if (uVar15 != 0) {
        lVar14 = (__int64)(int)uVar15 * (__int64)(int)uVar7;
        lVar16 = (__int64)(int)uVar15 * (__int64)(int)(unsigned int)uVar1;
        do {
          uVar15 = uVar15 - 1;
          lVar16 = lVar16 - uVar25;
          lVar14 = lVar14 - uVar7;
          uVar18 = uVar25;
          uVar8 = uVar25;
          if ((unsigned int)uVar1 < uVar7) {
            lVar13 = uVar7 - uVar25;
            uVar17 = uVar7;
            do {
              uVar17 = uVar17 - 1;
              *(unsigned int *)((int)((uVar17 + lVar14 & 0xffffffff) << 2) + iVar26) =
                   *(unsigned int *)(puVar11 + ((unsigned int)((uVar17 & 0xffffffff) << 2) & 0xc));
              lVar13 = lVar13 + -1;
            } while (lVar13 != 0);
          }
          for (; uVar8 != 0; uVar8 = uVar8 - 1) {
            uVar18 = uVar18 - 1;
            *(unsigned int *)((int)((uVar18 + lVar14 & 0xffffffff) << 2) + iVar26) =
                 *(unsigned int *)((int)((uVar18 + lVar16 & 0xffffffff) << 2) + iVar26);
          }
        } while ((uVar15 & 0xffffffff) != 0);
      }
    }
  }
  uVar25 = (__int64)*(int *)(param_1 + 0x2c) * (__int64)iVar27;
  if ((unsigned __int64)*(unsigned short *)(param_1 + 0xc) < (uVar25 & 0xffffffff)) {
    uVar25 = (unsigned __int64)*(unsigned short *)(param_1 + 0xc);
  }
  if (*(int (***)())(param_1 + 0x1c) == (int (**)())0x0) {
    uVar12 = 0x80004005;
  }
  else {
    uVar12 = (**(int (***)())(param_1 + 0x1c))
                       (param_2,(unsigned __int64)*(unsigned short *)(param_1 + 10) + param_5,iVar26,iVar26,uVar25)
    ;
    uVar12 = (int)uVar12 >> 0x1f & uVar12;
  }
  return uVar12;
}

