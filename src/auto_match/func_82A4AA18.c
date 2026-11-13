extern int fn_82A512B8();
extern unsigned int lbl_82089C10;
extern unsigned int lbl_82089C80;


unsigned int *
fn_82A4AA18(unsigned int *param_1,unsigned __int64 param_2,unsigned int param_3,unsigned int param_4,
             unsigned __int64 param_5,unsigned __int64 param_6)

{
  fn_82A512B8(param_1 + 1,param_2,param_5,param_6);
  param_1[0x23] = param_4;
  param_1[0x24] = param_3;
  *param_1 = &lbl_82089C80;
  param_1[1] = &lbl_82089C10;
  return param_1;
}

