extern int fn_82BE8CE0();
extern int fn_82BE8D28();
extern unsigned int lbl_820EB0DC;


unsigned int *
fn_82BECCB8(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned __int64 param_4,
             unsigned int param_5)

{
  fn_82BE8CE0();
  param_1[2] = param_2;
  param_1[3] = (int)param_3;
  *(unsigned __int64 *)(param_1 + 4) = param_4;
  param_1[6] = param_5;
  *param_1 = &lbl_820EB0DC;
  param_1[7] = 0;
  if ((param_3 & 0xffffffff) != 0) {
    fn_82BE8D28(param_3);
  }
  return param_1;
}

