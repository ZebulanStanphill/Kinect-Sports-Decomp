extern int fn_82AB15D0();


void fn_82AB7010(unsigned int param_1,unsigned int param_2)

{
  if (param_1 == 0) {
    fn_82AB15D0(0,"Assertion failed: %s (%s:%u)","pCS","e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\statecompiler\\compiledshader.cpp",0x1f2);
  }
  *(unsigned int *)(param_1 + 0x30) = param_2;
  return;
}

