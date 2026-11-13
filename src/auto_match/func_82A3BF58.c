extern unsigned int lbl_8208949C;


unsigned __int64 fn_82A3BF58(int param_1)

{
  unsigned char *pbVar1;
  unsigned int uVar2;
  unsigned short *puVar3;
  __int64 lVar4;
  int iVar5;
  __int64 lVar6;
  
  lVar4 = 0x4b0;
  iVar5 = 0;
  puVar3 = (unsigned short *)(param_1 + 0x28e6);
  lVar6 = 0x100;
  do {
    pbVar1 = (unsigned char *)(param_1 + 0x2530 + iVar5);
    iVar5 = iVar5 + 1;
    puVar3 = puVar3 + 1;
    lVar4 = (__int64)(int)(unsigned int)*pbVar1 * (__int64)(int)(unsigned int)*puVar3 + lVar4;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  if (*(unsigned int *)(param_1 + 0x868) != 0) {
    uVar2 = 0;
    do {
      iVar5 = (uVar2 + 0x20) * 8;
      lVar6 = 8;
      puVar3 = (unsigned short *)((iVar5 + 0x1473) * 2 + param_1);
      do {
        pbVar1 = (unsigned char *)(param_1 + 0x2530 + iVar5);
        iVar5 = iVar5 + 1;
        puVar3 = puVar3 + 1;
        lVar4 = (__int64)(int)((unsigned int)*pbVar1 + (unsigned int)(unsigned char)(&lbl_8208949C)[uVar2]) *
                (__int64)(int)(unsigned int)*puVar3 + lVar4;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
      uVar2 = uVar2 + 1 & 0xff;
    } while (uVar2 < *(unsigned int *)(param_1 + 0x868));
  }
  iVar5 = 0;
  puVar3 = (unsigned short *)(param_1 + 0x3c0c);
  lVar6 = 0xf9;
  do {
    pbVar1 = (unsigned char *)(param_1 + 0x27ed + iVar5);
    iVar5 = iVar5 + 1;
    puVar3 = puVar3 + 1;
    lVar4 = (__int64)(int)(unsigned int)*pbVar1 * (__int64)(int)(unsigned int)*puVar3 + lVar4;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  return (lVar4 + 7U & 0xffffffff) >> 3;
}

