unsigned char fn_82A5DFF8(int param_1)

{
  unsigned short uVar1;
  unsigned char bVar2;
  unsigned __int64 uVar3;
  unsigned int uVar4;
  
  uVar1 = *(unsigned short *)(param_1 + 2);
  if (*(short *)(param_1 + 0x10) != 0x22) {
    return 0;
  }
  bVar2 = -(*(short *)(param_1 + 0x32) != 0) &
          3U - ((2 < *(unsigned char *)(param_1 + 0x31)) + '\x03') &
          -(*(short *)(param_1 + 0xe) == 0x10) &
          -((unsigned __int64)uVar1 << 1 == (unsigned __int64)*(unsigned short *)(param_1 + 0xc)) & 1U;
  if ((*(unsigned int *)(param_1 + 0x1c) == 0) || (0x7ff800 < *(unsigned int *)(param_1 + 0x1c))) {
    bVar2 = 0;
  }
  uVar4 = *(unsigned int *)(param_1 + 0x14);
  if (uVar4 != 0) {
    uVar3 = 0;
    do {
      uVar4 = uVar4 - 1 & uVar4;
      uVar3 = uVar3 + 1 & 0xffff;
    } while (uVar4 != 0);
    bVar2 = -(uVar1 == uVar3) & bVar2;
  }
  return -((unsigned __int64)*(unsigned int *)(param_1 + 0x2c) + (unsigned __int64)*(unsigned int *)(param_1 + 0x28) <=
          (unsigned __int64)*(unsigned int *)(param_1 + 0x18)) &
         -((unsigned __int64)*(unsigned int *)(param_1 + 0x24) + (unsigned __int64)*(unsigned int *)(param_1 + 0x20) <=
          (unsigned __int64)*(unsigned int *)(param_1 + 0x18)) &
         -((int)(uVar1 + 1) >> 1 == (unsigned int)*(unsigned short *)(param_1 + 0x12)) & bVar2;
}

