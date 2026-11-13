typedef unsigned char bool;
extern unsigned int lbl_8202E370;
extern unsigned int lbl_8202E380;


unsigned int fn_82918760(int param_1,unsigned __int64 param_2,int param_3,unsigned int param_4,__int64 param_5)

{
  bool bVar1;
  unsigned short uVar2;
  unsigned short uVar3;
  unsigned short *puVar4;
  unsigned __int64 uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned char *puVar8;
  __int64 lVar9;
  unsigned int *puVar10;
  unsigned int uVar12;
  unsigned __int64 uVar11;
  unsigned int uVar14;
  __int64 lVar13;
  int iVar17;
  unsigned __int64 uVar15;
  unsigned __int64 uVar16;
  int iVar18;
  unsigned __int64 uVar19;
  unsigned __int64 uVar20;
  int iVar21;
  __int64 lVar22;
  
  puVar4 = *(unsigned short **)(param_1 + 0x18);
  iVar21 = *(int *)(param_1 + 0x20);
  uVar2 = *puVar4;
  if (uVar2 == 0) {
    uVar2 = puVar4[4];
    bVar1 = uVar2 < param_4;
  }
  else {
    if (uVar2 == 1) {
      uVar20 = (unsigned __int64)puVar4[3];
    }
    else {
      if (2 < uVar2) {
        if (uVar2 != 3) {
          if (uVar2 != 5) {
            return 0x80004001;
          }
          uVar20 = (unsigned __int64)param_4 / (unsigned __int64)*(unsigned int *)(param_1 + 0x34);
          trapWord(6,(unsigned __int64)*(unsigned int *)(param_1 + 0x34),0);
          if (puVar4[4] < uVar20) {
            uVar20 = (unsigned __int64)puVar4[4];
          }
          uVar19 = 0;
          if (uVar20 != 0) {
            do {
              uVar12 = 0;
              if (puVar4[5] != 0) {
                iVar21 = 0;
                do {
                  iVar18 = *(int *)(iVar21 + *(int *)(param_1 + 0x38));
                  uVar6 = fn_82918760(iVar18,param_2,param_3,*(unsigned int *)(iVar18 + 0x30),
                                        param_5);
                  if ((int)uVar6 < 0) {
                    return uVar6;
                  }
                  uVar12 = uVar12 + 1;
                  iVar21 = iVar21 + 4;
                  param_3 = *(int *)(iVar18 + 0x30) * 4 + param_3;
                } while (uVar12 < puVar4[5]);
              }
              uVar19 = uVar19 + 1;
            } while ((uVar19 & 0xffffffff) < uVar20);
          }
          return 0;
        }
        uVar12 = (unsigned int)puVar4[3];
        uVar6 = (unsigned int)puVar4[2];
        uVar19 = (__int64)(int)(unsigned int)puVar4[2] * (__int64)(int)(unsigned int)puVar4[3];
        uVar20 = param_4 / uVar19;
        trapWord(6,uVar19,0);
        if (puVar4[4] < uVar20) {
          uVar20 = (unsigned __int64)puVar4[4];
        }
        param_4 = (unsigned int)uVar20;
        uVar7 = 0;
        iVar18 = iVar21;
        if (uVar20 != 0) {
          puVar10 = (unsigned int *)(iVar21 + -4);
          do {
            uVar14 = 0;
            if (uVar12 != 0) {
              do {
                uVar12 = 0;
                if (uVar6 != 0) {
                  do {
                    iVar17 = uVar6 * uVar7 + uVar12;
                    uVar12 = uVar12 + 1;
                    puVar10 = puVar10 + 1;
                    *puVar10 = *(unsigned int *)((iVar17 * (unsigned int)puVar4[3] + uVar14) * 4 + param_3);
                    uVar6 = (unsigned int)puVar4[2];
                  } while (uVar12 < uVar6);
                }
                uVar12 = (unsigned int)puVar4[3];
                uVar14 = uVar14 + 1;
              } while (uVar14 < uVar12);
            }
            uVar7 = uVar7 + 1;
          } while (uVar7 < uVar20);
        }
        goto LAB_8291892c;
      }
      uVar20 = (__int64)(int)(unsigned int)puVar4[3] * (__int64)(int)(unsigned int)puVar4[2];
    }
    uVar2 = puVar4[4];
    uVar19 = (unsigned __int64)param_4;
    param_4 = (unsigned int)(uVar19 / uVar20);
    trapWord(6,uVar20,0);
    bVar1 = (unsigned __int64)uVar2 < uVar19 / uVar20;
  }
  iVar18 = param_3;
  if (bVar1) {
    param_4 = (unsigned int)uVar2;
  }
LAB_8291892c:
  iVar17 = iVar18;
  if (*(short *)(param_1 + 8) != 0) {
    if (*puVar4 == 3) {
      uVar2 = puVar4[2];
      uVar3 = puVar4[3];
    }
    else {
      uVar2 = puVar4[3];
      uVar3 = puVar4[2];
    }
    uVar20 = (unsigned __int64)uVar2;
    if ((uVar2 & 3) != 0) {
      if (*(short *)(param_1 + 8) == 1) {
        puVar8 = &lbl_8202E380;
      }
      else {
        puVar8 = &lbl_8202E370;
      }
      uVar11 = (__int64)(int)(unsigned int)uVar3 * (__int64)(int)param_4;
      uVar19 = uVar20 + 3 & 0xfffffffc;
      iVar17 = iVar21;
      if (uVar11 != 0) {
        lVar13 = (__int64)(int)uVar11 * (__int64)(int)uVar19;
        lVar9 = (__int64)(int)uVar11 * (__int64)(int)(unsigned int)uVar2;
        do {
          uVar11 = uVar11 - 1;
          lVar9 = lVar9 - uVar20;
          lVar13 = lVar13 - uVar19;
          uVar16 = uVar20;
          uVar5 = uVar20;
          if ((unsigned int)uVar2 < uVar19) {
            lVar22 = uVar19 - uVar20;
            uVar15 = uVar19;
            do {
              uVar15 = uVar15 - 1;
              *(unsigned int *)((int)((lVar13 + uVar15 & 0xffffffff) << 2) + iVar21) =
                   *(unsigned int *)(puVar8 + ((unsigned int)((uVar15 & 0xffffffff) << 2) & 0xc));
              lVar22 = lVar22 + -1;
            } while (lVar22 != 0);
          }
          for (; uVar5 != 0; uVar5 = uVar5 - 1) {
            uVar16 = uVar16 - 1;
            *(unsigned int *)((int)((lVar13 + uVar16 & 0xffffffff) << 2) + iVar21) =
                 *(unsigned int *)((int)((lVar9 + uVar16 & 0xffffffff) << 2) + iVar18);
          }
        } while ((uVar11 & 0xffffffff) != 0);
      }
    }
  }
  uVar20 = (__int64)*(int *)(param_1 + 0x2c) * (__int64)(int)param_4;
  if ((unsigned __int64)*(unsigned short *)(param_1 + 0xc) < (uVar20 & 0xffffffff)) {
    uVar20 = (unsigned __int64)*(unsigned short *)(param_1 + 0xc);
  }
  if (*(int (***)())(param_1 + 0x1c) == (int (**)())0x0) {
    uVar12 = 0x80004005;
  }
  else {
    uVar12 = (**(int (***)())(param_1 + 0x1c))
                       (param_2,(unsigned __int64)*(unsigned short *)(param_1 + 10) + param_5,iVar17,iVar21,uVar20)
    ;
    uVar12 = (int)uVar12 >> 0x1f & uVar12;
  }
  return uVar12;
}

