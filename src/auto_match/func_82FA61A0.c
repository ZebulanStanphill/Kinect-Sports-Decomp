extern int fn_82FA5B20();
extern int fn_82FA5BC0();
extern unsigned int uStack_20;


unsigned __int64 fn_82FA61A0(unsigned __int64 param_1,unsigned int param_2)

{
  unsigned __int64 uVar1;
  unsigned int uStack_20;
  int aiStack_1c;
  
  uVar1 = 0;
  if (param_2 != 0) {
    if (0x1f < param_2) {
      param_2 = ((1 << (0x1aU - (int)LZCOUNT(param_2) & 0x3f)) + param_2) - 1;
    }
    if (param_2 < 0x80) {
      aiStack_1c = 0;
      uStack_20 = param_2 >> 2;
    }
    else {
      aiStack_1c = -(int)LZCOUNT(param_2) + 0x19;
      uStack_20 = param_2 >> (-(int)LZCOUNT(param_2) + 0x1aU & 0x3f) ^ 0x20;
    }
    uVar1 = fn_82FA5B20(param_1,&aiStack_1c,&uStack_20);
    if ((uVar1 & 0xffffffff) != 0) {
      fn_82FA5BC0(param_1,uVar1,aiStack_1c,uStack_20);
    }
  }
  return uVar1;
}

