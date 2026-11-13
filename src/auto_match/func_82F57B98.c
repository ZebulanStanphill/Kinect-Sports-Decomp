extern int fn_82F564F0();
extern int fn_82F56C08();
extern int fn_82F579A8();


unsigned __int64 fn_82F57B98(unsigned __int64 param_1,__int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  int lVar1;
  
  lVar1 = fn_82F564F0(param_2);
  fn_82F56C08(param_2 + 0xd,lVar1 + 0x10,param_4);
  fn_82F579A8(param_1,param_2,param_3,lVar1);
  return param_1;
}

