extern unsigned int stack0x00000010;
extern unsigned int uStack00000010;
extern unsigned int uStack_16;
extern unsigned int uStack_18;
extern unsigned int uStack_1a;
extern unsigned int uStack_1c;
extern unsigned int uStack_20;


unsigned __int64 fn_82A2C8E0(unsigned __int64 param_1,unsigned int *param_2)

{
  unsigned __int64 uVar1;
  unsigned __int64 uStack00000010;
  unsigned short uStack_20;
  short sStack_1e;
  unsigned short uStack_1c;
  unsigned short uStack_1a;
  unsigned short uStack_18;
  unsigned short uStack_16;
  
  uStack00000010 = param_1;
  RtlTimeToTimeFields(&stack0x00000010,&uStack_20);
  *param_2 = (((((int)sStack_1e & 0xfU) << 5 | uStack_1c & 0x1f) << 5 | uStack_1a & 0x1f) << 6 |
             uStack_18 & 0x3f) << 5 |
             (int)(uStack_16 & 0x3e) >> 1 | (uStack_20 + 0xf844) * 0x2000000;
  if (((short)uStack_20 < 0x7bc) || (uVar1 = 1, 0x83b < (short)uStack_20)) {
    uVar1 = 0;
  }
  return uVar1;
}

