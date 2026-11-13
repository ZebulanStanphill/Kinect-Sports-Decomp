extern int fn_82AB15D0();


void fn_82BC2958(int param_1,int param_2,int param_3)

{
  if (param_2 >= 6) {
    fn_82AB15D0(0,"Assertion failed: %s (%s:%u)","arg < (5 + 1)","e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\compiler\\ir\\irinst.cpp",0xfb);
  }
  *(unsigned int *)((param_2 + 0x14) * 4 + param_1) = *(unsigned int *)(param_3 + 0x20);
  *(unsigned int *)((param_2 + 0xe) * 4 + param_1) = *(unsigned int *)(param_3 + 0xc);
  *(int *)((param_2 + 7) * 4 + param_1) = param_3;
  return;
}

