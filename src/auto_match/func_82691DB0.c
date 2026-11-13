extern unsigned int lbl_8200E1B0;


unsigned int fn_82691DB0(int param_1)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  unsigned int uVar3;
  
  if (*(char *)(param_1 + 0x1f5) == '\0') {
    return *(unsigned int *)(param_1 + 0x1fc);
  }
  uVar2 = (unsigned __int64)*(unsigned int *)(param_1 + 0x1fc);
  trapWord(6,uVar2,0);
  uVar3 = (int)((((((((unsigned __int64)*(unsigned int *)(param_1 + 0x20c) -
                     (unsigned __int64)
                     (unsigned int)(*(int *)(param_1 + 0x1a8) << (*(unsigned int *)(param_1 + 0x14) & 0x3f))) -
                    (unsigned __int64)*(unsigned int *)(param_1 + 0x210)) + 0x10 & 0xffffffff) >> 4) + uVar2) - 1 &
                0xffffffff) / uVar2) * *(unsigned int *)(param_1 + 0x1fc);
  if ((uVar3 & 0xffff0000) == 0) {
    if ((uVar3 & 0xff00) == 0) {
      uVar3 = (unsigned int)(unsigned char)(&lbl_8200E1B0)[uVar3 & 0xff];
    }
    else {
      uVar3 = (unsigned char)(&lbl_8200E1B0)[uVar3 >> 8 & 0xff] + 8;
    }
  }
  else if ((uVar3 & 0xff000000) == 0) {
    uVar3 = (unsigned char)(&lbl_8200E1B0)[uVar3 >> 0x10 & 0xff] + 0x10;
  }
  else {
    uVar3 = (unsigned char)(&lbl_8200E1B0)[uVar3 >> 0x18] + 0x18;
  }
  uVar1 = *(unsigned int *)(param_1 + 0x1fc);
  uVar3 = 1 << (uVar3 & 0x3f);
  if (uVar3 < uVar1) {
    uVar3 = uVar1;
  }
  if (uVar3 <= uVar1 << 2) {
    return uVar3;
  }
  return uVar1 << 2;
}

