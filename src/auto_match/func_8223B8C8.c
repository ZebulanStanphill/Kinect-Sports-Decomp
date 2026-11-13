extern int fn_82240DB8();
extern unsigned int lbl_82197534;


unsigned int * fn_8223B8C8(unsigned int *param_1)

{
  fn_82240DB8(param_1,2);
  *(unsigned char *)(param_1 + 0x16) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0xffffffff;
  param_1[0x19] = 0x20;
  param_1[2] = 4;
  param_1[3] = 0;
  *param_1 = &lbl_82197534;
  return param_1;
}

