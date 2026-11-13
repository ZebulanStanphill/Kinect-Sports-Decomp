extern int fn_82E66120();
extern unsigned int lbl_82153AB4;


unsigned int *
fn_82E49568(unsigned int *param_1,unsigned int param_2,unsigned __int64 param_3,unsigned __int64 param_4,
             unsigned __int64 param_5)

{
  fn_82E66120(param_1,param_3,param_4,param_5);
  param_1[0xe] = param_2;
  param_1[0xf] = 0;
  *param_1 = &lbl_82153AB4;
  param_1[0x10] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0xffffffff;
  return param_1;
}

