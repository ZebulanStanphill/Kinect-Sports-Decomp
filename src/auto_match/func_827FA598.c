extern int fn_827F3770();
extern int fn_827F4248();
extern unsigned int lbl_8201DE58;


unsigned int * fn_827FA598(unsigned int *param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  fn_827F4248(param_1,param_1 + 8,param_3,0,0);
  *param_1 = &lbl_8201DE58;
  fn_827F3770(param_1 + 8,param_2);
  return param_1;
}

