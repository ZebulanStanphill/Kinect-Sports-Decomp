unsigned __int64 fn_82953B18(unsigned __int64 param_1)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  
  uVar1 = param_1 & 0xf000000;
  uVar2 = 0;
  if (uVar1 < 0x5000001) {
    if (uVar1 == 0x5000000) {
      uVar2 = 0x4000000;
    }
    else if (uVar1 == 0) {
      uVar2 = 0x1000000;
    }
    else if (uVar1 == 0x1000000) {
      uVar2 = 0;
    }
    else if (uVar1 == 0x2000000) {
      uVar2 = 0x3000000;
    }
    else if (uVar1 == 0x3000000) {
      uVar2 = 0x2000000;
    }
    else if (uVar1 == 0x4000000) {
      uVar2 = 0x5000000;
    }
  }
  else if (uVar1 == 0x7000000) {
    uVar2 = 0x8000000;
  }
  else if (uVar1 == 0x8000000) {
    uVar2 = 0x7000000;
  }
  else if (uVar1 == 0xb000000) {
    uVar2 = 0xc000000;
  }
  else if (uVar1 == 0xc000000) {
    uVar2 = 0xb000000;
  }
  return param_1 << 0x20 | param_1 & 0xf0ffffff | uVar2;
}

