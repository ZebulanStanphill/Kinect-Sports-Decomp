extern int fn_82AB15D0();


void fn_82AB6DA0(unsigned int param_1)

{
  if (param_1 == 0) {
    fn_82AB15D0(0,"Assertion failed: %s (%s:%u)","pCS","e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\statecompiler\\compiledshader.cpp",0x13a);
  }
  *(int *)(param_1 + 0x990) = *(int *)(param_1 + 0x990) + 1;
  return;
}

