extern int fn_8282D640();
extern void fn_82831910(void);
extern void fn_828318B0(void);


void fn_828319F8(int param_1,unsigned int param_2)

{
  *(unsigned int *)(param_1 + 0x3c0) = param_2;
  *(unsigned int *)(param_1 + 0xb0) = 0;
  *(unsigned int *)(param_1 + 0x2b8) = 0;
  *(unsigned int *)(param_1 + 0x2c8) = 1;
  *(unsigned int *)(param_1 + 700) = 0;
  fn_8282D640(param_1,param_1 + 0x36c,fn_82831910,0);
  if (*(char *)(param_1 + 1000) == '\0') {
    fn_8282D640(param_1,param_1 + 0x36c,fn_828318B0,0);
  }
  return;
}

