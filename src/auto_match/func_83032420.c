extern int fn_8300B4E8();
extern unsigned int lbl_8217C940;
extern unsigned int lbl_8217CEE8;
extern unsigned int lbl_83264EC4;


void fn_83032420(unsigned int *param_1)

{
  *param_1 = &lbl_8217CEE8;
  param_1[7] = &lbl_8217C940;
  if (lbl_83264EC4 == param_1) {
    lbl_83264EC4 = (unsigned int *)0x0;
  }
  fn_8300B4E8();
  return;
}
