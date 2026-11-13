unsigned __int64 fn_82A2C990(int param_1,unsigned int param_2,int param_3)

{
  unsigned __int64 uVar1;
  unsigned int uVar2;
  
  uVar2 = (unsigned int)*(unsigned char *)(param_1 + 0xce);
  if (param_3 == 0) {
    uVar1 = (unsigned __int64)(param_2 / 0xaa << (uVar2 & 0x3f));
    if (param_2 / 0xaa == 0) {
      return uVar1;
    }
    uVar1 = (param_2 / 0x70e4 + 1 << (uVar2 & 0x3f)) + uVar1;
    if (param_2 / 0x70e4 == 0) {
      return uVar1;
    }
  }
  else {
    if (param_3 != 1) {
      return (unsigned __int64)(unsigned int)(0xaa << (uVar2 & 0x3f)) + (unsigned __int64)(unsigned int)(1 << (uVar2 & 0x3f));
    }
    uVar1 = (unsigned __int64)((param_2 / 0x70e4) * 0xab + 1 << (uVar2 & 0x3f));
    if (param_2 < 0x4af768) {
      return uVar1;
    }
  }
  return (unsigned int)(1 << (uVar2 & 0x3f)) + uVar1;
}

