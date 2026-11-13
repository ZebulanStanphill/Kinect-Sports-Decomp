#define true 1
extern int fn_82ACACA8();


__int64 fn_82ACAE18(unsigned int *param_1,unsigned int param_2,unsigned int *param_3)

{
  int *piVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  __int64 lVar4;
  unsigned __int64 uVar5;
  unsigned int *puVar6;
  unsigned __int64 uVar7;
  unsigned int *puVar8;
  __int64 lVar9;
  
  piVar1 = (int *)*param_1;
  uVar5 = (unsigned __int64)(unsigned int)(-1 << (param_2 + 1 & 0x1f));
  puVar8 = (unsigned int *)(piVar1 + 1);
  if ((~(unsigned int)piVar1 & 1) == 0) {
    puVar8 = param_1;
  }
  puVar8 = (unsigned int *)((param_2 + 1 >> 3 & 0x1ffffffc) + (int)puVar8);
  if ((~(unsigned int)piVar1 & 1) == 0) {
    puVar6 = param_1 + 1;
  }
  else {
    puVar6 = (unsigned int *)(piVar1 + *piVar1 + 1);
  }
  uVar7 = (unsigned __int64)(param_2 >> 5);
  while( true ) {
    if (puVar6 <= puVar8) {
      return -1;
    }
    if ((uVar5 & ~(unsigned __int64)*puVar8) != 0) break;
    puVar8 = puVar8 + 1;
    uVar5 = 0xffffffffffffffff;
    uVar7 = uVar7 + 1;
  }
  uVar2 = (unsigned int)(uVar5 & ~(unsigned __int64)*puVar8);
  uVar5 = 0x1f - LZCOUNT(uVar2 & ~(uVar2 - 1));
  if ((uVar5 & 0xffffffff) == 0) {
    uVar7 = uVar7 - 1;
    uVar5 = 0x20;
  }
  lVar9 = (uVar7 & 0x7ffffff) * 0x20;
  lVar4 = (uVar5 - 1 & 0xfffffffc) + lVar9;
  if ((puVar8 + 1 == puVar6) && (0x20 < (lVar4 + 4U & 0xffffffff))) {
    return -1;
  }
  uVar3 = fn_82ACACA8(param_1,lVar4,lVar4 + 3);
  *param_3 = uVar3;
  return lVar9 + (uVar5 - 1);
}

