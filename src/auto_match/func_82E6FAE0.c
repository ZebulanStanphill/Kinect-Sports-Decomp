extern int fn_82E6EDA0();
extern unsigned int lbl_8215EDF0;


unsigned int *
fn_82E6FAE0(unsigned int *param_1, int *param_2, unsigned __int64 param_3, unsigned __int64 param_4, unsigned __int64 param_5, unsigned __int64 param_6, unsigned __int64 param_7, unsigned int param_8, unsigned int in_stack_00000054)

{

  
  fn_82E6EDA0(param_1,param_3,param_4,param_5,param_6,param_7,in_stack_00000054);
  param_1[0x16] = param_2;
  param_1[0x17] = param_8;
  param_1[0x18] = 3000;
  *param_1 = &lbl_8215EDF0;
  if (param_2 != (int *)0x0) {
    (*(int (**)())(*param_2 + 4))(param_2);
  }
  return param_1;
}

