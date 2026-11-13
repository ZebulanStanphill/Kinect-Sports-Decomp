extern int fn_8301DFE0();
extern int fn_83021E58();
extern unsigned int lbl_8217BB1C;


int fn_8301E120(int param_1)

{
  fn_8301DFE0();
  *(unsigned int *)(param_1 + 0xc4) = 0;
  *(unsigned char ***)(param_1 + 0xc0) = &lbl_8217BB1C;
  *(unsigned int *)(param_1 + 200) = 0;
  fn_83021E58(param_1 + 0xcc);
  return param_1;
}

