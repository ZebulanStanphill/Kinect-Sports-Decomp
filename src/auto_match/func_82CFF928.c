extern int fn_82CFF8D0();


void fn_82CFF928(int *param_1,unsigned __int64 param_2,unsigned __int64 param_3,int param_4,int param_5)

{
  if ((0 < (__int64)param_4) && ((__int64)param_5 == 0)) {
    param_5 = fn_82CFF8D0(param_3,param_4);
  }
  (*(int (**)())(*param_1 + 0x14))(param_1,1,param_2,param_3,param_4,param_5);
  return;
}

