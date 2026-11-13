extern int fn_8252D240();
extern int fn_825925D8();


void fn_824FBF50(int param_1,int *param_2)

{
  if (*param_2 == 0x45) {
    fn_8252D240(param_1,param_1 + 0xba4,0);
    *(unsigned int *)(param_1 + 0xba0) = 0;
  }
  fn_825925D8(param_1,param_2);
  return;
}

