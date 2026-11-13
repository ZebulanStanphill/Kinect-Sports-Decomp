extern unsigned int *auStack_20;
extern int fn_82F54610();
extern unsigned int lbl_82165CA0;


unsigned int * fn_82F54720(unsigned int *param_1)

{
  unsigned char auStack_20 [16];
  
  *param_1 = &lbl_82165CA0;
  fn_82F54610(param_1 + 0x10,auStack_20);
  return param_1;
}

