extern int fn_8267C498();
extern int fn_8267C4C8();
extern int fn_8267C4F0();
extern unsigned int lbl_820155EC;


unsigned int *
fn_8278ADD8(unsigned int *param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4,unsigned int param_5
             )

{
  param_1[1] = 1;
  *param_1 = &lbl_820155EC;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[5] = 0;
  if (param_2 != 0) {
    *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
  }
  if (param_1[5] != 0) {
    fn_8267C498();
  }
  param_1[5] = param_2;
  if ((param_3 & 0xffffffff) != 0) {
    fn_8267C4C8(param_3);
  }
  if (param_1[2] != 0) {
    fn_8267C4F0();
  }
  param_1[2] = (int)param_3;
  if ((param_4 & 0xffffffff) != 0) {
    fn_8267C4C8(param_4);
  }
  if (param_1[3] != 0) {
    fn_8267C4F0();
  }
  param_1[3] = (int)param_4;
  param_1[4] = param_5;
  return param_1;
}

