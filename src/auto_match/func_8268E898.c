extern unsigned int lbl_8200E1B0;


void fn_8268E898(unsigned int *param_1,unsigned int param_2)

{
  unsigned int uVar1;
  
  if ((param_2 & 0xffff0000) == 0) {
    if ((param_2 & 0xff00) == 0) {
      uVar1 = (unsigned int)(unsigned char)(&lbl_8200E1B0)[param_2 & 0xff];
    }
    else {
      uVar1 = (unsigned char)(&lbl_8200E1B0)[param_2 >> 8 & 0xff] + 8;
    }
  }
  else if ((param_2 & 0xff000000) == 0) {
    uVar1 = (unsigned char)(&lbl_8200E1B0)[param_2 >> 0x10 & 0xff] + 0x10;
  }
  else {
    uVar1 = (unsigned char)(&lbl_8200E1B0)[param_2 >> 0x18] + 0x18;
  }
  *param_1 = uVar1 & 0xff;
  uVar1 = 1 << (uVar1 & 0x3f);
  param_1[1] = uVar1;
  param_1[2] = uVar1 - 1;
  param_1[3] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  return;
}

