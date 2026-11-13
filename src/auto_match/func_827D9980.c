extern unsigned int lbl_8201BA08;
extern unsigned int lbl_8201BA10;


unsigned int *
fn_827D9980(unsigned int *param_1,int *param_2,unsigned int param_3,unsigned int param_4,
             unsigned int param_5)

{
  unsigned int uVar1;
  unsigned int *puStack00000014;
  
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_3;
  param_1[4] = param_4;
  param_1[9] = param_5;
  *param_1 = &lbl_8201BA10;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[10] = &lbl_8201BA08;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  puStack00000014 = param_1;
  uVar1 = (**(int (***)())(*param_2 + 4))(param_2);
  param_1[8] = uVar1;
  return param_1;
}

