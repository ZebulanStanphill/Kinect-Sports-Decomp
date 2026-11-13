void fn_82510AC8(unsigned int *param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int *puVar6;
  unsigned int *puVar7;
  unsigned int *puVar8;
  
  puVar6 = param_1;
  if (param_1 != param_2) {
    while (puVar8 = puVar6 + 4, puVar8 != param_2) {
      uVar1 = *puVar8;
      uVar2 = puVar6[5];
      uVar3 = puVar6[6];
      uVar4 = puVar6[7];
      puVar7 = puVar8;
      if (uVar1 < *param_1) {
        while (param_1 != puVar7) {
          *puVar7 = puVar7[-4];
          puVar7[1] = puVar7[-3];
          puVar7[2] = puVar7[-2];
          puVar7[3] = puVar7[-1];
          puVar7 = puVar7 + -4;
        }
        *param_1 = uVar1;
        param_1[1] = uVar2;
        param_1[2] = uVar3;
        param_1[3] = uVar4;
        puVar6 = puVar8;
      }
      else {
        uVar5 = *puVar6;
        while (uVar1 < uVar5) {
          *puVar7 = *puVar6;
          puVar7[1] = puVar6[1];
          puVar7[2] = puVar6[2];
          puVar7[3] = puVar6[3];
          uVar5 = puVar6[-4];
          puVar7 = puVar6;
          puVar6 = puVar6 + -4;
        }
        *puVar7 = uVar1;
        puVar7[1] = uVar2;
        puVar7[2] = uVar3;
        puVar7[3] = uVar4;
        puVar6 = puVar8;
      }
    }
  }
  return;
}

