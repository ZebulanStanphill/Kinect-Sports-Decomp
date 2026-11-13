typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82975B00();


unsigned __int64
fn_8299D3A0(int param_1,int param_2,unsigned int param_3,unsigned int param_4,int *param_5,__int64 param_6,
             int *param_7,unsigned int *param_8)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  int iVar5;
  unsigned __int64 uVar6;
  bool bVar7;
  __int64 lVar8;
  int iVar9;
  unsigned int uVar10;
  int *piVar11;
  unsigned __int64 uVar12;
  __int64 lVar13;
  unsigned __int64 uVar14;
  int *piVar15;
  __int64 lVar16;
  
  if (param_3 < param_4) {
    piVar11 = (int *)(param_3 * 4 + param_2);
    do {
      puVar1 = (unsigned int *)*piVar11;
      if (puVar1 != (unsigned int *)0x0) {
        uVar2 = *puVar1;
        uVar6 = (unsigned __int64)uVar2 & 0xfffff;
        if (uVar2 != 0) {
          uVar3 = puVar1[1];
          uVar12 = 0;
          trapWord(6,uVar6,0);
          if ((int)(uVar3 / uVar6) != 0) {
            lVar13 = 0;
            do {
              bVar7 = false;
              if ((uVar2 & 0xfffff) != 0) {
                lVar8 = (unsigned __int64)puVar1[2] + lVar13;
                uVar14 = uVar6;
                do {
                  iVar9 = *(int *)(*(int *)lVar8 * 4 + *(int *)(param_1 + 0x14));
                  lVar16 = param_6;
                  piVar15 = param_5;
                  if ((int)param_6 != 0) {
                    do {
                      if (((*(int *)lVar8 == *piVar15) || (*(int *)(iVar9 + 0x38) == *piVar15)) &&
                         (*(int *)(iVar9 + 0xc) == -1)) {
                        bVar7 = true;
                      }
                      lVar16 = lVar16 + -1;
                      piVar15 = piVar15 + 1;
                    } while (lVar16 != 0);
                  }
                  uVar14 = uVar14 - 1;
                  lVar8 = lVar8 + 4;
                } while (uVar14 != 0);
                if (bVar7) {
                  uVar14 = 0;
                  lVar8 = lVar13;
                  do {
                    iVar5 = *(int *)(puVar1[2] + (int)lVar8);
                    iVar9 = *(int *)(*(int *)(iVar5 * 4 + *(int *)(param_1 + 0x14)) + 0x38);
                    if (iVar9 == -1) {
                      iVar9 = iVar5;
                    }
                    uVar4 = *param_8;
                    uVar10 = 0;
                    piVar15 = param_7;
                    if (uVar4 != 0) {
                      do {
                        if (*piVar15 == iVar9) break;
                        uVar10 = uVar10 + 1;
                        piVar15 = piVar15 + 1;
                      } while (uVar10 < *param_8);
                    }
                    if (uVar10 == uVar4) {
                      if (uVar10 == 0x20) {
                        fn_82975B00(param_1,0,0x12c3,0xffffffff8205137c);
                        return 0xffffffff80004005;
                      }
                      param_7[uVar4] = iVar9;
                      *param_8 = *param_8 + 1;
                    }
                    uVar14 = uVar14 + 1;
                    lVar8 = lVar8 + 4;
                  } while ((uVar14 & 0xffffffff) < uVar6);
                }
              }
              uVar12 = uVar12 + 1;
              lVar13 = ((unsigned __int64)uVar2 & 0xfffff) * 4 + lVar13;
            } while ((uVar12 & 0xffffffff) < uVar3 / uVar6);
          }
        }
      }
      param_3 = param_3 + 1;
      piVar11 = piVar11 + 1;
    } while (param_3 < param_4);
  }
  return 0;
}

