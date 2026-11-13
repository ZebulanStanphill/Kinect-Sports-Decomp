extern int fn_827F4100();
extern int fn_827F4248();
extern unsigned int lbl_8201DE58;


unsigned int * fn_827FA638(unsigned int *param_1,int param_2)

{
  fn_827F4248(param_1,param_1 + 8,*(unsigned int *)(param_2 + 4),0,0);
  *param_1 = &lbl_8201DE58;
  fn_827F4100(param_1 + 8,param_2);
  return param_1;
}

