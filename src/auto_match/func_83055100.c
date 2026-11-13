extern int fn_83050B90();
extern unsigned int lbl_8217E0C0;
extern unsigned int lbl_8217E0F0;


unsigned int * fn_83055100(unsigned int *param_1)

{
  fn_83050B90();
  *param_1 = &lbl_8217E0F0;
  param_1[0x1e] = &lbl_8217E0C0;
  *(unsigned char *)(param_1 + 0x28) = 0;
  return param_1;
}

