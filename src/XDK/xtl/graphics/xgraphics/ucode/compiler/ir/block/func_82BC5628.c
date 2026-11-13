extern int fn_82AB15D0();
extern int fn_82BBFD90();


void fn_82BC5628(unsigned int param_1,int param_2,int param_3)

{
  if (*(unsigned int *)(param_2 + 0x3b4) == 0) {
    fn_82AB15D0(0,"Assertion failed: %s (%s:%u)","inst_next.owningBlock != 0","e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\compiler\\ir\\block.cpp",0xc1);
  }
  fn_82BBFD90(param_3,param_2);
  *(unsigned int *)(param_3 + 0x3b4) = param_1;
  return;
}

