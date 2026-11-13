extern int fn_82F004D8();
extern int fn_82F00740();


void fn_82E826C8(int param_1,int param_2,unsigned __int64 param_3)

{
  if ((param_2 == 0) && (*(int *)(param_1 + 0x7808) == 0)) {
    fn_82F00740(param_1,param_3);
  }
  if ((*(int *)(param_1 + 0x7820) != 0) || (*(int *)(param_1 + 0x7824) != 0)) {
    fn_82F004D8(param_1,0,0);
  }
  return;
}

