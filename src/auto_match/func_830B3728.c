extern int fn_830B4CA0();
extern unsigned int lbl_821880CC;


unsigned int * fn_830B3728(unsigned int *param_1,unsigned int param_2,unsigned char param_3)

{
  fn_830B4CA0();
  param_1[2] = param_2;
  *(unsigned char *)(param_1 + 3) = param_3;
  param_1[1] = 0x1000;
  *param_1 = &lbl_821880CC;
  return param_1;
}

