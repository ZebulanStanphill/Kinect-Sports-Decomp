extern int fn_82230218();
extern int fn_828CCCC0();


unsigned char * fn_82890120(unsigned char *param_1,int param_2)

{
  *(unsigned int *)(param_1 + 0x10) = 0;
  *(unsigned int *)(param_1 + 0x14) = 0xf;
  *param_1 = 0;
  fn_82230218(param_1,param_2,0,0xffffffffffffffff);
  *(unsigned short *)(param_1 + 0x1c) = *(unsigned short *)(param_2 + 0x1c);
  *(unsigned short *)(param_1 + 0x1e) = *(unsigned short *)(param_2 + 0x1e);
  *(unsigned short *)(param_1 + 0x20) = *(unsigned short *)(param_2 + 0x20);
  *(unsigned int *)(param_1 + 0x24) = *(unsigned int *)(param_2 + 0x24);
  *(unsigned int *)(param_1 + 0x28) = *(unsigned int *)(param_2 + 0x28);
  *(unsigned int *)(param_1 + 0x2c) = *(unsigned int *)(param_2 + 0x2c);
  *(unsigned int *)(param_1 + 0x30) = 0;
  *(unsigned int *)(param_1 + 0x34) = 0;
  fn_828CCCC0(param_1 + 0x30,*(unsigned int *)(param_2 + 0x30),*(unsigned int *)(param_2 + 0x34),0
                   );
  param_1[0x38] = *(unsigned char *)(param_2 + 0x38);
  return param_1;
}

