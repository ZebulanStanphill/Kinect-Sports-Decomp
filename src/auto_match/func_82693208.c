void fn_82693208(__int64 param_1,unsigned __int64 param_2,__int64 param_3,unsigned int param_4)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  __int64 lVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  __int64 lVar6;
  unsigned __int64 uVar7;
  __int64 lVar8;
  unsigned __int64 uVar9;
  
  uVar1 = (param_2 & 0xffffffff) >> 0x14;
  uVar9 = (param_2 + param_3) - 1;
  uVar2 = (uVar9 & 0xffffffff) >> 0x14;
  if (uVar1 <= uVar2) {
    lVar3 = uVar1 * 8 + param_1 + 4;
    uVar4 = uVar1;
    do {
      uVar7 = 0;
      uVar5 = 0xff;
      if ((uVar4 & 0xffffffff) == uVar1) {
        uVar7 = (param_2 & 0xffffffff) >> 0xc & 0xff;
      }
      if ((uVar4 & 0xffffffff) == uVar2) {
        uVar5 = (uVar9 & 0xffffffff) >> 0xc & 0xff;
      }
      if (uVar7 <= uVar5) {
        lVar6 = uVar7 * 4 + (unsigned __int64)*(unsigned int *)lVar3 + -4;
        for (lVar8 = (uVar5 - uVar7) + 1; lVar8 != 0; lVar8 = lVar8 + -1) {
          lVar6 = lVar6 + 4;
          *(unsigned int *)lVar6 = param_4;
        }
      }
      uVar4 = uVar4 + 1;
      lVar3 = lVar3 + 8;
    } while ((uVar4 & 0xffffffff) <= uVar2);
  }
  return;
}

