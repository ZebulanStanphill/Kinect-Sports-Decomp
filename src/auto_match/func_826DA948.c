extern int fn_8267ADA8();
extern int fn_8267C4C8();
extern int fn_8267C4F0();
extern unsigned int lbl_82005700;
extern unsigned int lbl_82005928;
extern unsigned int lbl_8200C6A0;
extern unsigned int lbl_8200C6B4;
extern unsigned int lbl_8200C6B8;


unsigned int * fn_826DA948(unsigned int *param_1,unsigned __int64 param_2)

{
  param_1[1] = 1;
  param_1[2] = &lbl_82005928;
  param_1[4] = &lbl_82005700;
  *param_1 = &lbl_8200C6B4;
  param_1[2] = &lbl_8200C6A0;
  param_1[4] = &lbl_8200C6B8;
  param_1[5] = 0;
  param_1[6] = 0;
  fn_8267ADA8(param_1 + 7,0);
  if ((param_2 & 0xffffffff) != 0) {
    fn_8267C4C8(param_2);
  }
  if (param_1[5] != 0) {
    fn_8267C4F0();
  }
  param_1[5] = (int)param_2;
  return param_1;
}

