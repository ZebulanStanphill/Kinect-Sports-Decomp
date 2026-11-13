void fn_82834548(unsigned int *param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  unsigned int uVar6;
  unsigned int *puVar7;
  
  puVar4 = param_1;
  if (param_1 == param_2) {
    return;
  }
  while (puVar7 = puVar4 + 3, puVar7 != param_2) {
    uVar1 = puVar4[4];
    uVar2 = *puVar7;
    uVar3 = puVar4[5];
    puVar5 = puVar7;
    if (uVar1 < (unsigned int)param_1[1]) {
      while (param_1 != puVar5) {
        *puVar5 = puVar5[-3];
        puVar5[1] = puVar5[-2];
        puVar5[2] = puVar5[-1];
        puVar5 = puVar5 + -3;
      }
      *param_1 = uVar2;
      param_1[1] = uVar1;
      param_1[2] = uVar3;
      puVar4 = puVar7;
    }
    else {
      uVar6 = puVar4[1];
      puVar4 = puVar7;
      while (uVar1 < uVar6) {
        *puVar4 = puVar4[-3];
        puVar4[1] = puVar4[-2];
        puVar4[2] = puVar4[-1];
        uVar6 = puVar4[-5];
        puVar4 = puVar4 + -3;
      }
      *puVar4 = uVar2;
      puVar4[1] = uVar1;
      puVar4[2] = uVar3;
      puVar4 = puVar7;
    }
  }
  return;
}

