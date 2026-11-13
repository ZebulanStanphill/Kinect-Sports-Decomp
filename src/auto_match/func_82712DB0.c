extern int fn_8271F558();
extern unsigned int lbl_8200F0B0;
extern unsigned int lbl_8200F0B8;
extern unsigned int lbl_82010284;


unsigned int * fn_82712DB0(unsigned int *param_1)

{
  fn_8271F558();
  *param_1 = &lbl_82010284;
  param_1[4] = &lbl_8200F0B8;
  param_1[0xc] = &lbl_8200F0B0;
  return param_1;
}

