void fn_82A3B8B8(int param_1)

{
  int uVar1;
  unsigned char cVar2;
  unsigned int uVar3;
  
  uVar3 = 0;
  do {
    cVar2 = '\0';
    for (uVar1 = uVar3; uVar1 != 0; uVar1 = (int)uVar1 >> 1) {
      if ((uVar1 & 1) != 0) {
        cVar2 = cVar2 + '\x01';
      }
    }
    *(char *)(param_1 + 0x872 + uVar3) = cVar2;
    uVar3 = uVar3 + 1;
  } while ((int)uVar3 < 0x100);
  return;
}

