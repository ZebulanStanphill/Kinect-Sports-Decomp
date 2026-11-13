extern void fn_82A5C1E0(void *,int,int,int,unsigned);
extern unsigned int lbl_8208DF70;
extern unsigned int lbl_8208DFA8;


unsigned int * fn_82A5CF28(unsigned int *param_1,int a,int b,int c,unsigned int value)

{

  
  fn_82A5C1E0(param_1 + 1,a,b,c,value);
  param_1[7] = value;
  *param_1 = &lbl_8208DFA8;
  param_1[1] = &lbl_8208DF70;
  return param_1;
}

