void fn_82FA5A80(unsigned int param_1,int *param_2,unsigned int *param_3)

{
  if (param_1 < 0x80) {
    *param_2 = 0;
    *param_3 = param_1 >> 2;
    return;
  }
  *param_2 = -(int)LZCOUNT(param_1) + 0x19;
  *param_3 = param_1 >> (-(int)LZCOUNT(param_1) + 0x1aU & 0x3f) ^ 0x20;
  return;
}

