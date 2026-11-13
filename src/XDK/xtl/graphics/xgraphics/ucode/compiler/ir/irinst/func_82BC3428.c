extern int fn_82AB15D0();
extern int fn_82BC2958();


void fn_82BC3428(int *param_1,unsigned int param_2)

{
  int iVar1;
  int iVar2;
  
  if (*(char *)(param_1[0xee] + 0x571) != '\0') {
    fn_82AB15D0(0,"Assertion failed: %s (%s:%u)","!context->in_ssa_form","e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\compiler\\ir\\irinst.cpp",0xb8);
  }
  fn_82BC2958(param_1,(unsigned __int64)(unsigned int)param_1[5] + 1,param_2);
  iVar1 = param_1[5];
  param_1[5] = iVar1 + 1;
  if (((0 < param_1[4]) && ((param_2 & 0xffffffff) == (unsigned __int64)(unsigned int)param_1[7])) &&
     (iVar2 = (*(int (**)())(*param_1 + 4))(param_1), iVar1 + 1 > iVar2)) {
    param_1[0x39] = param_1[0x39] | 0x200;
  }
  return;
}

