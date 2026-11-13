typedef unsigned char bool;
extern int fn_822C72E0();
extern unsigned int lbl_82192604;
extern float lbl_821954E8;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_831CC3C8;
extern unsigned int lbl_83265A28;


bool fn_8230E4A8(int param_1)

{
  int iVar1;
  
  lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
  iVar1 = fn_822C72E0(*(unsigned int *)(*(int *)(*(int *)(param_1 + 0xc) + 0x114) + 0x20),
                            (&lbl_831CC3C8)
                            [-(int)(((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460) *
                                   lbl_821954E8)]);
  if (iVar1 != 0) {
    *(unsigned int *)(param_1 + 0x4d0) = lbl_82192604;
  }
  return iVar1 != 0;
}

