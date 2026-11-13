typedef unsigned char bool;
#define true 1


unsigned __int64 fn_829E1258(int param_1)

{
  unsigned int uVar1;
  unsigned int *in_r11;
  unsigned char in_cr0;
  
  while( true ) {
    if ((bool)(in_cr0 >> 1 & 1)) {
      return -(unsigned __int64)(*(short *)(param_1 + 0xc) == 0) & 0xffffffff80004005;
    }
    if ((in_r11[1] & 0x1ff00) == 0) {
      if (*(short *)(param_1 + 0xc) != 0) {
        return 0xffffffff80004005;
      }
      *(unsigned short *)(param_1 + 0xc) = (unsigned short)(in_r11[1] >> 0x11);
    }
    uVar1 = (*in_r11 >> 3 & 0x7fe) + (*in_r11 >> 0xe) + *(int *)(param_1 + 8);
    *(unsigned int *)(param_1 + 8) = uVar1;
    if (*(unsigned int *)(param_1 + 4) <= uVar1) break;
    if ((unsigned int)*(unsigned short *)(param_1 + 0xe) <= in_r11[1] >> 0x11) {
      *(unsigned short *)(param_1 + 0xe) = (unsigned short)(in_r11[1] >> 0x11) + 1;
    }
    in_r11 = (unsigned int *)((int)in_r11 + (*in_r11 >> 3 & 0x7fe) + (*in_r11 >> 0xe));
    in_cr0 = ((*in_r11 & 0xffffc000) == 0) << 1;
  }
  return 0xffffffff80004005;
}

