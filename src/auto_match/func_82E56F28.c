extern int fn_82E50C30();
extern int fn_82E5AEC8();
extern unsigned int lbl_8215494C;


unsigned int * fn_82E56F28(unsigned int *param_1,int *param_2)

{
  param_1[1] = 0;
  *param_1 = &lbl_8215494C;
  fn_82E50C30(param_1 + 2);
  fn_82E5AEC8(param_1 + 0x11);
  if (*param_2 >= 0) {
    *param_2 = 0;
  }
  return param_1;
}

