extern int fn_82EE6BC8();
extern int fn_82F37DA8();
extern unsigned int lbl_8215FF24;


unsigned int * fn_82EE7DF8(unsigned int *param_1)

{
  int *apiStack_20 [2];
  
  *param_1 = &lbl_8215FF24;
  fn_82F37DA8(param_1 + 2);
  param_1[0x44] = 0;
  param_1[1] = 1;
  apiStack_20[0] = (int *)0x0;
  fn_82EE6BC8(param_1,0xffffffff8202f1fc,apiStack_20);
  param_1[3] = apiStack_20[0];
  if (apiStack_20[0] != (int *)0x0) {
    (**(int (***)())(*apiStack_20[0] + 8))();
  }
  param_1[0x44] = param_1 + 2;
  return param_1;
}

