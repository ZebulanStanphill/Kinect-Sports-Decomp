extern int fn_82AB15D0();


void fn_82A9FBB0(int param_1,unsigned int param_2)

{
  int iVar1;
  
  if (param_2 >> 5 >= 8) {
    fn_82AB15D0(0,"Assertion failed: %s (%s:%u)","dwOffset < sizeof(usedConstants) / sizeof(usedConstants[0])","e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\driver\\r500assembler.cpp",0x328);
  }
  iVar1 = (param_2 >> 5) * 4;
  *(unsigned int *)(iVar1 + param_1) = 1 << (param_2 & 0x1f) | *(unsigned int *)(iVar1 + param_1);
  return;
}

