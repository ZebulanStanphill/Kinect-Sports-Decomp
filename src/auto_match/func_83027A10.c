extern unsigned int lbl_821AAD20;


void fn_83027A10(unsigned int *param_1,unsigned short param_2,unsigned short param_3)

{
  unsigned short uVar1;
  unsigned short uVar2;
  unsigned int uVar3;
  int iVar4;
  short sVar5;
  unsigned int uVar6;
  
  sVar5 = 0;
  *param_1 = 0;
  uVar6 = 0;
  param_1[5] = 0;
  uVar3 = lbl_821AAD20;
  *(unsigned short *)(param_1 + 10) = 0;
  param_1[1] = uVar3;
  *(unsigned short *)((int)param_1 + 0x2a) = 0;
  param_1[2] = uVar3;
  param_1[3] = uVar3;
  param_1[4] = uVar3;
  do {
    iVar4 = uVar6 + 6;
    uVar6 = uVar6 + 1 & 0xff;
    param_1[iVar4] = uVar3;
  } while (uVar6 < 4);
  uVar1 = *(unsigned short *)((int)param_1 + 0x2e);
  uVar2 = (param_2 & 3) << 0xb;
  *(unsigned short *)(param_1 + 0xb) = param_3 & 0xfff7;
  *(unsigned short *)((int)param_1 + 0x2e) = uVar2 | uVar1 & 0xe7ff;
  for (param_3 = param_3 & 0xfff7; param_3 != 0; param_3 = param_3 - 1 & param_3) {
    sVar5 = sVar5 + 1;
  }
  *(unsigned short *)((int)param_1 + 0x2e) = uVar2 | uVar1 & 0x3ff | sVar5 << 0xd | 0x400;
  return;
}

