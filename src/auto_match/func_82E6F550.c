extern int fn_82E6EDA0();
extern unsigned int lbl_8215EDBC;


unsigned int *
fn_82E6F550(unsigned int *param_1,int *param_2,unsigned __int64 param_3,unsigned __int64 param_4,
             unsigned __int64 param_5,unsigned int param_6)

{
  fn_82E6EDA0(param_1,param_3,0xffffffff8202e618,0xffffffff82154ac8,param_4,param_5);
  param_1[0x16] = param_2;
  param_1[0x17] = param_6;
  *(unsigned short *)(param_1 + 0x18) = 0;
  *param_1 = &lbl_8215EDBC;
  *(unsigned __int64 *)(param_1 + 0x1a) = 0;
  if (param_2 != (int *)0x0) {
    (**(int (***)())(*param_2 + 4))(param_2);
  }
  return param_1;
}

