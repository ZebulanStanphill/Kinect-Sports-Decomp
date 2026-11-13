extern unsigned int uRam83217b80;
extern unsigned int uRam83217b84;


unsigned __int64 fn_829E08A8(unsigned int *param_1,int param_2,unsigned int param_3,unsigned __int64 param_4,unsigned int param_5)

{
  unsigned int uVar1;
  
  if (param_3 < *param_1 >> 0xe) {
    param_3 = *param_1 >> 0xe;
  }
  uVar1 = *param_1;
  *param_1 = param_3 << 0xe | uVar1 & 0x3fff;
  if ((param_4 & 0xffffffff) < ((unsigned __int64)uVar1 & 0x3ff0) >> 4) {
    param_4 = ((unsigned __int64)uVar1 & 0x3ff0) >> 4;
  }
  *param_1 = (unsigned int)((param_4 & 0xffffffff) << 4) & 0x3ff0 | *param_1 & 0xffffc00f;
  if ((param_1[1] & 0xfffe0000) == 0) {
    if ((uRam83217b84 & 1) == 0) {
      uRam83217b84 = uRam83217b84 | 1;
      param_1[1] = param_1[1] | 0xfffe0000;
      uRam83217b80 = 0x7fff;
    }
    if (uRam83217b80 < *(unsigned short *)(param_2 + 0xe)) {
      return 0xffffffff80004005;
    }
    param_1[1] = (unsigned int)*(unsigned short *)(param_2 + 0xe) << 0x11 | param_1[1] & 0x1ffff;
    *(short *)(param_2 + 0xe) = *(short *)(param_2 + 0xe) + 1;
  }
  param_1[1] = (param_5 & 0x1ff) << 8 | param_1[1] & 0xfffe00ff;
  *param_1 = *param_1 & 0xfffffff0;
  *(unsigned char *)((int)param_1 + 7) = 1;
  return 0;
}

