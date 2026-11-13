extern int fn_82C8B358();
extern int fn_82C8B508();


void fn_830BF950(__int64 param_1,__int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5,unsigned __int64 param_6)

{
  fn_82C8B508(param_1,param_2,param_2 + param_5,8,(param_5 & 0x7fffffff) << 1);
  fn_82C8B358(param_1 + 0x200,param_3,param_4,8,param_6);
  return;
}

