__int64 fn_82AE56A8(__int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned __int64 *puVar4;
  unsigned __int64 uVar5;
  __int64 lVar6;
  
  uVar3 = ((param_2 & 0xffffffff) >> 3 & 0x1ffffff8) + param_1;
  uVar2 = ((param_3 & 0xffffffff) >> 3 & 0x1ffffff8) + param_1;
  uVar5 = (2L << (param_3 & 0x3f)) - 1;
  uVar1 = -1L << (param_2 & 0x3f);
  if ((param_2 & 0xffffffff) >> 6 == (param_3 & 0xffffffff) >> 6) {
    uVar1 = uVar1 & uVar5;
    uVar5 = uVar1;
  }
  uVar5 = *(unsigned __int64 *)uVar2 & uVar5;
  if (uVar5 == 0) {
    do {
      uVar2 = uVar2 - 8;
      puVar4 = (unsigned __int64 *)uVar3;
      if ((uVar2 & 0xffffffff) <= (uVar3 & 0xffffffff)) {
        uVar5 = *puVar4 & uVar1;
        param_3 = param_2;
        if (uVar5 == 0) {
          return -1;
        }
        goto code_r0x82ae5704;
      }
      lVar6 = *(__int64 *)uVar2;
    } while (lVar6 == 0);
    lVar6 = (((unsigned __int64)(unsigned int)((int)(__int64 *)uVar2 - (int)puVar4 >> 3) & 0x3ffffff) * 0x40 +
            (param_2 & 0xffffffc0)) - LZCOUNT(lVar6);
  }
  else {
code_r0x82ae5704:
    lVar6 = (param_3 & 0xffffffc0) - LZCOUNT(uVar5);
  }
  return lVar6 + 0x3f;
}

