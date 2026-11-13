extern int fn_82230218();
extern int fn_8288B1D8();


void fn_82897DF8(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  *(unsigned char *)(param_1 + 0x55) = 0;
  *(unsigned char *)(param_1 + 0x54) = 0;
  fn_82230218(param_1 + 0x38,param_3,0,0xffffffffffffffff);
  fn_8288B1D8(param_2,param_1);
  *(unsigned char *)(param_1 + 0x56) = 1;
  return;
}

