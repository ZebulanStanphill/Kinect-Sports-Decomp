extern int fn_82EE37A0();
extern unsigned int lbl_82152F14;


unsigned int * fn_82EE39D8(unsigned int *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(unsigned short *)((int)param_1 + 0xe) = 0;
  *(unsigned char *)(param_1 + 4) = 0;
  *param_1 = &lbl_82152F14;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  fn_82EE37A0(param_1 + 0x11);
  return param_1;
}

