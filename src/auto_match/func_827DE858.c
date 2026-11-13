extern int fn_822315A0();
extern int fn_82517978();
extern unsigned int lbl_821CA744;


unsigned int * fn_827DE858(unsigned int *param_1,unsigned int *param_2,unsigned int param_3)

{
  unsigned int *puStack0000001c;
  
  *param_1 = &lbl_821CA744;
  param_1[1] = 0;
  param_1[2] = 0;
  puStack0000001c = param_2;
  fn_82517978(param_1 + 1,*param_2,param_2[1],0);
  param_1[3] = param_3;
  param_1[4] = 0;
  if (param_2[1] != 0) {
    fn_822315A0();
  }
  return param_1;
}

