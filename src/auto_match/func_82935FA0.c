unsigned __int64 fn_82935FA0(unsigned __int64 param_1,unsigned int param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  
  uVar3 = 0;
  uVar6 = 0;
  uVar4 = 0;
  uVar5 = 0;
  do {
    uVar2 = param_2 >> (uVar5 & 0x3f) & 7;
    if ((uVar2 == 0) || (4 < uVar2)) {
      uVar1 = uVar5;
      if (uVar2 != 0) {
        if (uVar4 != uVar6) {
          return 0xffffffffffffffff;
        }
        uVar6 = uVar6 + 1;
      }
    }
    else {
      if ((int)uVar2 <= (int)uVar6) {
        return 0xffffffffffffffff;
      }
      uVar1 = uVar2 * 3 - 3;
      uVar6 = uVar2;
    }
    uVar5 = uVar5 + 3;
    uVar3 = uVar2 << (uVar1 & 0x3f) | uVar3;
    uVar4 = uVar4 + 1;
  } while ((int)uVar5 < 0xc);
  return uVar3;
}

