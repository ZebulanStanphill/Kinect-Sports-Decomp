extern int fn_82EE2A68();
extern int fn_82F349F0();
extern unsigned int lbl_8215FBB8;
extern unsigned int lbl_8215FBE0;


unsigned int * fn_82EE2AD0(unsigned int *param_1)

{
  fn_82EE2A68(param_1,0);
  fn_82F349F0(param_1 + 0x13);
  *param_1 = &lbl_8215FBE0;
  param_1[0x13] = &lbl_8215FBB8;
  param_1[0x17] = 1;
  return param_1;
}

