unsigned char fn_82A5DEC8(int param_1)

{
  unsigned char bVar1;
  unsigned char *pbVar2;
  unsigned __int64 uVar3;
  unsigned short uVar4;
  unsigned short uVar5;
  
  if (*(unsigned short *)(param_1 + 0x10) < 0x20) {
    return 0;
  }
  uVar3 = (unsigned __int64)*(unsigned short *)(param_1 + 8);
  bVar1 = -(*(int *)(param_1 + 0x10) != 0) &
          -(uVar3 != 0) &
          -(*(char *)(param_1 + 0xb) == '\x02') & -(*(short *)(param_1 + 2) == 0x10) & 1U;
  if (*(unsigned short *)(param_1 + 8) != 0) {
    pbVar2 = (unsigned char *)(param_1 + 0x1c);
    do {
      bVar1 = -((*pbVar2 & 0xf0) < 0x31) &
              -((*pbVar2 & 0xf) < 5) &
              -(*(int *)(param_1 + 0x10) == *(int *)(pbVar2 + -0xc)) & bVar1;
      if (pbVar2[1] != 1) {
        bVar1 = -(pbVar2[1] == 2) & bVar1;
      }
      uVar5 = *(unsigned short *)(pbVar2 + 2);
      if (uVar5 != 0) {
        uVar4 = 0;
        for (; uVar5 != 0; uVar5 = uVar5 - 1 & uVar5) {
          uVar4 = uVar4 + 1;
        }
        bVar1 = -(pbVar2[1] == uVar4) & bVar1;
      }
      pbVar2 = pbVar2 + 0x14;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
    return bVar1;
  }
  return bVar1;
}

