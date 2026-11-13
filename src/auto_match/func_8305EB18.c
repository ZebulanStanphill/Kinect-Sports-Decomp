extern unsigned int lbl_8217E6B4;
extern unsigned int lbl_831BCA54;
extern unsigned int lbl_83265078;
extern unsigned int lbl_8326507C;


void fn_8305EB18(unsigned int *param_1)

{
  if ((lbl_8326507C & 1) == 0) {
    lbl_8326507C = lbl_8326507C | 1;
    lbl_83265078 = &lbl_8217E6B4;
  }
  if (param_1 == (unsigned int *)0x0) {
    param_1 = &lbl_83265078;
  }
  lbl_831BCA54 = (unsigned char *)param_1;
  return;
}

