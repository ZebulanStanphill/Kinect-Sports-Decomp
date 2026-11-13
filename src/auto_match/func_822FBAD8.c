extern int fn_8223B688();
extern int fn_822C70F0();
extern int fn_822FBF10();
extern unsigned int lbl_821AE85C;


unsigned int *
fn_822FBAD8(double param_1,double param_2,double param_3,unsigned int *param_4,unsigned __int64 param_5,
             unsigned __int64 param_6,unsigned int param_7,int param_8,unsigned __int64 param_9)

{
  unsigned int in_stack_0000005c;
  unsigned int in_stack_00000064;
  
  fn_822C70F0();
  *param_4 = &lbl_821AE85C;
  param_4[0x15] = 0;
  param_4[0x16] = 0;
  param_4[0x17] = 0;
  param_4[0x19] = param_7;
  param_4[0x1a] = param_8;
  param_4[0x1b] = param_8 + 0x24;
  fn_8223B688(param_4 + 0x1c,param_9);
  param_4[0x25] = (float)param_1;
  param_4[0x26] = (float)param_2;
  param_4[0x23] = 0;
  param_4[0x27] = (float)param_3;
  param_4[0x24] = 0;
  fn_8223B688(param_4 + 0x28,in_stack_0000005c);
  fn_8223B688(param_4 + 0x2f,in_stack_00000064);
  param_4[0x14] = 1;
  fn_822FBF10(param_4);
  return param_4;
}

