extern int fn_82C3C4E8();


void fn_82C1D7C0(short *param_1,short *param_2)

{
  short sVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  short sVar4;
  
  sVar1 = *param_1;
  *param_2 = sVar1;
  param_2[1] = param_1[1];
  *(unsigned int *)(param_2 + 2) = *(unsigned int *)(param_1 + 2);
  *(unsigned int *)(param_2 + 4) = *(unsigned int *)(param_1 + 4);
  param_2[6] = param_1[6];
  param_2[7] = param_1[7];
  if (sVar1 == 0x160) {
    sVar4 = 0x16;
  }
  else if (sVar1 == 0x161) {
    sVar4 = 0x1c;
  }
  else if ((sVar1 == 0x162) || (sVar4 = -1, sVar1 == 0x163)) {
    sVar4 = 0x24;
  }
  param_2[8] = sVar4 + -0x12;
  if ((sVar1 == 0x162) || (sVar1 == 0x163)) {
    param_2[9] = param_1[7];
    uVar2 = *(unsigned int *)(param_1 + 8);
    param_2[0xc] = 0;
    param_2[0xd] = 0;
    *(unsigned int *)(param_2 + 10) = uVar2;
    param_2[0xe] = 0;
    param_2[0xf] = 0;
    param_2[0x10] = param_1[10];
    param_2[0x11] = 0;
    if (sVar1 == 0x162) {
      param_2[0x11] = param_1[0xb];
    }
  }
  else if (sVar1 == 0x161) {
    uVar3 = ((unsigned __int64)*(unsigned int *)(param_1 + 4) & 0x1fffffff) * 8;
    if (500 < uVar3) {
      uVar3 = ((uVar3 + 500 & 0xffffffff) / 1000) * 1000;
    }
    uVar2 = fn_82C3C4E8(2,*(unsigned int *)(param_1 + 2),uVar3);
    *(unsigned int *)(param_2 + 9) = uVar2;
    sVar1 = param_1[10];
    param_2[0xc] = 0;
    param_2[0xd] = 0;
    param_2[0xb] = sVar1;
  }
  return;
}

