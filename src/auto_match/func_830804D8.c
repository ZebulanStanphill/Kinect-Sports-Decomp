int fn_830804D8(unsigned int *param_1,__int64 param_2,unsigned int *param_3,int param_4,int *param_5)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int *puVar9;
  unsigned int *puVar10;
  unsigned int *puVar11;
  unsigned int *puVar12;
  unsigned int *puVar13;
  
  *param_5 = 0;
  puVar13 = param_3 + param_4 * 2;
  puVar10 = param_3;
  while (puVar9 = param_1, param_2 = param_2 + -1, 0 < param_2) {
    param_1 = puVar9 + 8;
    uVar1 = puVar9[4];
    if (*param_1 < uVar1) {
      puVar11 = puVar9 + 0x11;
      puVar12 = param_1;
      do {
        uVar2 = puVar9[5];
        uVar3 = puVar9[1];
        uVar4 = puVar9[6];
        uVar5 = puVar9[2];
        uVar6 = (uVar2 - puVar11[8] | puVar11[0xc] - uVar3 | uVar4 - puVar11[9] |
                puVar11[0xd] - uVar5) & 0x80000000;
        uVar7 = (uVar2 - puVar11[0x10] | uVar4 - puVar11[0x11] | puVar11[0x14] - uVar3 |
                puVar11[0x15] - uVar5) & 0x80000000;
        uVar8 = (uVar2 - *puVar11 | puVar11[4] - uVar3 | uVar4 - puVar11[1] | puVar11[5] - uVar5) &
                0x80000000;
        uVar2 = (puVar11[-4] - uVar3 | uVar2 - puVar11[-8] | uVar4 - puVar11[-7] |
                puVar11[-3] - uVar5) & 0x80000000;
        if ((uVar7 & uVar6 & uVar8 & uVar2) == 0) {
          if (uVar2 == 0) {
            if (puVar10 < puVar13) {
              uVar2 = puVar11[-6];
              *puVar10 = puVar9[3];
              puVar10[1] = uVar2;
              puVar10 = puVar10 + 2;
            }
            else {
              *param_5 = *param_5 + 1;
            }
          }
          if ((uVar8 == 0) && (puVar11[-1] <= uVar1)) {
            if (puVar10 < puVar13) {
              uVar2 = puVar11[2];
              *puVar10 = puVar9[3];
              puVar10[1] = uVar2;
              puVar10 = puVar10 + 2;
            }
            else {
              *param_5 = *param_5 + 1;
            }
          }
          if ((uVar6 == 0) && (puVar11[7] <= uVar1)) {
            if (puVar10 < puVar13) {
              uVar2 = puVar11[10];
              *puVar10 = puVar9[3];
              puVar10[1] = uVar2;
              puVar10 = puVar10 + 2;
            }
            else {
              *param_5 = *param_5 + 1;
            }
          }
          if ((uVar7 == 0) && (puVar11[0xf] <= uVar1)) {
            if (puVar10 < puVar13) {
              uVar2 = puVar11[0x12];
              *puVar10 = puVar9[3];
              puVar10[1] = uVar2;
              puVar10 = puVar10 + 2;
            }
            else {
              *param_5 = *param_5 + 1;
            }
          }
        }
        puVar12 = puVar12 + 0x20;
        puVar11 = puVar11 + 0x20;
      } while (*puVar12 < uVar1);
    }
  }
  return (int)puVar10 - (int)param_3 >> 3;
}

