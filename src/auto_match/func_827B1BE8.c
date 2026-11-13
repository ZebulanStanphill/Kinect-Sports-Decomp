extern int fn_827B19D8();


unsigned __int64 fn_827B1BE8(unsigned int *param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  unsigned char abStack_20 [8];
  
  uVar1 = *param_1;
  if ((param_2 & 0xffffffff) < 0x40) {
    abStack_20[0] = (unsigned char)((param_2 & 0xffffffff) << 2);
    fn_827B19D8(uVar1,abStack_20);
    uVar2 = 1;
  }
  else if ((param_2 & 0xffffffff) < 0x4000) {
    abStack_20[0] = (unsigned char)((param_2 & 0xffffffff) << 2) | 1;
    fn_827B19D8(uVar1,abStack_20);
    abStack_20[0] = (unsigned char)((param_2 & 0xffffffff) >> 6);
    fn_827B19D8(*param_1,abStack_20);
    uVar2 = 2;
  }
  else {
    abStack_20[0] = (unsigned char)((param_2 & 0x3f) << 2);
    if ((param_2 & 0xffffffff) < 0x400000) {
      abStack_20[0] = abStack_20[0] | 2;
      fn_827B19D8(uVar1,abStack_20);
      abStack_20[0] = (unsigned char)((param_2 & 0xffffffff) >> 6);
      fn_827B19D8(*param_1,abStack_20);
      abStack_20[0] = (unsigned char)((param_2 & 0xffffffff) >> 0xe);
      fn_827B19D8(*param_1,abStack_20);
      uVar2 = 3;
    }
    else {
      abStack_20[0] = abStack_20[0] | 3;
      fn_827B19D8(uVar1,abStack_20);
      abStack_20[0] = (unsigned char)((param_2 & 0xffffffff) >> 6);
      fn_827B19D8(*param_1,abStack_20);
      abStack_20[0] = (unsigned char)((param_2 & 0xffffffff) >> 0xe);
      fn_827B19D8(*param_1,abStack_20);
      abStack_20[0] = (unsigned char)((param_2 & 0xffffffff) >> 0x16);
      fn_827B19D8(*param_1,abStack_20);
      uVar2 = 4;
    }
  }
  return uVar2;
}

