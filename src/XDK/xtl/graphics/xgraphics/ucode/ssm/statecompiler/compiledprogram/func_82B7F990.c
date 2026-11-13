extern int fn_82AB15D0();
extern int fn_82AB7B80();


void fn_82B7F990(int param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  unsigned int uVar1;
  
  if (param_1 == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d9f38,0xffffffff820dbba0,0x504);
  }
  if (param_2 == 0) {
    uVar1 = *(unsigned int *)(param_1 + 0x34);
  }
  else {
    if (param_2 != 1) {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d6c64,0xffffffff820dbba0,0x50d);
    }
    uVar1 = *(unsigned int *)(param_1 + 0x30);
  }
  fn_82AB7B80(uVar1,param_3,param_4);
  return;
}

