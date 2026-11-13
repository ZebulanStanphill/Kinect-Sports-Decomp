int fn_83080058(unsigned int *param_1,__int64 param_2,unsigned int *param_3,__int64 param_4,unsigned int *param_5,
                 int param_6,int *param_7)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int *puVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  __int64 lVar10;
  unsigned int *puVar11;
  unsigned int *puVar12;
  unsigned int *puVar13;
  
  puVar13 = param_5 + param_6 * 2;
  *param_7 = 0;
  puVar11 = param_5;
  do {
    if (*param_3 < *param_1) {
      uVar1 = param_3[4];
      if (*param_1 < uVar1) {
        puVar12 = param_1 + 9;
        do {
          uVar2 = param_3[2];
          uVar3 = param_3[1];
          uVar4 = param_3[5];
          uVar5 = param_3[6];
          uVar7 = (puVar12[0xc] - uVar3 | puVar12[0xd] - uVar2 | uVar4 - puVar12[8] |
                  uVar5 - puVar12[9]) & 0x80000000;
          uVar8 = (puVar12[0x14] - uVar3 | puVar12[0x15] - uVar2 | uVar4 - puVar12[0x10] |
                  uVar5 - puVar12[0x11]) & 0x80000000;
          uVar9 = (puVar12[4] - uVar3 | puVar12[5] - uVar2 | uVar4 - *puVar12 | uVar5 - puVar12[1])
                  & 0x80000000;
          uVar2 = (puVar12[-4] - uVar3 | puVar12[-3] - uVar2 | uVar4 - puVar12[-8] |
                  uVar5 - puVar12[-7]) & 0x80000000;
          if ((uVar8 & uVar7 & uVar9 & uVar2) == 0) {
            if (uVar2 == 0) {
              if (puVar11 < puVar13) {
                uVar2 = param_3[3];
                *puVar11 = puVar12[-6];
                puVar11[1] = uVar2;
                puVar11 = puVar11 + 2;
              }
              else {
                *param_7 = *param_7 + 1;
              }
            }
            if ((uVar9 == 0) && (puVar12[-1] <= uVar1)) {
              if (puVar11 < puVar13) {
                uVar2 = param_3[3];
                *puVar11 = puVar12[2];
                puVar11[1] = uVar2;
                puVar11 = puVar11 + 2;
              }
              else {
                *param_7 = *param_7 + 1;
              }
            }
            if ((uVar7 == 0) && (puVar12[7] <= uVar1)) {
              if (puVar11 < puVar13) {
                uVar2 = param_3[3];
                *puVar11 = puVar12[10];
                puVar11[1] = uVar2;
                puVar11 = puVar11 + 2;
              }
              else {
                *param_7 = *param_7 + 1;
              }
            }
            if ((uVar8 == 0) && (puVar12[0xf] <= uVar1)) {
              if (puVar11 < puVar13) {
                uVar2 = param_3[3];
                *puVar11 = puVar12[0x12];
                puVar11[1] = uVar2;
                puVar11 = puVar11 + 2;
              }
              else {
                *param_7 = *param_7 + 1;
              }
            }
          }
          puVar6 = puVar12 + 0x17;
          puVar12 = puVar12 + 0x20;
        } while (*puVar6 < uVar1);
      }
      param_4 = param_4 + -1;
      param_3 = param_3 + 8;
      lVar10 = param_4;
    }
    else {
      uVar1 = param_1[4];
      if (*param_3 < uVar1) {
        puVar12 = param_3 + 9;
        do {
          uVar2 = param_1[6];
          uVar3 = param_1[5];
          uVar4 = param_1[1];
          uVar5 = param_1[2];
          uVar7 = (uVar3 - puVar12[8] | uVar2 - puVar12[9] | puVar12[0xc] - uVar4 |
                  puVar12[0xd] - uVar5) & 0x80000000;
          uVar8 = (uVar3 - puVar12[0x10] | uVar2 - puVar12[0x11] | puVar12[0x14] - uVar4 |
                  puVar12[0x15] - uVar5) & 0x80000000;
          uVar9 = (uVar3 - puVar12[-8] | uVar2 - puVar12[-7] | puVar12[-4] - uVar4 |
                  puVar12[-3] - uVar5) & 0x80000000;
          uVar2 = (uVar3 - *puVar12 | uVar2 - puVar12[1] | puVar12[4] - uVar4 | puVar12[5] - uVar5)
                  & 0x80000000;
          if ((uVar8 & uVar7 & uVar9 & uVar2) == 0) {
            if (uVar9 == 0) {
              if (puVar11 < puVar13) {
                uVar3 = puVar12[-6];
                *puVar11 = param_1[3];
                puVar11[1] = uVar3;
                puVar11 = puVar11 + 2;
              }
              else {
                *param_7 = *param_7 + 1;
              }
            }
            if ((uVar2 == 0) && (puVar12[-1] <= uVar1)) {
              if (puVar11 < puVar13) {
                uVar2 = puVar12[2];
                *puVar11 = param_1[3];
                puVar11[1] = uVar2;
                puVar11 = puVar11 + 2;
              }
              else {
                *param_7 = *param_7 + 1;
              }
            }
            if ((uVar7 == 0) && (puVar12[7] <= uVar1)) {
              if (puVar11 < puVar13) {
                uVar2 = puVar12[10];
                *puVar11 = param_1[3];
                puVar11[1] = uVar2;
                puVar11 = puVar11 + 2;
              }
              else {
                *param_7 = *param_7 + 1;
              }
            }
            if ((uVar8 == 0) && (puVar12[0xf] <= uVar1)) {
              if (puVar11 < puVar13) {
                uVar2 = puVar12[0x12];
                *puVar11 = param_1[3];
                puVar11[1] = uVar2;
                puVar11 = puVar11 + 2;
              }
              else {
                *param_7 = *param_7 + 1;
              }
            }
          }
          puVar6 = puVar12 + 0x17;
          puVar12 = puVar12 + 0x20;
        } while (*puVar6 < uVar1);
      }
      param_2 = param_2 + -1;
      param_1 = param_1 + 8;
      lVar10 = param_2;
    }
  } while (0 < lVar10);
  return (int)puVar11 - (int)param_5 >> 3;
}

