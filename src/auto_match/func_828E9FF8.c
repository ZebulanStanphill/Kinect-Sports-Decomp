unsigned int fn_828E9FF8(unsigned int *param_1,unsigned int param_2)

{
  unsigned char bVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned __int64 uVar5;
  
  uVar3 = 0;
  uVar4 = 0;
  if (param_2 == 0) {
    return uVar3;
  }
  uVar2 = *param_1;
  if ((uVar2 != 0) && (7 < uVar2 + param_2)) {
    uVar4 = 8 - uVar2;
    param_2 = param_2 - uVar4;
    bVar1 = *(unsigned char *)(param_1[2] + param_1[1]);
    param_1[1] = param_1[1] + 1;
    uVar3 = (unsigned int)(bVar1 >> (uVar2 & 0x3f));
    *param_1 = 0;
  }
  if (7 < (int)param_2) {
    uVar5 = (unsigned __int64)(param_2 >> 3);
    param_2 = param_2 - (param_2 & 0xfffffff8);
    do {
      bVar1 = *(unsigned char *)(param_1[1] + param_1[2]);
      param_1[1] = param_1[1] + 1;
      uVar3 = (unsigned int)bVar1 << (uVar4 & 0x3f) | uVar3;
      uVar4 = uVar4 + 8;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  if ((int)param_2 < 1) {
    return uVar3;
  }
  uVar2 = *param_1;
  bVar1 = *(unsigned char *)(param_1[2] + param_1[1]);
  *param_1 = uVar2 + param_2;
  return ((unsigned int)(bVar1 >> (uVar2 & 0x3f)) & ~(-1 << (param_2 & 0x3f))) << (uVar4 & 0x3f) | uVar3;
}

