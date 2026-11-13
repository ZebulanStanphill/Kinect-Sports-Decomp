extern int fn_8275A260();
extern unsigned int lbl_820145C0;


unsigned int * fn_8275AD88(unsigned int *param_1)

{
  param_1[3] = 0;
  *param_1 = &lbl_820145C0;
  fn_8275A260();
  return param_1;
}

