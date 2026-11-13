extern int fn_827F3980();
extern unsigned int lbl_8201DD34;
extern unsigned int lbl_83156AB4;


unsigned int *
fn_827F4248(unsigned int *param_1,unsigned int param_2,unsigned char **param_3,unsigned __int64 param_4,
             unsigned __int64 param_5)

{
  *param_1 = &lbl_8201DD34;
  param_1[1] = param_3 ? param_3 : &lbl_83156AB4;
  param_1[2] = param_2;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(unsigned short *)(param_1 + 7) = 0;
  *(unsigned short *)((int)param_1 + 0x1e) = 0;
  fn_827F3980(param_1,param_4,param_5);
  return param_1;
}

