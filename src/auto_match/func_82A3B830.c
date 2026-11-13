void fn_82A3B830(int param_1)

{
  char cVar1;
  unsigned __int64 uVar2;
  int iVar3;
  unsigned __int64 uVar4;
  
  uVar2 = 2;
  *(unsigned char *)(param_1 + 0x454) = 0;
  *(unsigned char *)(param_1 + 0x455) = 1;
  *(unsigned char *)(param_1 + 0x456) = 2;
  cVar1 = '\x04';
  *(unsigned char *)(param_1 + 0x457) = 3;
  iVar3 = 4;
  do {
    uVar4 = uVar2;
    if (0 < (int)uVar2) {
      do {
        *(char *)(param_1 + 0x454 + iVar3) = cVar1;
        iVar3 = iVar3 + 1;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    uVar4 = uVar2;
    if (0 < (int)uVar2) {
      do {
        *(char *)(param_1 + 0x454 + iVar3) = cVar1 + '\x01';
        iVar3 = iVar3 + 1;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    uVar2 = (uVar2 & 0x7fffffff) << 1;
    cVar1 = cVar1 + '\x02';
  } while (iVar3 < 0x400);
  return;
}

