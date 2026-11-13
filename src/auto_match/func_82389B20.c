extern float lbl_82192604;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;


unsigned __int64 fn_82389B20(void)

{
  unsigned int uVar1;
  
  lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
  uVar1 = (unsigned int)(((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460) * lbl_82192604);
  if (uVar1 == 0) {
    return 0xffffffff831d27c0;
  }
  if (uVar1 == 1) {
    return 0xffffffff831d2820;
  }
  if (uVar1 < 3) {
    return 0xffffffff831d2880;
  }
  if (uVar1 != 3) {
    return 0;
  }
  return 0xffffffff831d28e0;
}

