extern int fn_82AB15D0();
extern int fn_82BC0088();


void fn_82BC5ED8(unsigned int param_1,unsigned int param_2)

{
  int *piVar1;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    fn_82AB15D0(0,"Assertion failed: %s (%s:%u)","(from != 0) && (to != 0)","e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\compiler\\ir\\block.cpp",0x28);
  }
  piVar1 = (int *)fn_82BC0088(*(int *)(param_1 + 0x38),
                                    *(unsigned int *)(*(int *)(param_1 + 0x38) + 4));
  *piVar1 = param_2;
  piVar1 = (int *)fn_82BC0088(*(int *)(param_2 + 0x3c),
                                    *(unsigned int *)(*(int *)(param_2 + 0x3c) + 4));
  *piVar1 = param_1;
  return;
}

