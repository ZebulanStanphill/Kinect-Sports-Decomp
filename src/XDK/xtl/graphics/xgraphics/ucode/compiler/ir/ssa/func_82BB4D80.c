extern int fn_82AB15D0();
extern int fn_82BA0318();
extern int fn_82BA1048();
extern int fn_82BB3B08();
extern int fn_82BB4080();
extern int fn_82BC54A8();
extern int fn_82BC5D48();
extern int fn_82BCFB50();


void fn_82BB4D80(unsigned __int64 param_1)

{
  unsigned char cVar1;
  
  fn_82BC5D48();
  fn_82BC54A8(param_1);
  fn_82BB3B08(param_1);
  fn_82BB4080(param_1);
  fn_82BA0318(param_1);
  fn_82BCFB50(param_1);
  cVar1 = fn_82BA1048(param_1);
  if (cVar1 == '\0') {
    fn_82AB15D0(0,"Assertion failed: %s (%s:%u)","Validate()","e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\compiler\\ir\\ssa.cpp",0x594);
  }
  return;
}

