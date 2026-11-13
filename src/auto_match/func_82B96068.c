extern int fn_828F0E90();
extern int fn_82B8FDD0();


void fn_82B96068(int param_1,int param_2,int param_3,unsigned int param_4)

{
  if (*(int *)(param_1 + 0x10) != 0) {
    param_4 = fn_82B8FDD0(param_1,param_4,param_4);
  }
  fn_828F0E90((int)*(int *)(param_1 + 0x60) * (int)param_2 +
                  (int)*(int *)(param_1 + 100) * (int)param_3 +
                  (unsigned int)*(unsigned int *)(param_1 + 0x20),2,param_4,4,*(int *)(param_1 + 0x68) << 2);
  return;
}

