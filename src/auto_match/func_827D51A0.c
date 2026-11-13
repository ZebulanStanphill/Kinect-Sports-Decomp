extern int fn_82811400();
extern int fn_82F68CC0();
extern unsigned int lbl_8201ABA0;


unsigned int * fn_827D51A0(unsigned int *param_1,unsigned int *param_2)

{
  unsigned int *puStack00000014;
  
  param_1[1] = 1;
  param_1[2] = 1;
  *param_1 = &lbl_8201ABA0;
  puStack00000014 = param_1;
  fn_82811400(param_1 + 10,0x10);
  param_1[9] = *param_2;
  fn_82F68CC0(param_1 + 10,param_2 + 1,0x18);
  if (param_1 + 3 != (unsigned int *)0x0) {
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0x3e4;
    param_1[7] = 0;
    param_1[8] = 0;
  }
  return param_1;
}

