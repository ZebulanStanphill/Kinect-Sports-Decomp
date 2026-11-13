extern int fn_82230218();
extern int fn_828C2E18();


unsigned char * fn_828C2E90(unsigned char *param_1,__int64 param_2)

{
  *(unsigned int *)(param_1 + 0x10) = 0;
  *(unsigned int *)(param_1 + 0x14) = 0xf;
  *param_1 = 0;
  fn_82230218(param_1,param_2,0,0xffffffffffffffff);
  fn_828C2E18(param_1 + 0x1c,param_2 + 0x1c);
  return param_1;
}

