extern int fn_830016B0();
extern unsigned int lbl_8216D160;
extern unsigned int lbl_8217C940;


unsigned int * fn_82FAFD70(unsigned int *param_1)

{
  fn_830016B0();
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *param_1 = &lbl_8216D160;
  param_1[7] = &lbl_8217C940;
  param_1[0x27] = 0;
  *(unsigned char *)(param_1 + 0x26) = *(unsigned char *)(param_1 + 0x26) & 0x7f;
  return param_1;
}

