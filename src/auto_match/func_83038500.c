extern int fn_82FEFC98();
extern int fn_82FEFCC8();


void fn_83038500(int param_1,unsigned char param_2)

{
  fn_82FEFC98();
  *(unsigned char *)(param_1 + 0x1e4) = (param_2 & 1) << 6 | *(unsigned char *)(param_1 + 0x1e4) & 0xbf;
  fn_82FEFCC8(param_1);
  return;
}

