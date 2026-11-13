extern int fn_8265CA20();
extern unsigned int lbl_82197048;


unsigned int * fn_823A9C30(unsigned int *param_1,unsigned int param_2)

{
  param_1[0x2a] = &lbl_82197048;
  param_1[0x26] = &lbl_82197048;
  param_1[0x20] = &lbl_82197048;
  param_1[0x1e] = &lbl_82197048;
  param_1[0x18] = &lbl_82197048;
  param_1[0x10] = &lbl_82197048;
  param_1[10] = &lbl_82197048;
  param_1[4] = &lbl_82197048;
  param_1[2] = &lbl_82197048;
  *param_1 = &lbl_82197048;
  if ((param_2 & 1) != 0) {
    fn_8265CA20();
  }
  return param_1;
}

