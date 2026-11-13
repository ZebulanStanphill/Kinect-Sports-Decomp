extern unsigned int *auStack_5c;
extern unsigned int *auStack_74;
extern unsigned int *auStack_8c;
extern unsigned int *auStack_b0;
extern int fn_82AB15D0();
extern int fn_82BA1048();
extern int fn_82BB9AE8();
extern int fn_82BBFDF0();


void fn_82BB9DD0(unsigned __int64 param_1)

{
  unsigned char cVar1;
  struct { unsigned char b0[4]; unsigned char gap[32]; unsigned char a[24],b[24],c[76]; } stack;
  
  fn_82BBFDF0(stack.a);
  fn_82BBFDF0(stack.b);
  fn_82BBFDF0(stack.c);
  fn_82BB9AE8(stack.b0,param_1);
  cVar1 = fn_82BA1048(param_1);
  if (cVar1 == '\0') {
    fn_82AB15D0(0,"Assertion failed: %s (%s:%u)","this->Validate()","e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\compiler\\opt\\sched.cpp",0x1eb);
  }
  return;
}

