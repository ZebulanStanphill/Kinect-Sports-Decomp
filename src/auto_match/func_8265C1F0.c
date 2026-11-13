extern int fn_8265C168();
extern unsigned int lbl_820014D4;


unsigned int * fn_8265C1F0(unsigned int *param_1)

{
  param_1[1] = 0;
  *param_1 = &lbl_820014D4;
  *(unsigned char *)(param_1 + 2) = 0;
  fn_8265C168();
  return param_1;
}

