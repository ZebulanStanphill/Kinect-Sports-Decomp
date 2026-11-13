extern int fn_82A29A38();


unsigned __int64 fn_82AAC770(unsigned int param_1)

{
  unsigned __int64 uVar1;
  
  uVar1 = 0;
  if (param_1 < 0x6000001) {
    if (param_1 == 0x6000000) {
      uVar1 = 0x10000;
      goto code_r0x82aac888;
    }
    if (param_1 == 0) goto code_r0x82aac888;
    if (param_1 == 0x1000000) {
      uVar1 = 0;
    }
    else {
      if (param_1 == 0x2000000) {
        uVar1 = 0x20000;
        goto code_r0x82aac888;
      }
      if (param_1 == 0x3000000) {
        uVar1 = 0x20000;
      }
      else {
        if (param_1 == 0x4000000) {
          uVar1 = 0x60000;
          goto code_r0x82aac888;
        }
        if (param_1 != 0x5000000) goto code_r0x82aac854;
        uVar1 = 0x60000;
      }
    }
  }
  else {
    if (param_1 == 0x7000000) {
      uVar1 = 0x40000;
      goto code_r0x82aac888;
    }
    if (param_1 == 0x8000000) {
      uVar1 = 0x40000;
    }
    else {
      if (param_1 == 0x9000000) {
        uVar1 = 0x400000;
        goto code_r0x82aac888;
      }
      if (param_1 == 0xa000000) {
        uVar1 = 0x600000;
        goto code_r0x82aac888;
      }
      if (param_1 == 0xb000000) {
        uVar1 = 0x100000;
        goto code_r0x82aac888;
      }
      if (param_1 != 0xc000000) {
code_r0x82aac854:
        fn_82A29A38();
        goto code_r0x82aac888;
      }
      uVar1 = 0x100000;
    }
  }
  uVar1 = uVar1 | 0x8888;
code_r0x82aac888:
  if (((uVar1 & 0x10000) != 0) && ((uVar1 & 0x68888) != 0)) {
    fn_82A29A38();
  }
  return uVar1;
}

