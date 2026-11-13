extern int fn_82AB15D0();
extern int fn_82AB7070();


unsigned __int64 fn_82B7FA90(unsigned int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  if (param_1 == 0) {
    fn_82AB15D0(0,"Assertion failed: %s (%s:%u)","pCP","e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\statecompiler\\compiledprogram.cpp",0x5a4);
  }
  fn_82AB7070(*(unsigned int *)(param_1 + 0x34),param_2,param_3);
  return 0;
}

