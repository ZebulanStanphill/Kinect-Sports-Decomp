#define true 1


unsigned __int64 fn_82F33B70(unsigned short param_1,unsigned __int64 param_2,unsigned int *param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned short uVar3;
  unsigned __int64 uVar4;
  unsigned int uVar6;
  unsigned __int64 uVar5;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar3 = 0;
  if (param_1 == 0) {
    return param_2;
  }
  do {
    uVar2 = (unsigned int)param_2;
    uVar1 = *param_3;
    uVar4 = (param_2 & 0xffffffff) >> 0x10;
    if ((uVar4 == 0) && (uVar1 >> 0x10 == 0)) {
      param_2 = (__int64)(int)(uVar1 & 0xffff) * (__int64)(int)(uVar2 & 0xffff);
    }
    else {
      if ((uVar4 != 0) && (uVar1 >> 0x10 != 0)) {
        return 0xffffffffffffffff;
      }
      uVar6 = uVar1;
      if (uVar1 >> 0x10 != 0) {
        uVar6 = uVar2;
        uVar2 = uVar1;
      }
      uVar4 = (__int64)(int)(uVar2 >> 0x10) * (__int64)(int)(uVar6 & 0xffff);
      if (uVar4 >> 0x10 != 0) {
        return 0xffffffffffffffff;
      }
      uVar5 = (__int64)(int)(uVar2 & 0xffff) * (__int64)(int)(uVar6 & 0xffff);
      param_2 = (uVar4 * 0x10000 & 0xffff0000) + uVar5;
      if ((param_2 & 0xffffffff) < uVar5) {
        return 0xffffffffffffffff;
      }
    }
    param_3 = param_3 + 2;
    uVar3 = uVar3 + 1;
    if (param_1 <= uVar3) {
      return param_2;
    }
  } while( true );
}

