typedef unsigned char bool;
#define true 1
#define false 0


unsigned __int64 fn_82996C58(int param_1)

{
  int iVar1;
  unsigned int *puVar2;
  int iVar3;
  unsigned int *puVar4;
  bool bVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  iVar9 = *(int *)(*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x104) + 8) + 0x1c) * 4 +
                           *(int *)(param_1 + 0x14)) + 0x48);
  if (iVar9 != -1) {
    puVar2 = *(unsigned int **)(iVar9 * 4 + *(int *)(param_1 + 0x18));
    uVar7 = *puVar2 & 0xfff00000;
    if ((uVar7 == 0x10000000) || (uVar7 == 0x50000000)) {
      iVar10 = -1;
      iVar9 = *(int *)(*(int *)(param_1 + 0x104) + 8);
      iVar1 = *(int *)(iVar9 + 0x18);
      iVar3 = *(int *)(iVar1 * 4 + *(int *)(param_1 + 0x14));
      iVar8 = *(int *)(iVar3 + 0x48);
      if ((iVar8 != -1) &&
         ((*(int *)(iVar3 + 0x3c) == 0 &&
          (puVar4 = *(unsigned int **)(iVar8 * 4 + *(int *)(param_1 + 0x18)),
          (*puVar4 & 0xfff00000) == 0x10000000)))) {
        uVar6 = 0;
        if (puVar4[1] != 0) {
          iVar8 = 0;
          do {
            if (*(int *)(iVar8 + puVar4[4]) == iVar1) {
              iVar10 = *(int *)(puVar4[2] + iVar8);
            }
            uVar6 = uVar6 + 1;
            iVar8 = iVar8 + 4;
          } while (uVar6 < puVar4[1]);
        }
      }
      bVar5 = false;
      if (uVar7 == 0x10000000) {
        uVar7 = 0;
        if (puVar2[1] == 0) {
          return 1;
        }
        iVar8 = 0;
        do {
          if ((*(int *)(iVar8 + puVar2[2]) == iVar1) &&
             (*(int *)(puVar2[4] + iVar8) == *(int *)(iVar9 + 0x1c))) {
            bVar5 = true;
          }
          if ((*(int *)(iVar8 + puVar2[2]) == iVar10) &&
             (*(int *)(puVar2[4] + iVar8) == *(int *)(iVar9 + 0x1c))) {
            bVar5 = true;
          }
          uVar7 = uVar7 + 1;
          iVar8 = iVar8 + 4;
        } while (uVar7 < puVar2[1]);
      }
      else {
        uVar7 = 0;
        if (puVar2[1] == 0) {
          return 1;
        }
        iVar9 = 0;
        do {
          if (iVar10 == *(int *)(iVar9 + puVar2[4])) {
            bVar5 = true;
          }
          uVar7 = uVar7 + 1;
          iVar9 = iVar9 + 4;
        } while (uVar7 < puVar2[1]);
      }
      if (bVar5) {
        **(unsigned int **)(param_1 + 0x104) = 0x72e00003;
        *(unsigned int *)(*(int *)(param_1 + 0x104) + 4) = 6;
        iVar9 = *(int *)(*(int *)(param_1 + 0x104) + 8);
        *(unsigned int *)(iVar9 + 0xc) = *(unsigned int *)(iVar9 + 0x10);
        iVar9 = *(int *)(*(int *)(param_1 + 0x104) + 8);
        *(unsigned int *)(iVar9 + 0x10) = *(unsigned int *)(iVar9 + 0x14);
        iVar9 = *(int *)(*(int *)(param_1 + 0x104) + 8);
        *(unsigned int *)(iVar9 + 0x14) = *(unsigned int *)(iVar9 + 0x18);
        return 0;
      }
    }
  }
  return 1;
}

