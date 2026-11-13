extern int fn_82895048();
extern unsigned int lbl_8202439C;


unsigned int * fn_828A8C50(unsigned int *param_1)

{
  fn_82895048();
  *param_1 = &lbl_8202439C;
  *(unsigned int **)(param_1[4] + 0x2c8) = param_1;
  return param_1;
}

