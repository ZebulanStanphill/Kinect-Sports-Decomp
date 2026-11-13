#define true 1
extern int fn_82ACACA8();


__int64 fn_82ACAF10(unsigned int *param_1,unsigned int param_2,unsigned int *param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  __int64 lVar3;
  unsigned __int64 uVar4;
  unsigned int *puVar5;
  unsigned int *puVar6;
  unsigned __int64 uVar7;
  __int64 lVar8;
  
  uVar1 = *param_1;
  uVar4 = (unsigned __int64)(unsigned int)(2 << (param_2 + 1 & 0x1f)) - 1;
  puVar5 = (unsigned int *)(uVar1 + 4);
  if ((~uVar1 & 1) == 0) {
    puVar5 = param_1;
  }
  puVar5 = (unsigned int *)((param_2 + 1 >> 3 & 0x1ffffffc) + (int)puVar5);
  puVar6 = (unsigned int *)(uVar1 + 4);
  if ((~uVar1 & 1) == 0) {
    puVar6 = param_1;
  }
  uVar7 = (unsigned __int64)(param_2 >> 5);
  while( true ) {
    if (puVar5 < puVar6) {
      return -1;
    }
    if ((uVar4 & ~(unsigned __int64)*puVar5) != 0) break;
    puVar5 = puVar5 + -1;
    uVar4 = 0xffffffffffffffff;
    uVar7 = uVar7 - 1;
  }
  uVar4 = 0x1f - LZCOUNT((int)(uVar4 & ~(unsigned __int64)*puVar5));
  if ((uVar4 & 0xffffffff) == 0) {
    uVar7 = uVar7 - 1;
    uVar4 = 0x20;
  }
  lVar8 = (uVar7 & 0x7ffffff) * 0x20;
  lVar3 = (uVar4 - 1 & 0xfffffffc) + lVar8;
  uVar2 = fn_82ACACA8(param_1,lVar3,lVar3 + 3);
  *param_3 = uVar2;
  return lVar8 + (uVar4 - 1);
}

