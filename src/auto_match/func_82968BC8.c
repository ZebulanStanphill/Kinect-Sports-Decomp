extern int fn_82963400();


unsigned __int64 fn_82968BC8(int param_1,int param_2,int param_3)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int iVar3;
  int iVar4;
  unsigned __int64 uVar5;
  int iVar6;
  unsigned int uVar7;
  unsigned __int64 uVar8;
  unsigned __int64 uVar9;
  unsigned __int64 uVar10;
  unsigned __int64 uVar11;
  unsigned int uVar12;
  
  puVar1 = *(unsigned int **)(param_1 * 4 + *(int *)(param_3 + 0x18));
  puVar2 = *(unsigned int **)(param_2 * 4 + *(int *)(param_3 + 0x18));
  uVar12 = *puVar1;
  if ((((((uVar12 ^ *puVar2) & 0xfff00000) == 0) &&
       (uVar8 = (unsigned __int64)uVar12 & 0xfffff, uVar8 < ((unsigned __int64)*puVar2 & 0xfffff))) &&
      (0xfffffff < (uVar12 & 0xf0000000))) && ((uVar12 & 0xf0000000) < 0x40000001)) {
    uVar12 = puVar1[3];
    uVar7 = 0;
    if (uVar12 != 0) {
      iVar6 = 0;
      do {
        iVar3 = *(int *)(*(int *)(iVar6 + puVar1[4]) * 4 + *(int *)(param_3 + 0x14));
        iVar4 = *(int *)(*(int *)(iVar6 + puVar2[4]) * 4 + *(int *)(param_3 + 0x14));
        if (((*(int *)(iVar3 + 4) != *(int *)(iVar4 + 4)) ||
            (*(int *)(iVar3 + 0x14) != *(int *)(iVar4 + 0x14))) ||
           (*(int *)(iVar3 + 0x18) != *(int *)(iVar4 + 0x18))) goto LAB_82968c00;
        uVar7 = uVar7 + 1;
        iVar6 = iVar6 + 4;
      } while (uVar7 < uVar12);
    }
    uVar10 = 0;
    uVar9 = puVar1[1] / uVar8;
    trapWord(6,uVar8,0);
    if (uVar12 != 0) {
      do {
        uVar8 = (unsigned __int64)puVar2[3];
        uVar11 = 0;
        if (uVar8 != 0) {
          do {
            uVar12 = 0;
            if (uVar9 != 0) {
              do {
                if (*(int *)(*(int *)(*(int *)((int)(((__int64)(int)puVar1[3] *
                                                      (__int64)(int)uVar12 + uVar10 & 0xffffffff)
                                                    << 2) + puVar1[2]) * 4 +
                                     *(int *)(param_3 + 0x14)) + 0x30) !=
                    *(int *)(*(int *)(*(int *)((int)(((__int64)(int)uVar8 * (__int64)(int)uVar12 +
                                                      uVar11 & 0xffffffff) << 2) + puVar2[2]) * 4 +
                                     *(int *)(param_3 + 0x14)) + 0x30)) break;
                uVar12 = uVar12 + 1;
              } while (uVar12 < uVar9);
            }
            if (uVar12 == uVar9) break;
            iVar6 = fn_82963400(puVar1);
            if (iVar6 != 0) {
              uVar12 = 0;
              if (uVar9 != 0) {
                iVar6 = 1;
                do {
                  if (*(int *)(*(int *)(*(int *)((int)(((__int64)iVar6 * (__int64)(int)puVar1[3] +
                                                        uVar10 & 0xffffffff) << 2) + puVar1[2]) * 4
                                       + *(int *)(param_3 + 0x14)) + 0x30) !=
                      *(int *)(*(int *)(*(int *)((int)(((__int64)(int)puVar2[3] *
                                                        (__int64)(int)uVar12 + uVar11 & 0xffffffff)
                                                      << 2) + puVar2[2]) * 4 +
                                       *(int *)(param_3 + 0x14)) + 0x30)) break;
                  uVar12 = uVar12 + 1;
                  iVar6 = iVar6 + -1;
                } while (uVar12 < uVar9);
              }
            }
            if (uVar12 == uVar9) break;
            uVar8 = (unsigned __int64)puVar2[3];
            uVar11 = uVar11 + 1;
          } while ((uVar11 & 0xffffffff) < uVar8);
        }
        if ((uVar11 & 0xffffffff) == (unsigned __int64)puVar2[3]) goto LAB_82968c00;
        uVar10 = uVar10 + 1;
      } while ((uVar10 & 0xffffffff) < (unsigned __int64)puVar1[3]);
    }
    uVar5 = 1;
  }
  else {
LAB_82968c00:
    uVar5 = 0;
  }
  return uVar5;
}

