void fn_822F8A68(unsigned int *param_1,unsigned int *param_2)

{
  float fVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  
  puVar3 = param_1;
  if (param_1 == param_2) {
    return;
  }
  while (puVar5 = puVar3 + 2, puVar5 != param_2) {
    uVar2 = *puVar5;
    fVar1 = (float)puVar3[3];
    puVar4 = puVar3 + 3;
    puVar3 = puVar5;
    if (fVar1 <= (float)param_1[1]) {
      while ((float)puVar5[-1] < fVar1) {
        *puVar5 = puVar5[-2];
        puVar5[1] = puVar5[-1];
        puVar5 = puVar5 + -2;
      }
      puVar5[1] = fVar1;
      *puVar5 = uVar2;
    }
    else {
      while (param_1 != puVar5) {
        puVar4[-1] = puVar4[-3];
        *puVar4 = puVar4[-2];
        puVar5 = puVar4 + -3;
        puVar4 = puVar4 + -2;
      }
      param_1[1] = fVar1;
      *param_1 = uVar2;
    }
  }
  return;
}

