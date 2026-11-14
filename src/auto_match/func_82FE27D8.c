extern int XMemSet();
extern int fn_82FE0AD8();
extern unsigned int lbl_821753A8;


unsigned int *fn_82FE27D8(unsigned int *param_1)

{
  *param_1 = &lbl_821753A8;
  fn_82FE0AD8(param_1 + 1);
  param_1[0x38] = 0;
  param_1[0x68] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
                    /* WARNING: Subroutine does not return */
  XMemSet(param_1 + 0x39,0,0xbc);
XMemSet(param_1 + 0x69,0,0x50);
return param_1;
}

