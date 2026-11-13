extern unsigned int iStack00000018;
extern unsigned int iStack0000001c;
extern unsigned int lbl_831BB920;
extern unsigned int uStack_10;


unsigned __int64 fn_82F6A7A0(unsigned __int64 param_1,unsigned __int64 param_2)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  __int64 lVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  int iStack00000018;
  int iStack0000001c;
  unsigned __int64 uStack_10;
  
  if ((param_1 >> 0x30 & 0x7ff0) != 0x7ff0) {
    if ((param_2 >> 0x30 & 0x7ff0) != 0x7ff0) {
      if ((param_1 & 0x7fffffffffffffff) < (param_2 & 0x7fffffffffffffff)) {
        return param_1;
      }
      uVar2 = param_2 >> 0x34 & 0x7ff;
      uStack_10 = param_1 & 0x8000000000000000;
      uVar6 = param_1 >> 0x34 & 0x7ff;
      uVar4 = (param_2 & 0xfffffffffffff) << 0xb;
      if (uVar2 == 0) {
        if ((param_2 & 0xfffffffffffff) == 0) {
          return lbl_831BB920;
        }
        uVar1 = uVar4 << (__int64)(int)LZCOUNT(uVar4);
        uVar2 = 1 - (__int64)(int)LZCOUNT(uVar4);
      }
      else {
        uVar1 = uVar4 | 0x8000000000000000;
      }
      uVar4 = (param_1 & 0xfffffffffffff) << 0xb;
      if (uVar6 == 0) {
        if ((param_1 & 0xfffffffffffff) == 0) {
          return param_1;
        }
        uVar5 = uVar4 << (__int64)(int)LZCOUNT(uVar4);
        uVar6 = 1 - (__int64)(int)LZCOUNT(uVar4);
      }
      else {
        uVar5 = uVar4 | 0x8000000000000000;
      }
      for (; (__int64)uVar2 < (__int64)uVar6; uVar6 = uVar6 - lVar3) {
        uVar4 = uVar1;
        if (uVar5 < uVar1) {
          uVar4 = uVar1 >> 1;
        }
        lVar3 = (__int64)(int)LZCOUNT(uVar5 - uVar4);
        uVar5 = uVar5 - uVar4 << lVar3;
      }
      if ((uVar6 == uVar2) && (uVar1 <= uVar5)) {
        lVar3 = (__int64)(int)LZCOUNT(uVar5 - uVar1);
        uVar5 = uVar5 - uVar1 << lVar3;
        uVar6 = uVar6 - lVar3;
      }
      if (uVar5 != 0) {
        if ((__int64)uVar6 < 1) {
          uVar4 = 1 - uVar6;
          uVar6 = 0;
          uVar5 = uVar5 >> (uVar4 & 0x7f);
        }
        uStack_10 = (uVar5 >> 0xb & 0xfffffffffffff) + (uVar6 << 0x34) + uStack_10;
      }
      return uStack_10;
    }
    iStack00000018 = (int)(param_2 >> 0x20);
    iStack0000001c = (int)param_2;
    if ((iStack00000018 == 0x7ff00000) && (iStack0000001c == 0)) {
      return param_1;
    }
    if ((iStack00000018 == -0x100000) && (iStack0000001c == 0)) {
      return param_1;
    }
  }
  return lbl_831BB920;
}

