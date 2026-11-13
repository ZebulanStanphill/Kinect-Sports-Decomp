extern unsigned int *auStack_20;
extern int fn_82536820();
extern unsigned int lbl_82165B74;


unsigned int * fn_82F53118(unsigned int *param_1,unsigned int param_2)

{
  unsigned char auStack_20 [16];
  
  param_1[1] = param_2;
  *param_1 = &lbl_82165B74;
  fn_82536820(param_1 + 2,auStack_20,auStack_20);
  return param_1;
}

