extern int fn_82AB15D0();
extern int fn_82AB7940();


void fn_82B7C760(int param_1)

{
  int iVar1;
  
  iVar1 = fn_82AB7940(*(unsigned int *)(param_1 + 4),
                            *(unsigned int *)(*(int *)(param_1 + 0x10) + 0x600));
  if (iVar1 != 0) {
    fn_82AB15D0(0,"Assertion failed: %s (%s:%u)","sRet == E_SSM_OK","e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\compiler\\compiler.cpp",0x2e3);
  }
  return;
}

