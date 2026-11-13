extern int fn_82E50C30();
extern int fn_82E5AEC8();
extern unsigned int lbl_8215505C;
extern unsigned int lbl_8215507C;


unsigned int * fn_82E64598(unsigned int *param_1)

{
  *param_1 = &lbl_8215507C;
  param_1[1] = &lbl_8215505C;
  fn_82E50C30(param_1 + 3);
  fn_82E5AEC8(param_1 + 0x13);
  param_1[2] = 1;
  param_1[0x12] = 0;
  param_1[0x2e] = 0xffffffff;
  return param_1;
}

