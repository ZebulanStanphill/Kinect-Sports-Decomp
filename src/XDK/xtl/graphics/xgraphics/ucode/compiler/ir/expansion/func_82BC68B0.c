extern int fn_82AB15D0();
extern int fn_82BC2958();


void fn_82BC68B0(int param_1,unsigned int param_2)

{
  int lVar1;
  
  if ((param_2 & 0xffffffff) == 0) {
    fn_82AB15D0(0,"Assertion failed: %s (%s:%u)","resource","e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\compiler\\ir\\IRInst.hpp",0x78c);
  }
  lVar1 = (unsigned __int64)*(unsigned int *)(param_1 + 0x14) + 1;
  *(int *)(param_1 + 0x14) = (int)lVar1;
  fn_82BC2958(param_1,lVar1,param_2);
  return;
}

