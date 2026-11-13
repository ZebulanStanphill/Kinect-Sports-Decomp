__int64 fn_8307FC58(int param_1,unsigned int param_2)

{
  unsigned int uVar1;
  __int64 lVar2;
  __int64 lVar3;
  __int64 lVar4;
  unsigned __int64 uVar5;
  unsigned int *puVar6;
  unsigned __int64 uVar7;
  
  lVar3 = 0;
  lVar2 = 0;
  uVar7 = 0;
  if (1 < (int)param_2) {
    puVar6 = (unsigned int *)(param_1 + -4);
    lVar4 = (((unsigned __int64)param_2 - 2 & 0xffffffff) >> 1) + 1;
    uVar7 = lVar4 * 2 & 0xfffffffe;
    do {
      uVar5 = ((unsigned __int64)(puVar6[1] >> 1) & 0x55555555) + ((unsigned __int64)puVar6[1] & 0x55555555);
      uVar5 = (uVar5 >> 2 & 0x33333333) + (uVar5 & 0x33333333);
      uVar5 = (uVar5 >> 4 & 0xf0f0f0f) + (uVar5 & 0xf0f0f0f);
      uVar5 = (uVar5 >> 8 & 0xf000f) + (uVar5 & 0xf000f);
      puVar6 = puVar6 + 2;
      lVar3 = (uVar5 >> 0x10) + (uVar5 & 0xff) + lVar3;
      uVar5 = ((unsigned __int64)(*puVar6 >> 1) & 0x55555555) + ((unsigned __int64)*puVar6 & 0x55555555);
      uVar5 = (uVar5 >> 2 & 0x33333333) + (uVar5 & 0x33333333);
      uVar5 = (uVar5 >> 4 & 0xf0f0f0f) + (uVar5 & 0xf0f0f0f);
      uVar5 = (uVar5 >> 8 & 0xf000f) + (uVar5 & 0xf000f);
      lVar2 = (uVar5 >> 0x10) + (uVar5 & 0xff) + lVar2;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  if ((int)uVar7 < (int)param_2) {
    uVar1 = *(unsigned int *)((int)(uVar7 << 2) + param_1);
    uVar7 = ((unsigned __int64)(uVar1 >> 1) & 0x55555555) + ((unsigned __int64)uVar1 & 0x55555555);
    uVar7 = (uVar7 >> 2 & 0x33333333) + (uVar7 & 0x33333333);
    uVar7 = (uVar7 >> 4 & 0xf0f0f0f) + (uVar7 & 0xf0f0f0f);
    uVar7 = (uVar7 >> 8 & 0xf000f) + (uVar7 & 0xf000f);
    return lVar2 + lVar3 + (uVar7 >> 0x10) + (uVar7 & 0xff);
  }
  return lVar2 + lVar3;
}

