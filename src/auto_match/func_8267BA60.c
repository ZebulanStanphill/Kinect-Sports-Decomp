extern int fn_8267ADA8();
extern int fn_8267B960();
extern int fn_82691080();
extern int fn_82691480();
extern unsigned int lbl_831E7E60;
extern unsigned int *lbl_831F129C;


int fn_8267BA60(int param_1)

{
  fn_8267B960();
  fn_82691480(param_1 + 0xb4,param_1,0x4000,0x1000);
  fn_82691080(param_1 + 0x118,param_1,0x4000);
  fn_8267ADA8(param_1 + 0x2c4,0);
  *(unsigned int *)(param_1 + 0x2e0) = 0;
  *(unsigned int *)(param_1 + 0x2e4) = 0;
  *lbl_831F129C = param_1 + 0xb4;
  lbl_831E7E60 = param_1;
  return param_1;
}

