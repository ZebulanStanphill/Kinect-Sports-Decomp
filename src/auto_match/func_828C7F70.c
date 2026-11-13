extern unsigned int lbl_82023A4C;
extern unsigned int lbl_82197140;


unsigned int *
fn_828C7F70(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned __int64 param_4,
             int *param_5)

{
  param_1[1] = param_2;
  param_1[2] = 0;
  *param_1 = &lbl_82023A4C;
  param_1[3] = &lbl_82197140;
  param_1[4] = 9;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = param_5;
  param_1[8] = param_3;
  (**(int (***)())(*param_5 + 8))(param_5,param_1[1],param_4,param_1 + 3);
  return param_1;
}

