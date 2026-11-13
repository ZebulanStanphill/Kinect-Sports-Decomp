unsigned __int64 fn_8307E3C8(int param_1,int param_2)

{
  __int64 lVar1;
  unsigned __int64 uVar2;
  unsigned int *puVar3;
  
  uVar2 = 0;
  puVar3 = (unsigned int *)(param_2 * 0x60 + *(int *)(param_1 + 8));
  lVar1 = ((unsigned __int64)(puVar3[1] >> 0x1d) & 1) + 1;
  if (lVar1 != 0) {
    do {
      dataCacheBlockClearToZero(uVar2 + puVar3[0x12]);
      uVar2 = uVar2 + 0x80;
    } while ((uVar2 & 0xffffffff) < (unsigned __int64)(lVar1 * 0x100));
  }
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[4] = puVar3[4] & 0x7fffffff;
  puVar3[0x15] = 0;
  puVar3[0x16] = 0;
  puVar3[0x13] = 0;
  *puVar3 = *puVar3 & 0x7cff000;
  puVar3[9] = puVar3[9] & 0xffffffe0;
  puVar3[1] = puVar3[1] & 0x7ffff000 | 0x80000000;
  *(unsigned short *)((int)puVar3 + 0x52) = 0;
  puVar3[2] = 0;
  puVar3[3] = puVar3[3] & 0x3ffffff;
  return 0;
}

