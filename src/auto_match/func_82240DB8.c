extern int fn_82230300();
extern unsigned int lbl_821970E0;
extern unsigned int lbl_82197140;


unsigned int * fn_82240DB8(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_821970E0;
  param_1[1] = &lbl_82197140;
  param_1[2] = 9;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[7] = param_2;
  param_1[5] = 2;
  param_1[6] = 0xffffffff;
  *(unsigned char *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(unsigned char *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  fn_82230300(param_1 + 0xe,0,0);
  *(unsigned char *)(param_1 + 0x15) = 0;
  *(unsigned char *)((int)param_1 + 0x55) = 0;
  *(unsigned char *)((int)param_1 + 0x56) = 0;
  return param_1;
}

