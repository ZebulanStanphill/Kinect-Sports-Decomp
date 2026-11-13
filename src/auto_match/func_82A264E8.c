__int64 fn_82A264E8(unsigned __int64 param_1,unsigned __int64 param_2)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  
  uVar1 = (((param_2 & 0x3ffffff) * 0x40 + 0x103f & 0x7ffff000) * 2 +
           ((param_1 & 0xffffffff) + 0xfff & 0xfffff000) & 0xffffffff) >> 0xc;
  uVar4 = (uVar1 + 0xa9) / 0xaa;
  if (uVar4 < 2) {
    uVar3 = 0;
  }
  else {
    uVar3 = (uVar4 + 0xa9) / 0xaa;
  }
  if (uVar3 < 2) {
    uVar2 = 0;
  }
  else {
    uVar2 = (uVar3 + 0xa9) / 0xaa;
  }
  return ((uVar2 + uVar3 + uVar4) * 2 + uVar1 + 0x1a) * 0x1000;
}

