extern int fn_8267C4C8();
extern int fn_8267C4F0();
extern int fn_8268C750();
extern int fn_82696330();
extern unsigned int lbl_8200DD88;


unsigned int *
fn_826FCB18(unsigned int *param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
             int param_5)

{
  param_1[1] = 1;
  param_1[3] = 0;
  *param_1 = &lbl_8200DD88;
  param_1[2] = 0x20001;
  if ((param_2 & 0xffffffff) != 0) {
    fn_8267C4C8(param_2);
  }
  param_1[4] = (int)param_2;
  fn_8268C750(param_1 + 5,param_3);
  fn_8268C750(param_1 + 6,param_4);
  if (*(int *)(param_5 + 0x10) != 0) {
    fn_8267C4C8();
  }
  param_1[7] = *(unsigned int *)(param_5 + 0x10);
  param_1[8] = 0;
  if (*(int *)(param_5 + 0x10) != 0) {
    fn_8267C4F0();
  }
  fn_82696330(param_5);
  return param_1;
}

