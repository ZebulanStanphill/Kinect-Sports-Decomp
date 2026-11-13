#define true 1
extern int fn_82510BE8();


unsigned int * fn_82510618(unsigned int *param_1,unsigned int *param_2,unsigned int *param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  int iVar5;
  unsigned int *puVar6;
  unsigned int *puVar7;
  unsigned int *puVar8;
  unsigned int *puVar9;
  unsigned int *puVar10;
  unsigned int *puVar11;
  unsigned int uVar12;
  unsigned int *puVar13;
  
  puVar13 = param_3 + -4;
  uVar12 = (int)param_3 - (int)param_2 >> 4;
  iVar5 = (int)puVar13 - (int)param_2 >> 4;
  puVar8 = param_2 + (((int)param_3 - (int)param_2 >> 5) +
                     (unsigned int)((int)uVar12 < 0 && (uVar12 & 1) != 0)) * 4;
  puVar7 = param_2;
  if (0x28 < iVar5) {
    uVar12 = iVar5 + 1;
    uVar12 = ((int)uVar12 >> 3) + (unsigned int)((int)uVar12 < 0 && (uVar12 & 7) != 0);
    fn_82510BE8(param_2,param_2 + uVar12 * 4,param_2 + uVar12 * 8);
    fn_82510BE8(puVar8 + (uVar12 & 0xfffffff) * -4,puVar8,puVar8 + uVar12 * 4);
    fn_82510BE8(puVar13 + (uVar12 & 0x7ffffff) * -8,puVar13 + (uVar12 & 0xfffffff) * -4,puVar13)
    ;
    puVar7 = param_2 + uVar12 * 4;
    puVar13 = puVar13 + (uVar12 & 0xfffffff) * -4;
  }
  fn_82510BE8(puVar7,puVar8,puVar13);
  puVar7 = puVar8 + 4;
  while (puVar13 = puVar8, param_2 < puVar13) {
    if ((puVar13[-4] < *puVar13) || (puVar8 = puVar13 + -4, *puVar13 < puVar13[-4])) break;
  }
  puVar8 = puVar13;
  puVar10 = puVar7;
  if (puVar7 < param_3) {
    do {
      puVar10 = puVar7;
      if ((*puVar7 < *puVar13) || (*puVar13 < *puVar7)) break;
      puVar7 = puVar7 + 4;
      puVar10 = puVar7;
    } while (puVar7 < param_3);
  }
LAB_825107b0:
  do {
    puVar6 = puVar13;
    puVar9 = puVar8;
    if (puVar7 < param_3) {
      uVar12 = *puVar7;
      if (uVar12 <= *puVar13) {
        if (uVar12 < *puVar13) goto joined_r0x825107bc;
        uVar1 = *puVar10;
        uVar2 = puVar10[1];
        uVar3 = puVar10[2];
        uVar4 = puVar10[3];
        *puVar10 = uVar12;
        puVar10[1] = puVar7[1];
        puVar10[2] = puVar7[2];
        puVar10[3] = puVar7[3];
        *puVar7 = uVar1;
        puVar7[1] = uVar2;
        puVar7[2] = uVar3;
        puVar7[3] = uVar4;
        goto LAB_825107a8;
      }
    }
    else {
joined_r0x825107bc:
      for (; param_2 < puVar8; puVar8 = puVar8 + -4) {
        puVar11 = puVar9 + -4;
        uVar12 = *puVar11;
        puVar13 = puVar6;
        if (*puVar6 <= uVar12) {
          if (*puVar6 < uVar12) break;
          puVar13 = puVar6 + -4;
          uVar1 = *puVar13;
          uVar2 = puVar6[-3];
          uVar3 = puVar6[-2];
          uVar4 = puVar6[-1];
          *puVar13 = uVar12;
          puVar6[-3] = puVar9[-3];
          puVar6[-2] = puVar9[-2];
          puVar6[-1] = puVar9[-1];
          *puVar11 = uVar1;
          puVar9[-3] = uVar2;
          puVar9[-2] = uVar3;
          puVar9[-1] = uVar4;
        }
        puVar6 = puVar13;
        puVar9 = puVar11;
      }
      if (puVar8 == param_2) {
        if (puVar7 == param_3) {
          *param_1 = puVar6;
          param_1[1] = puVar10;
          return param_1;
        }
        if (puVar10 != puVar7) {
          uVar12 = *puVar6;
          uVar1 = puVar6[1];
          uVar2 = puVar6[2];
          uVar3 = puVar6[3];
          *puVar6 = *puVar10;
          puVar6[1] = puVar10[1];
          puVar6[2] = puVar10[2];
          puVar6[3] = puVar10[3];
          *puVar10 = uVar12;
          puVar10[1] = uVar1;
          puVar10[2] = uVar2;
          puVar10[3] = uVar3;
        }
        uVar12 = *puVar6;
        puVar13 = puVar6 + 4;
        uVar1 = puVar6[1];
        uVar2 = puVar6[2];
        uVar3 = puVar6[3];
        *puVar6 = *puVar7;
        puVar6[1] = puVar7[1];
        puVar6[2] = puVar7[2];
        puVar6[3] = puVar7[3];
        *puVar7 = uVar12;
        puVar7[1] = uVar1;
        puVar7[2] = uVar2;
        puVar7[3] = uVar3;
LAB_825107a8:
        puVar10 = puVar10 + 4;
      }
      else {
        if (puVar7 == param_3) {
          puVar9 = puVar8 + -4;
          puVar13 = puVar6 + -4;
          if (puVar9 != puVar13) {
            uVar12 = *puVar9;
            uVar1 = puVar8[-3];
            uVar2 = puVar8[-2];
            uVar3 = puVar8[-1];
            *puVar9 = *puVar13;
            puVar8[-3] = puVar6[-3];
            puVar8[-2] = puVar6[-2];
            puVar8[-1] = puVar6[-1];
            *puVar13 = uVar12;
            puVar6[-3] = uVar1;
            puVar6[-2] = uVar2;
            puVar6[-1] = uVar3;
          }
          puVar11 = puVar10 + -4;
          uVar12 = *puVar13;
          uVar1 = puVar6[-3];
          uVar2 = puVar6[-2];
          uVar3 = puVar6[-1];
          *puVar13 = *puVar11;
          puVar6[-3] = puVar10[-3];
          puVar6[-2] = puVar10[-2];
          puVar6[-1] = puVar10[-1];
          *puVar11 = uVar12;
          puVar10[-3] = uVar1;
          puVar10[-2] = uVar2;
          puVar10[-1] = uVar3;
          puVar8 = puVar9;
          puVar10 = puVar11;
          goto LAB_825107b0;
        }
        puVar9 = puVar8 + -4;
        uVar12 = *puVar7;
        uVar1 = puVar7[1];
        uVar2 = puVar7[2];
        uVar3 = puVar7[3];
        *puVar7 = *puVar9;
        puVar7[1] = puVar8[-3];
        puVar7[2] = puVar8[-2];
        puVar7[3] = puVar8[-1];
        *puVar9 = uVar12;
        puVar8[-3] = uVar1;
        puVar8[-2] = uVar2;
        puVar8[-1] = uVar3;
        puVar13 = puVar6;
        puVar8 = puVar9;
      }
    }
    puVar7 = puVar7 + 4;
  } while( true );
}

