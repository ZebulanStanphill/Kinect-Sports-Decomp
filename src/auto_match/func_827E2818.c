extern int fn_822315A0();
extern int fn_82517978();
extern unsigned int lbl_8201D108;


unsigned int *
fn_827E2818(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned int *param_4)

{
  unsigned int *puStack0000002c;
  
  param_1[1] = param_2;
  param_1[2] = param_3;
  *param_1 = &lbl_8201D108;
  param_1[3] = 0;
  param_1[4] = 0;
  puStack0000002c = param_4;
  fn_82517978(param_1 + 3,*param_4,param_4[1],0);
  if (param_4[1] != 0) {
    fn_822315A0();
  }
  return param_1;
}

