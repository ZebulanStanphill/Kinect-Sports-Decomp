extern int fn_822315A0();
extern int fn_82517978();
extern unsigned int lbl_821CAC7C;


unsigned int *
fn_827DE948(unsigned int *param_1,unsigned int param_2,unsigned int *param_3,unsigned int param_4)

{
  unsigned int *puStack00000024;
  
  *param_1 = &lbl_821CAC7C;
  param_1[1] = 0;
  param_1[2] = 0;
  puStack00000024 = param_3;
  fn_82517978(param_1 + 1,*param_3,param_3[1],0);
  param_1[3] = param_2;
  param_1[4] = param_4;
  if (param_3[1] != 0) {
    fn_822315A0();
  }
  return param_1;
}

