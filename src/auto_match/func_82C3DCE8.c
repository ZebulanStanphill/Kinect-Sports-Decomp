void fn_82C3DCE8(int param_1,int param_2,int *param_3,int param_4,int param_5)

{
  short *psVar1;
  short *psVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  short *psVar7;
  unsigned int uVar8;
  short *psVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  
  iVar13 = 0;
  iVar15 = *(int *)(param_2 + 0x1c);
  iVar14 = *(int *)(param_2 + 0x24);
  iVar12 = *(int *)(param_2 + 0x14) * 2 + *(int *)(param_2 + 0x18);
  uVar8 = (unsigned int)*(unsigned short *)(param_1 + 0x22);
  if (*(unsigned short *)(param_1 + 0x22) != 0) {
    piVar11 = param_3;
    do {
      if (*(int *)((param_4 - (int)param_3) + (int)piVar11) == 0) {
        iVar5 = *(int *)(param_2 + 4);
      }
      else {
        iVar17 = 0;
        iVar10 = 0;
        iVar4 = *(int *)(param_2 + 4) >> 1;
        iVar16 = 0;
        iVar5 = 0;
        if (1 < iVar4) {
          psVar7 = (short *)(iVar12 + -2);
          psVar9 = (short *)(iVar15 + 2);
          do {
            psVar1 = psVar7 + 1;
            iVar5 = iVar5 + 2;
            psVar2 = psVar7 + 3;
            psVar7 = psVar7 + 4;
            iVar17 = (int)*(short *)((iVar12 - iVar15) + (int)psVar9) * (int)*psVar9 +
                     (int)psVar9[-1] * (int)*psVar1 + iVar17;
            iVar10 = (int)psVar9[1] * (int)*psVar2 + (int)psVar9[2] * (int)*psVar7 + iVar10;
            psVar9 = psVar9 + 4;
          } while (iVar5 < iVar4 + -1);
        }
        if (iVar5 < iVar4) {
          iVar5 = iVar5 * 4;
          iVar16 = (int)*(short *)(iVar5 + iVar15 + 2) * (int)*(short *)(iVar5 + iVar12 + 2) +
                   (int)*(short *)(iVar5 + iVar15) * (int)*(short *)(iVar5 + iVar12);
        }
        iVar5 = 0;
        iVar16 = iVar10 + iVar17 + iVar16;
        iVar4 = 0;
        iVar10 = 0;
        if (1 < iVar13) {
          piVar6 = param_3 + -1;
          psVar7 = (short *)(iVar14 + -2);
          iVar5 = 0;
          iVar4 = 0;
          do {
            psVar9 = psVar7 + 1;
            iVar10 = iVar10 + 2;
            psVar7 = psVar7 + 2;
            piVar3 = piVar6 + 1;
            piVar6 = piVar6 + 2;
            iVar5 = (int)*psVar9 * *piVar3 + iVar5;
            iVar4 = (int)*psVar7 * *piVar6 + iVar4;
          } while (iVar10 < iVar13 + -1);
        }
        if (iVar10 < iVar13) {
          iVar16 = (int)*(short *)(iVar10 * 2 + iVar14) * param_3[iVar10] + iVar16;
        }
        iVar5 = *(int *)(param_2 + 0xc) + iVar4 + iVar5 + iVar16 >> (*(unsigned int *)(param_2 + 8) & 0x3f);
        *(int *)((param_4 - (int)param_3) + (int)piVar11) = iVar5;
        if (param_5 != 0) {
          *piVar11 = iVar5 + *piVar11;
        }
        iVar5 = *(int *)(param_2 + 4);
        uVar8 = (unsigned int)*(unsigned short *)(param_1 + 0x22);
      }
      iVar13 = iVar13 + 1;
      iVar14 = uVar8 * 2 + iVar14;
      iVar15 = iVar5 * 2 + iVar15;
      piVar11 = piVar11 + 1;
    } while (iVar13 < (int)uVar8);
  }
  return;
}

