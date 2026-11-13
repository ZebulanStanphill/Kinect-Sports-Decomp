extern int fn_8267C4C8();
extern int fn_8267C4F0();
extern int fn_8268B330();
extern int fn_8268B8E8();
extern unsigned int lbl_8200C694;


unsigned int *
fn_826D8EE0(unsigned int *param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned int param_4,
             unsigned int param_5,unsigned int param_6)

{
  param_1[1] = 1;
  *param_1 = &lbl_8200C694;
  fn_8268B330(param_1 + 2);
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  fn_8268B8E8(param_1 + 2,param_2);
  *(unsigned __int64 *)(param_1 + 4) = param_3;
  if ((param_4) != 0) {
    fn_8267C4C8(param_4);
  }
  if (param_1[3] != 0) {
    fn_8267C4F0(param_1[3]);
  }
  param_1[3] = (int)param_4;
  if ((param_5) != 0) {
    fn_8267C4C8(param_5);
  }
  if (param_1[6] != 0) {
    fn_8267C4F0(param_1[6]);
  }
  param_1[6] = (int)param_5;
  if ((param_6) != 0) {
    fn_8267C4C8(param_6);
  }
  if (param_1[7] != 0) {
    fn_8267C4F0(param_1[7]);
  }
  param_1[7] = (int)param_6;
  return param_1;
}

