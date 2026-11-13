extern unsigned int *auStack_20;
extern int fn_82CE7870();


unsigned int * fn_82CE93A0(unsigned int *param_1)

{
  unsigned int auStack_20 [4];
  
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0x80000000;
  *param_1 = 1;
  fn_82CE7870(auStack_20);
  param_1[1] = auStack_20[0];
  return param_1;
}

