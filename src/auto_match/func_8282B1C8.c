extern void fn_8282B068(void);
extern void fn_8282B150(void);
extern int fn_8282D640();


void fn_8282B1C8(int param_1)

{
  *(unsigned int *)(param_1 + 0x2b8) = 0;
  *(unsigned int *)(param_1 + 0x2c0) = 1;
  *(unsigned int *)(param_1 + 0x2c4) = 1;
  *(unsigned int *)(param_1 + 700) = 0;
  fn_8282D640(param_1,param_1 + 0x344,fn_8282B068,0);
  if (*(char *)(param_1 + 1000) == '\0') {
    fn_8282D640(param_1,param_1 + 0x344,fn_8282B150,0);
  }
  return;
}

