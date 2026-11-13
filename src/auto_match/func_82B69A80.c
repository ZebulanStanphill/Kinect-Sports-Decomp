typedef unsigned char bool;


unsigned __int64 fn_82B69A80(unsigned __int64 param_1)

{
  bool bVar1;
  unsigned __int64 uVar2;
  
  uVar2 = 0;
  if ((param_1 & 0xffffffff) < 8) {
    bVar1 = (int)param_1 != 0;
    if (param_1 == 1 && bVar1) {
      uVar2 = 0x20;
    }
    else if (param_1 == 2 && bVar1) {
      uVar2 = 0x40;
    }
    else if (param_1 == 3 && bVar1) {
      uVar2 = 0x80;
    }
    else if (param_1 == 4 && bVar1) {
      uVar2 = 0x100;
    }
    else if (param_1 == 5 && bVar1) {
      uVar2 = 0x200;
    }
    else if (param_1 == 6 && bVar1) {
      uVar2 = 0x400;
    }
    else if (bVar1) {
      uVar2 = 0x800;
    }
    else {
      uVar2 = 0x10;
    }
  }
  return uVar2;
}

