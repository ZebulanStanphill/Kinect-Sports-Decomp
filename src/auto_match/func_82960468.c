extern int fn_82975B00();


unsigned __int64 fn_82960468(int param_1)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  unsigned int uVar3;
  
  uVar1 = *(unsigned int *)(param_1 + 200);
  uVar2 = (unsigned __int64)uVar1 + 0x1fd00;
  *(unsigned int *)(param_1 + 0x10c) = uVar1;
  if (uVar2 == 0) {
    *(unsigned int *)(param_1 + 0x28) = 0x60;
    *(unsigned int *)(param_1 + 0x38) = 0x100;
    *(unsigned int *)(param_1 + 0x40) = 0x10;
    *(unsigned int *)(param_1 + 0x68) = 0xff;
    *(unsigned int *)(param_1 + 0x30) = 1;
    *(unsigned int *)(param_1 + 0x60) = 0x80;
    *(unsigned int *)(param_1 + 0x58) = 0x18;
    *(unsigned int *)(param_1 + 0x5c) = 4;
    *(unsigned int *)(param_1 + 0x4c) = 10;
    *(unsigned int *)(param_1 + 0x70) = *(unsigned int *)(param_1 + 0x70) | 0x13f80000;
    *(unsigned int *)(param_1 + 0x6c) = *(unsigned int *)(param_1 + 0x6c) | 0x40400201;
  }
  else {
    if ((uVar2 & 0xffffffff) == 0xff) {
      *(unsigned int *)(param_1 + 0x60) = 0x800;
      *(unsigned int *)(param_1 + 0x40) = 0x800;
      *(unsigned int *)(param_1 + 0x38) = 0x2000;
      *(unsigned int *)(param_1 + 0x28) = 0x10;
      *(unsigned int *)(param_1 + 0x30) = 1;
      *(unsigned int *)(param_1 + 0x68) = 0xff;
      *(unsigned int *)(param_1 + 0x54) = 0x10;
      *(unsigned int *)(param_1 + 0x58) = 0x18;
      *(unsigned int *)(param_1 + 0x5c) = 4;
      *(unsigned int *)(param_1 + 0x4c) = 0x10;
      *(unsigned int *)(param_1 + 0x6c) = *(unsigned int *)(param_1 + 0x6c) | 0x400201;
      *(unsigned int *)(param_1 + 0x70) = *(unsigned int *)(param_1 + 0x70) | 0x13f80000;
      goto LAB_82960634;
    }
    uVar2 = (unsigned __int64)uVar1 + 0xfd00;
    if ((uVar2 & 0xffffffff) == 0) {
      *(unsigned int *)(param_1 + 0x28) = 0x10;
      *(unsigned int *)(param_1 + 0x40) = 0x10;
      *(unsigned int *)(param_1 + 0x38) = 0x100;
      *(unsigned int *)(param_1 + 0x30) = 0;
      *(unsigned int *)(param_1 + 0x60) = 0x80;
      *(unsigned int *)(param_1 + 0x68) = 0xff;
      uVar3 = 0x1a;
    }
    else {
      if ((uVar2 & 0xffffffff) != 0xff) {
        fn_82975B00(param_1,0,0,0xffffffff820385b8);
        return 0xffffffff80004005;
      }
      uVar3 = 0x10;
      *(unsigned int *)(param_1 + 0x30) = 0;
      *(unsigned int *)(param_1 + 0x28) = 0x10;
      *(unsigned int *)(param_1 + 0x60) = 0x10;
      *(unsigned int *)(param_1 + 0x40) = 0x10;
      *(unsigned int *)(param_1 + 0x38) = 0x2000;
      *(unsigned int *)(param_1 + 0x68) = 0xff;
    }
    *(unsigned int *)(param_1 + 0x5c) = 4;
    *(unsigned int *)(param_1 + 0x58) = 0x18;
    *(unsigned int *)(param_1 + 0x48) = 4;
    *(unsigned int *)(param_1 + 0x4c) = uVar3;
    *(unsigned int *)(param_1 + 0x6c) = *(unsigned int *)(param_1 + 0x6c) | 0x82c00201;
    *(unsigned int *)(param_1 + 0x70) = *(unsigned int *)(param_1 + 0x70) | 0x16500000;
  }
  *(unsigned int *)(param_1 + 0x54) = 8;
LAB_82960634:
  *(unsigned int *)(param_1 + 100) = 1;
  *(unsigned int *)(param_1 + 0x2c) = 0x20;
  *(unsigned int *)(param_1 + 0x1d4) = 0x20;
  *(unsigned int *)(param_1 + 0x158) = 1;
  *(unsigned int *)(param_1 + 0x70) = *(unsigned int *)(param_1 + 0x70) | 0x40000;
  *(unsigned int *)(param_1 + 0x44) = *(unsigned int *)(param_1 + 0x28);
  return 0;
}

