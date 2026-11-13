extern unsigned int lbl_8322B22C;


void fn_82BE91C8(unsigned short param_1)

{
  if (lbl_8322B22C == 0) {
    return;
  }
  if (param_1 == *(unsigned short *)(lbl_8322B22C + 0x16)) {
    return;
  }
  *(short *)(lbl_8322B22C + 0x16) = param_1;
  *(unsigned int *)(lbl_8322B22C + 0x134) = 1;
  return;
}

