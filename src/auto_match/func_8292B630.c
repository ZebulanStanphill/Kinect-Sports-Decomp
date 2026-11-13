extern int fn_829252C0();
extern int memcpy();


void fn_8292B630(int param_1,int param_2,int param_3,unsigned int param_4)

{
  if (*(int *)(param_1 + 0x10) != 0) {
    param_4 = fn_829252C0(param_1,param_4);
  }
  memcpy((__int64)*(int *)(param_1 + 0x60) * (__int64)param_2 +
               (__int64)*(int *)(param_1 + 100) * (__int64)param_3 +
               (unsigned __int64)*(unsigned int *)(param_1 + 0x20),param_4,*(int *)(param_1 + 0x68) << 4);
  return;
}

