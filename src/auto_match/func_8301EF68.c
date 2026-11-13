extern unsigned int lbl_831BC868;
extern unsigned int lbl_83264604;


void fn_8301EF68(unsigned int param_1,unsigned char param_2,unsigned char param_3)

{
  unsigned int uVar1;
  
  uVar1 = 1 << param_1;
  lbl_831BC868 = ~uVar1 & lbl_831BC868;
  if (param_2 != '\0') {
    lbl_831BC868 = lbl_831BC868 | uVar1;
  }
  lbl_83264604 = ~uVar1 & lbl_83264604;
  if (param_3 == '\0') {
    return;
  }
  lbl_83264604 = lbl_83264604 | uVar1;
  return;
}

