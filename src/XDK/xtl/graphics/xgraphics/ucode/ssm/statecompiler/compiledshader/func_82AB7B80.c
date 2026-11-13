extern int fn_82AB15D0();
extern int fn_82AB8318();


void fn_82AB7B80(unsigned int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  if (param_1 == 0) {
    fn_82AB15D0(0,"Assertion failed: %s (%s:%u)","pCS","e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\statecompiler\\compiledshader.cpp",0x76f);
  }
  fn_82AB8318(*(unsigned int *)(param_1 + 0x30),param_2,param_3);
  return;
}

