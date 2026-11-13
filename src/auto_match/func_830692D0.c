extern unsigned int lbl_8217E9F8;
extern unsigned int lbl_83265088;
extern unsigned int lbl_8326508C;
extern unsigned int lbl_83265090;
extern unsigned int lbl_83265094;


void fn_830692D0(void)

{
  if ((lbl_83265094 & 1) != 0) {
    return;
  }
  lbl_83265094 = lbl_83265094 | 1;
  lbl_83265088 = &lbl_8217E9F8;
  lbl_8326508C = 4;
  lbl_83265090 = 1;
  return;
}

