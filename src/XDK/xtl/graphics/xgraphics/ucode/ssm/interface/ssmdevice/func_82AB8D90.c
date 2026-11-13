extern int fn_82AB15D0();
extern int fn_82AB4E50();
extern int fn_82AB8668();
extern int fn_82AB94D0();
extern int fn_82AB9D20();
extern int fn_82B69998();
extern int fn_82B6ADF8();
extern int fn_82B6B298();
extern int fn_82B6B4E8();
extern int fn_82B6B728();
extern int fn_82B6C878();
extern int fn_82B6D938();
extern int fn_82B6E1A0();
extern int fn_82B77EE0();


int fn_82AB8D90(unsigned int param_1)

{
  int iVar1;
  
  if (param_1 == 0) return 0;
  {
    fn_82AB8668(param_1);
    fn_82AB4E50(*(unsigned int *)(param_1 + 0x48));
    iVar1 = fn_82B77EE0(*(unsigned int *)(param_1 + 0x6c));
    if (iVar1 != 0) {
      fn_82AB15D0(0,"Assertion failed: %s (%s:%u)","eRet == E_SSM_OK","e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\interface\\ssmdevice.cpp",0x222);
    }
    iVar1 = fn_82B6C878(*(unsigned int *)(param_1 + 0x68));
    if (iVar1 != 0) {
      fn_82AB15D0(0,"Assertion failed: %s (%s:%u)","eRet == E_SSM_OK","e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\interface\\ssmdevice.cpp",0x225);
    }
    iVar1 = fn_82B6ADF8(*(unsigned int *)(param_1 + 100));
    if (iVar1 != 0) {
      fn_82AB15D0(0,"Assertion failed: %s (%s:%u)","eRet == E_SSM_OK","e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\interface\\ssmdevice.cpp",0x228);
    }
    iVar1 = fn_82AB9D20(*(unsigned int *)(param_1 + 0x60));
    if (iVar1 != 0) {
      fn_82AB15D0(0,"Assertion failed: %s (%s:%u)","eRet == E_SSM_OK","e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\interface\\ssmdevice.cpp",0x22b);
    }
    iVar1 = fn_82B77EE0(*(unsigned int *)(param_1 + 0x58));
    if (iVar1 != 0) {
      fn_82AB15D0(0,"Assertion failed: %s (%s:%u)","eRet == E_SSM_OK","e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\interface\\ssmdevice.cpp",0x22e);
    }
    iVar1 = fn_82AB94D0(*(unsigned int *)(param_1 + 0x54));
    if (iVar1 != 0) {
      fn_82AB15D0(0,"Assertion failed: %s (%s:%u)","eRet == E_SSM_OK","e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\interface\\ssmdevice.cpp",0x231);
    }
    iVar1 = fn_82B6D938(*(unsigned int *)(param_1 + 0x50));
    if (iVar1 != 0) {
      fn_82AB15D0(0,"Assertion failed: %s (%s:%u)","eRet == E_SSM_OK","e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\interface\\ssmdevice.cpp",0x234);
    }
    iVar1 = fn_82B6E1A0(*(unsigned int *)(param_1 + 200));
    if (iVar1 != 0) {
      fn_82AB15D0(0,"Assertion failed: %s (%s:%u)","eRet == E_SSM_OK","e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\interface\\ssmdevice.cpp",0x237);
    }
    fn_82B69998(*(unsigned int *)(param_1 + 0x5c));
    fn_82B6B298(*(unsigned int *)(param_1 + 0x70));
    fn_82B6B4E8(*(unsigned int *)(param_1 + 0x74));
    fn_82B6B728(*(unsigned int *)(param_1 + 0x78));
    iVar1 = (*(int (**)())(param_1 + 0x18))(*(unsigned int *)(param_1 + 0x10),param_1);
    if (iVar1 != 0) {
      fn_82AB15D0(0,"Assertion failed: %s (%s:%u)","eRet == E_SSM_OK","e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\interface\\ssmdevice.cpp",0x244);
    }
  }
  return iVar1;
}

