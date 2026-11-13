typedef unsigned char bool;


bool fn_82BE5100(int param_1)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned char *pbVar3;
  unsigned char *pbVar4;
  unsigned char abStack_30 [48];
  
  pbVar4 = (unsigned char *)(param_1 + 0x18);
  pbVar3 = abStack_30;
  abStack_30[0] = 0;
  abStack_30[1] = 0;
  abStack_30[2] = 0;
  abStack_30[3] = 0;
  abStack_30[4] = 0;
  abStack_30[5] = 0;
  abStack_30[6] = 0;
  abStack_30[7] = 0;
  abStack_30[8] = 0;
  abStack_30[9] = 0;
  abStack_30[10] = 0;
  abStack_30[0xb] = 0;
  abStack_30[0xc] = 0;
  abStack_30[0xd] = 0;
  abStack_30[0xe] = 0;
  abStack_30[0xf] = 0;
  abStack_30[0x10] = 0;
  abStack_30[0x11] = 0;
  abStack_30[0x12] = 0;
  abStack_30[0x13] = 0;
  abStack_30[0x14] = 0;
  abStack_30[0x15] = 0;
  abStack_30[0x16] = 0;
  abStack_30[0x17] = 0;
  abStack_30[0x18] = 0;
  abStack_30[0x19] = 0;
  abStack_30[0x1a] = 0;
  abStack_30[0x1b] = 0;
  abStack_30[0x1c] = 0;
  abStack_30[0x1d] = 0;
  abStack_30[0x1e] = 0;
  abStack_30[0x1f] = 0;
  abStack_30[0x20] = 0;
  abStack_30[0x21] = 0;
  abStack_30[0x22] = 0;
  abStack_30[0x23] = 0;
  do {
    bVar1 = *pbVar4;
    bVar2 = *pbVar3;
    if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
    pbVar4 = pbVar4 + 1;
    pbVar3 = pbVar3 + 1;
  } while (pbVar4 != (unsigned char *)(param_1 + 0x3c));
  return (int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) == 0;
}

