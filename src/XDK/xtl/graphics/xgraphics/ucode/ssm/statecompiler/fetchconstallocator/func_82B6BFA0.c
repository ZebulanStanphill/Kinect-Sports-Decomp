extern int fn_82AB15D0();


unsigned __int64 fn_82B6BFA0(unsigned int param_1,int param_2,unsigned int param_3,unsigned int *param_4,unsigned int *param_5)

{
  unsigned __int64 uVar1;
  unsigned int uVar2;
  
  if (param_1 == 0) {
    fn_82AB15D0(0,"Assertion failed: %s (%s:%u)","pFCA","e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\statecompiler\\fetchconstallocator.cpp",0x18a);
  }
  if (param_4 == (unsigned int *)0x0) {
    fn_82AB15D0(0,"Assertion failed: %s (%s:%u)","pConstIndex","e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\statecompiler\\fetchconstallocator.cpp",0x18b);
  }
  if (param_5 == (unsigned int *)0x0) {
    fn_82AB15D0(0,"Assertion failed: %s (%s:%u)","pConstSlot","e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\statecompiler\\fetchconstallocator.cpp",0x18c);
  }
  if (*(int *)(param_1 + 0x10) == 2) {
    fn_82AB15D0(0,"Assertion failed: %s (%s:%u)","pFCA->eMode != E_FA_READONLY","e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\statecompiler\\fetchconstallocator.cpp",0x18d);
  }
  if ((param_2 == 3) || (param_2 == 2)) {
    fn_82AB15D0(0,"Assertion failed: %s (%s:%u)","eType != E_FETCH_TYPE_VERTEX_INTERNAL && eType != E_FETCH_TYPE_TEXTURE_INTERNAL","e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\statecompiler\\fetchconstallocator.cpp",400);
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    if (param_2 == 1) {
      if (param_3 >= 0x60) {
        return 1;
      }
      *param_4 = (0x5f - param_3) / 3;
      uVar2 = (0x5f - param_3) % 3;
      goto LAB_82b6c13c;
    }
    if (param_2 != 0) {
      uVar1 = 0x1a3;
      goto LAB_82b6c114;
    }
  }
  else {
    if (*(int *)(param_1 + 0x10) != 1) {
      fn_82AB15D0(0,"Assertion failed: %s (%s:%u)","pFCA->eMode == E_FA_DECREMENTAL","e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\statecompiler\\fetchconstallocator.cpp",0x1af);
    }
    if (param_2 != 0) {
      uVar1 = 0x1b0;
LAB_82b6c114:
      fn_82AB15D0(0,"Assertion failed: %s (%s:%u)","eType == E_FETCH_TYPE_TEXTURE","e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\statecompiler\\fetchconstallocator.cpp",uVar1);
    }
  }
  if (param_3 >= 0x20) {
    return 1;
  }
  *param_4 = param_3;
  uVar2 = 0;
LAB_82b6c13c:
  *param_5 = uVar2;
  return 0;
}

