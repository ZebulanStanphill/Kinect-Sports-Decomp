extern int fn_82A512B8();
extern unsigned int lbl_82089BA0;
extern unsigned int lbl_82089C80;


unsigned int * fn_82A4A728(unsigned int *param_1)

{
  fn_82A512B8(param_1 + 1);
  param_1[0x23] = 0;
  *param_1 = &lbl_82089C80;
  param_1[1] = &lbl_82089BA0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  return param_1;
}

