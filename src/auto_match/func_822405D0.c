extern int fn_82240DB8();
extern unsigned int lbl_821970D0;


unsigned int * fn_822405D0(unsigned int *param_1)

{
  fn_82240DB8();
  *(unsigned char *)(param_1 + 0x16) = 0;
  *param_1 = &lbl_821970D0;
  *(unsigned char *)((int)param_1 + 0x59) = 0xff;
  param_1[0x17] = 8;
  param_1[2] = 2;
  *(unsigned char *)(param_1 + 3) = 0;
  return param_1;
}

