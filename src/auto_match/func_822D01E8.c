extern int fn_822315A0();
extern int fn_82365BD8();
extern unsigned int lbl_821AD518;


unsigned int *
fn_822D01E8(unsigned int *param_1,int param_2,unsigned int param_3,unsigned int param_4,int param_5,
             unsigned int param_6)

{
  unsigned int uVar1;
  
  uVar1 = *(unsigned int *)(param_2 + 0x114);
  param_1[1] = param_4;
  param_1[3] = param_6;
  param_1[4] = param_3;
  *param_1 = &lbl_821AD518;
  param_1[2] = uVar1;
  param_1[5] = param_2;
  fn_82365BD8(param_1 + 6,param_5);
  if (*(unsigned int *)(param_5 + 4) != 0) {
    fn_822315A0(*(unsigned int *)(param_5 + 4));
  }
  return param_1;
}

