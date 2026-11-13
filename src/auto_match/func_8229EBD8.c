extern unsigned int *auStack_20;
extern int fn_82266D28();
extern int fn_8229EF38();
extern int fn_82520158();


unsigned int * fn_8229EBD8(unsigned int *param_1)

{
  unsigned char auStack_20 [8];
  
  *param_1 = 0;
  param_1[1] = 0;
  fn_82266D28(param_1,0);
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  fn_82520158("ui_replayscreen",auStack_20,0);
  fn_8229EF38(param_1,auStack_20);
  return param_1;
}

