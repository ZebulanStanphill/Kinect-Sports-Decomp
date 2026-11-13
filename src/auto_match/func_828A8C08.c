extern int fn_82895158();
extern unsigned int lbl_8202439C;


unsigned int * fn_828A8C08(unsigned int *param_1)

{
  fn_82895158();
  *param_1 = &lbl_8202439C;
  *(unsigned int **)(param_1[4] + 0x2c8) = param_1;
  return param_1;
}

