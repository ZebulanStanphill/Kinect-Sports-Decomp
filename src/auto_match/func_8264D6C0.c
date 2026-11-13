void fn_8264D6C0(unsigned int param_1,int param_2)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  
  if ((0x7f0fffff < param_1) && (param_1 < 0x87000000)) {
    return;
  }
  uVar2 = (unsigned __int64)param_1 & 0xffffff80;
  uVar1 = (int)((param_2 + 0x7fU & 0xffffff80) - (int)uVar2) >> 7;
  uVar4 = (__int64)(int)uVar1 & 7;
  for (uVar3 = (unsigned __int64)(uVar1 >> 3); uVar3 != 0; uVar3 = uVar3 - 1) {
    dataCacheBlockFlush(uVar2);
    dataCacheBlockFlush(uVar2 + 0x80);
    dataCacheBlockFlush(uVar2 + 0x100);
    dataCacheBlockFlush(uVar2 + 0x180);
    dataCacheBlockFlush(uVar2 + 0x200);
    dataCacheBlockFlush(uVar2 + 0x280);
    dataCacheBlockFlush(uVar2 + 0x300);
    dataCacheBlockFlush(uVar2 + 0x380);
    uVar2 = uVar2 + 0x400;
  }
  for (; uVar4 != 0; uVar4 = uVar4 - 1) {
    dataCacheBlockFlush(uVar2);
    uVar2 = uVar2 + 0x80;
  }
  sync(0);
  return;
}

