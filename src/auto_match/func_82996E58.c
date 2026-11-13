typedef unsigned char bool;
#define true 1
extern int fn_82975B00();


unsigned __int64 fn_82996E58(int param_1)

{
  unsigned int *puVar1;
  int iVar2;
  int iVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int *puVar6;
  unsigned int *puVar7;
  bool bVar8;
  unsigned __int64 uVar9;
  int iVar10;
  unsigned __int64 uVar11;
  unsigned int uVar14;
  unsigned __int64 uVar12;
  __int64 lVar13;
  int iVar16;
  unsigned int uVar17;
  __int64 lVar15;
  int *piVar18;
  unsigned __int64 uVar19;
  
  puVar1 = *(unsigned int **)(param_1 + 0x104);
  if (((*puVar1 & 0xfffff) == 4) && (puVar1[1] == 4)) {
    piVar18 = (int *)puVar1[2];
    uVar14 = 0;
    iVar2 = piVar18[3];
    do {
      if (*(int *)(uVar14 + puVar1[2]) == *(int *)(puVar1[2] + 0xc)) goto LAB_8299701c;
      uVar14 = uVar14 + 4;
    } while (uVar14 < 0xc);
    iVar3 = *(int *)(*(int *)(iVar2 * 4 + *(int *)(param_1 + 0x14)) + 0x48);
    iVar10 = -1;
    if ((iVar3 != -1) &&
       (puVar6 = *(unsigned int **)(iVar3 * 4 + *(int *)(param_1 + 0x18)),
       (*puVar6 & 0xfff00000) == 0x10000000)) {
      uVar14 = 0;
      if (puVar6[3] != 0) {
        iVar16 = 0;
        do {
          if (iVar2 == *(int *)(iVar16 + puVar6[4])) {
            iVar10 = *(int *)(puVar6[2] + iVar16);
          }
          uVar14 = uVar14 + 1;
          iVar16 = iVar16 + 4;
        } while (uVar14 < puVar6[3]);
      }
    }
    uVar14 = 0;
    do {
      if (*(int *)(uVar14 + (int)piVar18) == iVar10) {
LAB_8299701c:
        *puVar1 = 0x11000003;
        return 0;
      }
      uVar14 = uVar14 + 4;
    } while (uVar14 < 0xc);
    uVar14 = 0;
    do {
      iVar10 = *(int *)(*(int *)(*piVar18 * 4 + *(int *)(param_1 + 0x14)) + 0x48);
      if (iVar10 != -1) {
        puVar6 = *(unsigned int **)(iVar10 * 4 + *(int *)(param_1 + 0x18));
        puVar7 = *(unsigned int **)(iVar3 * 4 + *(int *)(param_1 + 0x18));
        uVar4 = *puVar6;
        uVar5 = *puVar7;
        if (((uVar5 ^ uVar4) & 0xfff00000) == 0) {
          uVar11 = (unsigned __int64)uVar5 & 0xfffff;
          uVar9 = (unsigned __int64)uVar4 & 0xfffff;
          if (((uVar5 & 0xfffff) != 0) && ((uVar4 & 0xfffff) != 0)) {
            trapWord(6,uVar11,0);
            trapWord(6,uVar9,0);
            uVar19 = puVar7[1] / uVar11;
            if ((uVar19 == puVar6[1] / uVar9) &&
               ((uVar11 == puVar7[3] && (uVar11 = (unsigned __int64)puVar6[3], uVar9 == uVar11)))) {
              uVar12 = 0;
              uVar9 = 0xffffffffffffffff;
              if (uVar11 != 0) {
                iVar10 = 0;
                do {
                  uVar9 = uVar12;
                  if (*(int *)(iVar10 + puVar6[4]) == *piVar18) break;
                  uVar12 = uVar12 + 1;
                  iVar10 = iVar10 + 4;
                  uVar9 = 0xffffffffffffffff;
                } while ((uVar12 & 0xffffffff) < uVar11);
              }
              uVar17 = 0;
              if (uVar11 != 0) {
                iVar10 = 0;
LAB_82997048:
                if (*(int *)(iVar10 + puVar7[4]) != iVar2) goto code_r0x82997054;
                if ((uVar17 != 0xffffffff) && ((int)uVar9 != -1)) {
                  bVar8 = true;
                  if (uVar19 != 0) {
                    lVar15 = ((unsigned __int64)uVar17 & 0x3fffffff) << 2;
                    lVar13 = (uVar9 & 0x3fffffff) << 2;
                    do {
                      iVar10 = (int)lVar15;
                      lVar15 = ((unsigned __int64)uVar5 & 0xfffff) * 4 + lVar15;
                      iVar16 = (int)lVar13;
                      lVar13 = ((unsigned __int64)uVar4 & 0xfffff) * 4 + lVar13;
                      bVar8 = (bool)(*(int *)(iVar16 + puVar6[2]) == *(int *)(iVar10 + puVar7[2]) &
                                    bVar8);
                      uVar19 = uVar19 - 1;
                    } while (uVar19 != 0);
                    if (!bVar8) goto LAB_829970cc;
                  }
                  **(unsigned int **)(param_1 + 0x104) = 0x11000003;
                  *(unsigned int *)(*(int *)(param_1 + 0x104) + 4) = 3;
                  *(unsigned int *)(*(int *)(param_1 + 0x104) + 0xc) = 3;
                  return 0;
                }
              }
            }
          }
        }
      }
LAB_829970cc:
      uVar14 = uVar14 + 1;
      piVar18 = piVar18 + 1;
    } while (uVar14 < 3);
    fn_82975B00(param_1,puVar1[0xf],0x11c0,0xffffffff82050dfc,*(unsigned char *)(param_1 + 0xcb));
  }
  else {
    fn_82975B00(param_1,puVar1[0xf],0x12d4,0xffffffff82050dd4);
  }
  return 0xffffffff80004005;
code_r0x82997054:
  uVar17 = uVar17 + 1;
  iVar10 = iVar10 + 4;
  if (uVar11 <= uVar17) goto LAB_829970cc;
  goto LAB_82997048;
}

