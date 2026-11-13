extern int fn_82BE5908();
extern unsigned int lbl_820EBDC8;


unsigned int * fn_82BF8AB8(unsigned int *param_1)

{
  fn_82BE5908(param_1,0x54,"RequestDownloadBinary");
  param_1[0x14] = 0;
  *param_1 = &lbl_820EBDC8;
  return param_1;
}

