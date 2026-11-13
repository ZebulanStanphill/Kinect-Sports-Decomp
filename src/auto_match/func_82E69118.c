void fn_82E69118(unsigned int *param_1,char *param_2,int param_3)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned char bVar3;
  char cVar4;
  unsigned int uVar5;
  
  *param_1 = param_2;
  uVar5 = 0x20 - param_3;
  param_1[2] = param_2;
  bVar1 = param_2[1];
  bVar2 = param_2[2];
  bVar3 = param_2[3];
  cVar4 = *param_2;
  param_1[1] = 0;
  param_1[4] = uVar5;
  param_1[3] = ((((int)cVar4 & 0xffffU) << 8 | (unsigned int)bVar1) << 8 | (unsigned int)bVar2) << 8 | (unsigned int)bVar3;
  if (uVar5 == 0x20) {
    param_1[3] = 0;
    return;
  }
  param_1[3] = param_1[3] & -1 << (uVar5 & 0x3f);
  return;
}

