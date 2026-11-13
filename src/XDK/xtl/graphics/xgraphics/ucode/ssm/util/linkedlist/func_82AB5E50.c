extern int fn_82AB15D0();
extern int fn_82B6B008();


int  fn_82AB5E50(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  int lVar1;
  
  lVar1 = fn_82B6B008(param_4,0x10,param_2,param_3,param_1);
  if (lVar1 == 0) {
    fn_82AB15D0(0,"Assertion failed: %s (%s:%u)","pMemMgr","e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\util\\linkedlist.cpp",0xac1);
  }
  return lVar1;
}

