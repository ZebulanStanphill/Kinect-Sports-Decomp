extern int fn_82AB15D0();
extern int fn_82B6E440();


void fn_82AB9468(unsigned int param_1,unsigned __int64 param_2)

{
  if (param_1 == 0) {
    fn_82AB15D0(0,"Assertion failed: %s (%s:%u)","pShaderStore","e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\statecache\\shaderstore.cpp",0xfa);
  }
  fn_82B6E440(*(unsigned int *)(param_1 + 0x14),param_2);
  return;
}

