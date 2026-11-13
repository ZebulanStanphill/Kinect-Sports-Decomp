__int64 fn_82811460(unsigned int param_1)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  __int64 lVar3;
  
  if (param_1 == 0) {
    lVar3 = -1;
  }
  else {
    uVar2 = 0x10;
    uVar1 = 0xffff;
    lVar3 = 0;
    do {
      if ((uVar1 << ((unsigned int)lVar3 & 0x3f) & param_1) == 0) {
        lVar3 = lVar3 + uVar2;
      }
      uVar2 = uVar2 >> 1;
      uVar1 = uVar1 >> (int)uVar2;
    } while (uVar2 != 0);
  }
  return lVar3;
}

