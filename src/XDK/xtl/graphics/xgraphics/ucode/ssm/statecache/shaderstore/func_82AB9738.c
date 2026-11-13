extern int fn_82AB15D0();
extern int fn_82AB9468();


unsigned int fn_82AB9738(unsigned int param_1,unsigned int param_2)

{
  unsigned int iVar1;
  unsigned int uVar2;
  
  if ((param_1 & 0xffffffff) == 0) {
    fn_82AB15D0(param_1,"Assertion failed: %s (%s:%u)","pShaderStore","e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\statecache\\shaderstore.cpp",0x296);
  }
  iVar1 = fn_82AB9468(param_1,param_2);
  if (iVar1 != 0) {
    uVar2 = *(unsigned int *)(iVar1 + 4);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

