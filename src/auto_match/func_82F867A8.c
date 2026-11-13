void fn_82F867A8(unsigned short *param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned short uVar3;
  unsigned int uVar4;
  unsigned short uVar5;
  
  uVar4 = 0x80000000;
  uVar1 = *param_2;
  uVar5 = *(unsigned short *)param_2 >> 4 & 0x7ff;
  uVar2 = param_2[1];
  uVar3 = *(unsigned short *)param_2 & 0x8000;
  if (uVar5 == 0) {
    if (((uVar1 & 0xfffff) == 0) && (uVar2 == 0)) {
      *param_1 = uVar3;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
      return;
    }
    uVar5 = 0x3c01;
    uVar4 = 0;
  }
  else if (uVar5 == 0x7ff) {
    uVar5 = 0x7fff;
  }
  else {
    uVar5 = uVar5 + 0x3c00;
  }
  *(unsigned int *)(param_1 + 3) = uVar2 << 0xb;
  *(unsigned int *)(param_1 + 1) = uVar2 >> 0x15 | (uVar1 & 0xfffff) << 0xb | uVar4;
  for (; uVar4 == 0; uVar4 = uVar4 & 0x40000000) {
    uVar1 = *(unsigned int *)(param_1 + 3);
    uVar4 = *(unsigned int *)(param_1 + 1);
    *(unsigned int *)(param_1 + 3) = uVar1 << 1;
    *(unsigned int *)(param_1 + 1) = uVar1 >> 0x1f | uVar4 << 1;
    uVar5 = uVar5 - 1;
  }
  *param_1 = uVar3 | uVar5;
  return;
}

