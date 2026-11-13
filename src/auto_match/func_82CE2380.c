extern int fn_82A2B748();


void fn_82CE2380(unsigned int param_1,unsigned int *param_2,unsigned int *param_3,unsigned int param_4)

{
  *param_2 = param_1;
  if (0 < (int)param_1) {
    param_1 = param_1 & 0xffff | 0x80070000;
  }
  *param_3 = param_1;
  fn_82A2B748();
  if (param_4 != 0) {
    *(unsigned int *)(param_4 + 0x18) = *param_3;
  }
  return;
}

