extern unsigned int *auStack_20;
extern int fn_828E2E30();
extern unsigned int lbl_8202726C;


unsigned int * fn_828E4E08(unsigned int *param_1,unsigned int param_2)

{
  unsigned char auStack_20 [16];
  
  param_1[1] = param_2;
  *param_1 = &lbl_8202726C;
  fn_828E2E30(param_1 + 2,auStack_20,auStack_20);
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  return param_1;
}

