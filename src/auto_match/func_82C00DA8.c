extern int fn_82C06348();
extern int fn_82C06578();
extern int memset();
extern unsigned int lbl_820EBF88;


unsigned int *fn_82C00DA8(unsigned int *param_1)

{
  fn_82C06348(param_1);
  *param_1 = &lbl_820EBF88;
  fn_82C06578(param_1);
  param_1[0xa0] = 0;
  param_1[0xe] = 0;
  param_1[0x9f] = 0;
  param_1[0xa1] = 0;
  param_1[0xa2] = 0;
  param_1[0xa3] = 0;
                    /* WARNING: Subroutine does not return */
  memset(param_1 + 0xf,0,0x240);
  param_1[0xa4] = 0;
  param_1[0xa5] = 0;
  return param_1;
}

