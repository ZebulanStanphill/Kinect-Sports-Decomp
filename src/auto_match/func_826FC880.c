extern int fn_8267C4C8();
extern int fn_8268B330();
extern int fn_8268C750();
extern unsigned int lbl_8200DD70;


unsigned int *
fn_826FC880(unsigned int *param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  param_1[1] = 1;
  param_1[3] = 0;
  *param_1 = &lbl_8200DD70;
  param_1[2] = 0x20001;
  if ((param_2 & 0xffffffff) != 0) {
    fn_8267C4C8(param_2);
  }
  param_1[4] = (int)param_2;
  fn_8268C750(param_1 + 5,param_3);
  fn_8268C750(param_1 + 6,param_4);
  fn_8268B330(param_1 + 7);
  param_1[8] = 0;
  param_1[9] = 0;
  *(unsigned char *)(param_1 + 10) = 0;
  return param_1;
}

