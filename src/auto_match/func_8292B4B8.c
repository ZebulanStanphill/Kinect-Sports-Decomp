extern int fn_828F10B0();
extern int fn_829252C0();


void fn_8292B4B8(int param_1,int param_2,int param_3,unsigned int param_4)

{
  if (*(int *)(param_1 + 0x10) != 0) {
    param_4 = fn_829252C0(param_1,param_4);
  }
  fn_828F10B0((int)*(int *)(param_1 + 0x60) * (int)param_2 +
               (int)*(int *)(param_1 + 100) * (int)param_3 +
               (unsigned int)*(unsigned int *)(param_1 + 0x20),param_4,*(int *)(param_1 + 0x68) << 2);
  return;
}

