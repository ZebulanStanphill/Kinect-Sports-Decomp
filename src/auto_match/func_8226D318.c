unsigned __int64 fn_8226D318(unsigned __int64 param_1,int param_2,unsigned int param_3,int param_4)

{
  int iVar1;
  
  param_3 = param_3 & 0x3f;
  iVar1 = 4;
  if (0 < param_4) {
    param_2 = param_2 << 1;
  }
  if (param_4 == 2) {
    param_1 = (param_1 & 0x7fffffff) << 1;
  }
  if (((param_3 == 0x15) || (param_3 == 0x20)) || (param_3 == 0x25)) {
    iVar1 = 8;
  }
  return ((__int64)
          (int)((param_2 + 0xfU & 0xfffffff0) * (int)((param_1 + 0x4f & 0xffffffff) / 0x50) * 0x50)
          * (__int64)iVar1 & 0xffffffffU) / 0x1400;
}

