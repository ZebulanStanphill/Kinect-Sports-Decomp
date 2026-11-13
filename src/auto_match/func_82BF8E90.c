extern int fn_82BE51E8();
extern int fn_82BF8DF8();
extern unsigned int lbl_820EBE5C;


unsigned int *
fn_82BF8E90(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
  fn_82BE51E8(param_1,"CMassiveRecord");
  param_1[5] = param_3;
  param_1[6] = param_4;
  param_1[7] = param_2;
  *param_1 = &lbl_820EBE5C;
  fn_82BF8DF8(param_1 + 8,2);
  fn_82BF8DF8(param_1 + 0x20,1);
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  return param_1;
}

