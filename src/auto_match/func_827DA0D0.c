extern int fn_8256DA00();
extern int fn_8260D340();
extern unsigned int lbl_8201BB38;


unsigned int * fn_827DA0D0(unsigned int *param_1,int param_2)

{
  unsigned int *puStack00000014;
  
  *param_1 = &lbl_8201BB38;
  puStack00000014 = param_1;
  fn_8260D340(param_1 + 0xd);
  param_1[1] = *(unsigned int *)(param_2 + 4);
  param_1[2] = *(unsigned int *)(param_2 + 8);
  param_1[3] = *(unsigned int *)(param_2 + 0xc);
  param_1[4] = *(unsigned int *)(param_2 + 0x10);
  param_1[5] = *(unsigned int *)(param_2 + 0x14);
  param_1[6] = *(unsigned int *)(param_2 + 0x18);
  param_1[7] = *(unsigned int *)(param_2 + 0x1c);
  param_1[8] = *(unsigned int *)(param_2 + 0x20);
  param_1[9] = *(unsigned int *)(param_2 + 0x24);
  param_1[10] = *(unsigned int *)(param_2 + 0x28);
  param_1[0xb] = *(unsigned int *)(param_2 + 0x2c);
  param_1[0xc] = *(unsigned int *)(param_2 + 0x30);
  fn_8256DA00(param_1 + 0xd,param_2 + 0x34,0,0xffffffffffffffff);
  return param_1;
}

