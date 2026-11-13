extern int fn_82C8B6D8();
extern int fn_82C8B7E8();


void fn_830BF860(__int64 param_1,__int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5,unsigned __int64 param_6)

{
  fn_82C8B7E8(param_1,param_2,(param_5 & 0xfffffff) * 0x10 + param_2,8);
  fn_82C8B6D8(param_1 + 0x200,param_3,param_4,8,param_6);
  return;
}

