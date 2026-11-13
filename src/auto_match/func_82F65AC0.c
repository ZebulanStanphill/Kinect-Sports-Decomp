void stricmp(int param_1,int param_2)

{
  unsigned char *pbVar1;
  unsigned char bVar2;
  unsigned char bVar3;
  unsigned char *pbVar4;
  
  pbVar4 = (unsigned char *)(param_1 + -1);
  pbVar1 = (unsigned char *)(param_2 + -1);
  do {
    do {
      pbVar1 = pbVar1 + 1;
      bVar3 = *pbVar1;
      pbVar4 = pbVar4 + 1;
      bVar2 = *pbVar4;
      if (bVar3 == 0) {
        return;
      }
    } while (bVar2 == bVar3);
    if ((0x40 < bVar3) && (bVar3 < 0x5b)) {
      bVar3 = bVar3 | 0x20;
    }
    if ((0x40 < bVar2) && (bVar2 < 0x5b)) {
      bVar2 = bVar2 | 0x20;
    }
  } while (bVar2 == bVar3);
  return;
}

