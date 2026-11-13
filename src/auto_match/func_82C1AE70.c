typedef unsigned char bool;
#define true 1
#define false 0


void fn_82C1AE70(int param_1,int param_2,int param_3)

{
  float fVar1;
  unsigned int uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  unsigned int *puVar7;
  float *pfVar8;
  float *pfVar9;
  
  iVar4 = param_3 + -1;
  do {
    bVar3 = false;
    iVar5 = 0;
    if (3 < iVar4) {
      puVar7 = (unsigned int *)(param_2 + 0xc);
      pfVar8 = (float *)(param_1 + 4);
      iVar6 = param_2 - param_1;
      do {
        fVar1 = pfVar8[-1];
        if (*pfVar8 < fVar1) {
          uVar2 = puVar7[-3];
          pfVar8[-1] = *pfVar8;
          bVar3 = true;
          puVar7[-3] = *(unsigned int *)(iVar6 + (int)pfVar8);
          *pfVar8 = fVar1;
          *(unsigned int *)(iVar6 + (int)pfVar8) = uVar2;
        }
        fVar1 = *pfVar8;
        if (pfVar8[1] < fVar1) {
          uVar2 = *(unsigned int *)(iVar6 + (int)pfVar8);
          *pfVar8 = pfVar8[1];
          bVar3 = true;
          *(unsigned int *)(iVar6 + (int)pfVar8) = puVar7[-1];
          pfVar8[1] = fVar1;
          puVar7[-1] = uVar2;
        }
        fVar1 = pfVar8[1];
        if (pfVar8[2] < fVar1) {
          uVar2 = puVar7[-1];
          pfVar8[1] = pfVar8[2];
          bVar3 = true;
          puVar7[-1] = *puVar7;
          pfVar8[2] = fVar1;
          *puVar7 = uVar2;
        }
        fVar1 = pfVar8[2];
        if (pfVar8[3] < fVar1) {
          uVar2 = *puVar7;
          pfVar8[2] = pfVar8[3];
          bVar3 = true;
          *puVar7 = puVar7[1];
          pfVar8[3] = fVar1;
          puVar7[1] = uVar2;
        }
        iVar5 = iVar5 + 4;
        pfVar8 = pfVar8 + 4;
        puVar7 = puVar7 + 4;
      } while (iVar5 < param_3 + -4);
    }
    if (iVar5 < iVar4) {
      iVar6 = iVar4 - iVar5;
      puVar7 = (unsigned int *)(iVar5 * 4 + param_2);
      pfVar8 = (float *)(iVar5 * 4 + param_1);
      do {
        pfVar9 = pfVar8 + 1;
        fVar1 = *pfVar8;
        if (*pfVar9 < fVar1) {
          uVar2 = *puVar7;
          *pfVar8 = *pfVar9;
          bVar3 = true;
          *puVar7 = *(unsigned int *)((int)pfVar9 + (param_2 - param_1));
          *pfVar9 = fVar1;
          *(unsigned int *)((int)pfVar9 + (param_2 - param_1)) = uVar2;
        }
        puVar7 = puVar7 + 1;
        iVar6 = iVar6 + -1;
        pfVar8 = pfVar9;
      } while (iVar6 != 0);
    }
  } while (bVar3);
  return;
}

