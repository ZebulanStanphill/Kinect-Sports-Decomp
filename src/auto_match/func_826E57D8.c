extern int fn_8267C4C8();
extern int fn_826E56B8();
extern unsigned int lbl_8200D62C;


unsigned int *
fn_826E57D8(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
             unsigned int param_5,unsigned __int64 param_6)

{
  fn_826E56B8(param_1,param_6,0x20002);
  *param_1 = &lbl_8200D62C;
  if ((param_2 & 0xffffffff) != 0) {
    fn_8267C4C8(param_2);
  }
  param_1[5] = (int)param_2;
  if ((param_3 & 0xffffffff) != 0) {
    fn_8267C4C8(param_3);
  }
  param_1[6] = (int)param_3;
  if ((param_4 & 0xffffffff) != 0) {
    fn_8267C4C8(param_4);
  }
  param_1[7] = (int)param_4;
  param_1[8] = param_5;
  param_1[9] = 0;
  return param_1;
}

