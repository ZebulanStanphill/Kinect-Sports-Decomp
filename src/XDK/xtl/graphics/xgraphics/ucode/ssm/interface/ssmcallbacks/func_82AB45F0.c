extern unsigned int *auStack_20;
extern int fn_823AAD80();
extern int fn_82AB15D0();
extern int fn_82AB95F8();


unsigned int  fn_82AB45F0(unsigned int param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  unsigned char auStack_20 [16];
  
  if ((param_1 & 0xffffffff) == 0) {
    fn_82AB15D0(param_1,"Assertion failed: %s (%s:%u)","hSSMDevice","e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\interface\\ssmcallbacks.cpp",0x187);
    uVar1 = 0;
  }
  else {
    uVar1 = fn_823AAD80();
    uVar1 = fn_82AB95F8(uVar1,param_2,auStack_20);
  }
  return uVar1;
}

