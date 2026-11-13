void fn_82AE5778(__int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  __int64 lVar4;
  unsigned __int64 *puVar6;
  __int64 lVar5;
  
  uVar2 = -1L << (param_2 & 0x3f);
  lVar4 = ((param_2 & 0xffffffff) >> 3 & 0x1ffffff8) + param_1;
  uVar3 = ((param_3 & 0xffffffff) >> 3 & 0x1ffffff8) + param_1;
  uVar1 = (2L << (param_3 & 0x3f)) - 1;
  puVar6 = (unsigned __int64 *)lVar4;
  if ((param_2 & 0xffffffff) >> 6 == (param_3 & 0xffffffff) >> 6) {
    *puVar6 = uVar1 & uVar2 | *puVar6;
  }
  else {
    *puVar6 = *puVar6 | uVar2;
    if ((lVar4 + 8U & 0xffffffff) < (uVar3 & 0xffffffff)) {
      for (lVar5 = (((uVar3 - (lVar4 + 8U)) - 1 & 0xffffffff) >> 3) + 1; lVar5 != 0;
          lVar5 = lVar5 + -1) {
        lVar4 = lVar4 + 8;
        *(unsigned __int64 *)lVar4 = 0xffffffffffffffff;
      }
    }
    *(unsigned __int64 *)uVar3 = *(unsigned __int64 *)uVar3 | uVar1;
  }
  return;
}

