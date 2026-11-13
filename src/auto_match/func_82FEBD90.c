void fn_82FEBD90(unsigned int *param_1)

{
  float uVar1;
  unsigned int *puVar2;
  int lVar3;
  
  puVar2 = param_1;
  lVar3 = 8;
  do {
    *puVar2++ = 0;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  param_1[3] = 0;
  param_1[1] = 4;
  param_1[2] = 0x2000;
  uVar1 = 1.0f;
  *param_1 = 1;
  *(float *)&param_1[7] = uVar1;
  param_1[4] = 4;
  param_1[5] = 0x2000;
  param_1[6] = 0x1000000;
  return;
}

