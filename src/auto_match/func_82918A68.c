typedef unsigned char bool;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_8202E370;
extern unsigned int lbl_8202E380;
extern unsigned int lbl_821AAD20;


unsigned int fn_82918A68(int param_1,unsigned __int64 param_2,unsigned int *param_3,unsigned int param_4,__int64 param_5)

{
  bool bVar1;
  unsigned short uVar2;
  unsigned short uVar3;
  unsigned short *puVar4;
  unsigned int *puVar5;
  int iVar6;
  unsigned __int64 uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned char *puVar10;
  __int64 lVar11;
  unsigned int uVar13;
  unsigned __int64 uVar12;
  unsigned int uVar15;
  __int64 lVar14;
  int iVar18;
  unsigned int *puVar19;
  unsigned __int64 uVar16;
  unsigned __int64 uVar17;
  unsigned int *puVar20;
  unsigned int *puVar21;
  unsigned __int64 uVar22;
  unsigned __int64 uVar23;
  __int64 lVar24;
  
  puVar4 = *(unsigned short **)(param_1 + 0x18);
  puVar5 = *(unsigned int **)(param_1 + 0x20);
  uVar2 = *puVar4;
  if (uVar2 == 0) {
    uVar2 = puVar4[4];
    bVar1 = uVar2 < param_4;
  }
  else {
    if (uVar2 == 1) {
      uVar23 = (unsigned __int64)puVar4[3];
    }
    else {
      if (2 < uVar2) {
        if (uVar2 != 3) {
          if (uVar2 != 5) {
            return 0x80004001;
          }
          uVar23 = (unsigned __int64)param_4 / (unsigned __int64)*(unsigned int *)(param_1 + 0x34);
          trapWord(6,(unsigned __int64)*(unsigned int *)(param_1 + 0x34),0);
          if (puVar4[4] < uVar23) {
            uVar23 = (unsigned __int64)puVar4[4];
          }
          uVar22 = 0;
          if (uVar23 != 0) {
            do {
              uVar13 = 0;
              if (puVar4[5] != 0) {
                iVar18 = 0;
                do {
                  iVar6 = *(int *)(iVar18 + *(int *)(param_1 + 0x38));
                  uVar8 = fn_82918A68(iVar6,param_2,param_3,*(unsigned int *)(iVar6 + 0x30),param_5)
                  ;
                  if ((int)uVar8 < 0) {
                    return uVar8;
                  }
                  uVar13 = uVar13 + 1;
                  iVar18 = iVar18 + 4;
                  param_3 = param_3 + *(int *)(iVar6 + 0x30);
                } while (uVar13 < puVar4[5]);
              }
              uVar22 = uVar22 + 1;
            } while ((uVar22 & 0xffffffff) < uVar23);
          }
          return 0;
        }
        uVar13 = (unsigned int)puVar4[3];
        uVar8 = (unsigned int)puVar4[2];
        uVar22 = (__int64)(int)(unsigned int)puVar4[2] * (__int64)(int)(unsigned int)puVar4[3];
        uVar23 = param_4 / uVar22;
        trapWord(6,uVar22,0);
        if (puVar4[4] < uVar23) {
          uVar23 = (unsigned __int64)puVar4[4];
        }
        param_4 = (unsigned int)uVar23;
        uVar9 = 0;
        puVar20 = puVar5;
        if (uVar23 != 0) {
          puVar21 = puVar5 + -1;
          do {
            uVar15 = 0;
            if (uVar13 != 0) {
              do {
                uVar13 = 0;
                if (uVar8 != 0) {
                  do {
                    iVar18 = uVar8 * uVar9 + uVar13;
                    uVar13 = uVar13 + 1;
                    puVar21 = puVar21 + 1;
                    *puVar21 = param_3[iVar18 * (unsigned int)puVar4[3] + uVar15];
                    uVar8 = (unsigned int)puVar4[2];
                  } while (uVar13 < uVar8);
                }
                uVar13 = (unsigned int)puVar4[3];
                uVar15 = uVar15 + 1;
              } while (uVar15 < uVar13);
            }
            uVar9 = uVar9 + 1;
          } while (uVar9 < uVar23);
        }
        goto LAB_82918c34;
      }
      uVar23 = (__int64)(int)(unsigned int)puVar4[3] * (__int64)(int)(unsigned int)puVar4[2];
    }
    uVar2 = puVar4[4];
    uVar22 = (unsigned __int64)param_4;
    param_4 = (unsigned int)(uVar22 / uVar23);
    trapWord(6,uVar23,0);
    bVar1 = (unsigned __int64)uVar2 < uVar22 / uVar23;
  }
  puVar20 = param_3;
  if (bVar1) {
    param_4 = (unsigned int)uVar2;
  }
LAB_82918c34:
  uVar8 = lbl_821AAD20;
  uVar13 = lbl_82002AE0;
  uVar2 = puVar4[1];
  puVar21 = puVar20;
  if (uVar2 != 1) {
    uVar23 = (__int64)*(int *)(param_1 + 0x34) * (__int64)(int)param_4;
    puVar21 = puVar5;
    if (uVar2 == 2) {
      if ((uVar23 & 0xffffffff) != 0) {
        puVar19 = puVar5;
        do {
          *puVar19 = (unsigned int)(*(int *)((int)puVar19 + ((int)puVar20 - (int)puVar5)) != 0);
          puVar19 = puVar19 + 1;
          uVar23 = uVar23 - 1;
        } while (uVar23 != 0);
      }
    }
    else if ((uVar2 == 3) && ((uVar23 & 0xffffffff) != 0)) {
      puVar19 = puVar5;
      do {
        uVar9 = uVar8;
        if (*(int *)(((int)puVar20 - (int)puVar5) + (int)puVar19) != 0) {
          uVar9 = uVar13;
        }
        *puVar19 = uVar9;
        puVar19 = puVar19 + 1;
        uVar23 = uVar23 - 1;
      } while (uVar23 != 0);
    }
  }
  puVar20 = puVar21;
  if (*(short *)(param_1 + 8) != 0) {
    if (*puVar4 == 3) {
      uVar2 = puVar4[2];
      uVar3 = puVar4[3];
    }
    else {
      uVar2 = puVar4[3];
      uVar3 = puVar4[2];
    }
    uVar23 = (unsigned __int64)uVar2;
    if ((uVar2 & 3) != 0) {
      if (*(short *)(param_1 + 8) == 1) {
        puVar10 = &lbl_8202E380;
      }
      else {
        puVar10 = &lbl_8202E370;
      }
      uVar12 = (__int64)(int)(unsigned int)uVar3 * (__int64)(int)param_4;
      uVar22 = uVar23 + 3 & 0xfffffffc;
      puVar20 = puVar5;
      if (uVar12 != 0) {
        lVar14 = (__int64)(int)uVar12 * (__int64)(int)uVar22;
        lVar11 = (__int64)(int)uVar12 * (__int64)(int)(unsigned int)uVar2;
        do {
          uVar12 = uVar12 - 1;
          lVar11 = lVar11 - uVar23;
          lVar14 = lVar14 - uVar22;
          uVar17 = uVar23;
          uVar7 = uVar23;
          if ((unsigned int)uVar2 < uVar22) {
            lVar24 = uVar22 - uVar23;
            uVar16 = uVar22;
            do {
              uVar16 = uVar16 - 1;
              *(unsigned int *)((int)((lVar14 + uVar16 & 0xffffffff) << 2) + (int)puVar5) =
                   *(unsigned int *)(puVar10 + ((unsigned int)((uVar16 & 0xffffffff) << 2) & 0xc));
              lVar24 = lVar24 + -1;
            } while (lVar24 != 0);
          }
          for (; uVar7 != 0; uVar7 = uVar7 - 1) {
            uVar17 = uVar17 - 1;
            *(unsigned int *)((int)((lVar14 + uVar17 & 0xffffffff) << 2) + (int)puVar5) =
                 *(unsigned int *)((int)((lVar11 + uVar17 & 0xffffffff) << 2) + (int)puVar21);
          }
        } while ((uVar12 & 0xffffffff) != 0);
      }
    }
  }
  uVar23 = (__int64)*(int *)(param_1 + 0x2c) * (__int64)(int)param_4;
  if ((unsigned __int64)*(unsigned short *)(param_1 + 0xc) < (uVar23 & 0xffffffff)) {
    uVar23 = (unsigned __int64)*(unsigned short *)(param_1 + 0xc);
  }
  if (*(int (***)())(param_1 + 0x1c) == (int (**)())0x0) {
    uVar13 = 0x80004005;
  }
  else {
    uVar13 = (**(int (***)())(param_1 + 0x1c))
                       (param_2,(unsigned __int64)*(unsigned short *)(param_1 + 10) + param_5,puVar20,puVar5,uVar23
                       );
    uVar13 = (int)uVar13 >> 0x1f & uVar13;
  }
  return uVar13;
}

