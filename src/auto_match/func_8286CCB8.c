extern unsigned int *auStack_20;
extern int fn_8286D250();
extern unsigned int lbl_82021550;
extern unsigned int lbl_8202156C;


unsigned int * fn_8286CCB8(unsigned int *param_1)

{
  unsigned char auStack_20 [16];
  
  param_1[5] = lbl_8202156C;
  *(unsigned char *)(param_1 + 1) = 0;
  param_1[2] = 3;
  *param_1 = &lbl_82021550;
  param_1[3] = 3;
  param_1[4] = 0;
  fn_8286D250(param_1 + 6,auStack_20);
  return param_1;
}

