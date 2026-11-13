extern int fn_83050FC0();
extern unsigned int lbl_8217E11C;
extern unsigned int lbl_8217E150;


unsigned int * fn_83055280(unsigned int *param_1)

{
  fn_83050FC0();
  *param_1 = &lbl_8217E150;
  param_1[0x1e] = &lbl_8217E11C;
  *(unsigned char *)(param_1 + 0x2e) = *(unsigned char *)(param_1 + 0x2e) & 0xbf;
  return param_1;
}

