extern int fn_82975B00();


unsigned __int64 fn_829A6300(int param_1)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  
  uVar1 = *(unsigned int *)(param_1 + 0x70);
  *(unsigned int *)(param_1 + 0x38) = 0x100;
  uVar2 = (unsigned __int64)*(unsigned int *)(param_1 + 200) + 0x1feff;
  *(unsigned int *)(param_1 + 0x70) = uVar1 | 0x1000000;
  *(unsigned int *)(param_1 + 0x10c) = *(unsigned int *)(param_1 + 200);
  if (uVar2 == 0) {
    *(unsigned int *)(param_1 + 0x2c) = 0xc;
    *(unsigned int *)(param_1 + 100) = 10;
    uVar1 = uVar1 | 0x21020000;
    *(unsigned int *)(param_1 + 0x6c) = *(unsigned int *)(param_1 + 0x6c) | 0x40;
  }
  else if ((uVar2 & 0xffffffff) == 0xff) {
    *(unsigned int *)(param_1 + 0x2c) = 0xc;
    *(unsigned int *)(param_1 + 0x30) = 1;
    *(unsigned int *)(param_1 + 100) = 1;
    *(unsigned int *)(param_1 + 0x60) = 0x10;
    *(unsigned int *)(param_1 + 0x40) = 0x10;
    uVar1 = uVar1 | 0x21000000;
    *(unsigned int *)(param_1 + 0x68) = 0xff;
    *(unsigned int *)(param_1 + 0x6c) = *(unsigned int *)(param_1 + 0x6c) | 0x400200;
    *(unsigned int *)(param_1 + 0x54) = 8;
    *(unsigned int *)(param_1 + 0x5c) = 1;
  }
  else if ((uVar2 & 0xffffffff) == 0x101) {
    *(unsigned int *)(param_1 + 0x2c) = 0xd;
    *(unsigned int *)(param_1 + 0x38) = 0x2000;
    *(unsigned int *)(param_1 + 0x30) = 1;
    *(unsigned int *)(param_1 + 0x60) = 0x10;
    *(unsigned int *)(param_1 + 0x40) = 0x10;
    *(unsigned int *)(param_1 + 0x68) = 0xff;
    *(unsigned int *)(param_1 + 100) = 1;
    uVar1 = uVar1 | 0x11000000;
    *(unsigned int *)(param_1 + 0x6c) = *(unsigned int *)(param_1 + 0x6c) | 0x400201;
    *(unsigned int *)(param_1 + 0x54) = 8;
    *(unsigned int *)(param_1 + 0x58) = 0x18;
    *(unsigned int *)(param_1 + 0x5c) = 1;
    *(unsigned int *)(param_1 + 200) = 0xfffe0201;
  }
  else {
    if ((uVar2 & 0xffffffff) != 0x1fe) {
      fn_82975B00(param_1,0,0,0xffffffff82051e20);
      return 0xffffffff80004005;
    }
    *(unsigned int *)(param_1 + 0x60) = 0x800;
    *(unsigned int *)(param_1 + 0x2c) = 0x20;
    *(unsigned int *)(param_1 + 0x40) = 0x800;
    *(unsigned int *)(param_1 + 0x30) = 1;
    *(unsigned int *)(param_1 + 100) = 1;
    *(unsigned int *)(param_1 + 0x38) = 0x2000;
    *(unsigned int *)(param_1 + 0x68) = 0xff;
    *(unsigned int *)(param_1 + 0x6c) = *(unsigned int *)(param_1 + 0x6c) | 0x400201;
    uVar1 = uVar1 | 0x11000000;
    *(unsigned int *)(param_1 + 0x54) = 0x10;
    *(unsigned int *)(param_1 + 0x58) = 0x18;
    *(unsigned int *)(param_1 + 0x5c) = 4;
  }
  *(unsigned int *)(param_1 + 0x70) = uVar1;
  *(unsigned int *)(param_1 + 0x28) = 0x10;
  *(unsigned int *)(param_1 + 0x44) = 0x10;
  *(unsigned int *)(param_1 + 0x6c) = *(unsigned int *)(param_1 + 0x6c) | 0x1000000;
  *(unsigned int *)(param_1 + 0x70) = uVar1 | 0x600000;
  *(unsigned int *)(param_1 + 0x1d4) = *(unsigned int *)(param_1 + 0x2c);
  return 0;
}

