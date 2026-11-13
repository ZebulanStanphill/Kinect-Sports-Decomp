extern int fn_82AB15D0();
extern int fn_82AB7AB0();


void fn_82B7F8E0(unsigned __int64 param_1,int param_2,int param_3,unsigned __int64 param_4,unsigned __int64 param_5)

{
  unsigned int uVar1;
  
  if (param_2 == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d9f38,0xffffffff820dbba0,0x482);
  }
  if (param_3 == 0) {
    uVar1 = *(unsigned int *)(param_2 + 0x34);
  }
  else {
    if (param_3 != 1) {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d6c64,0xffffffff820dbba0,0x48c);
    }
    uVar1 = *(unsigned int *)(param_2 + 0x30);
  }
  fn_82AB7AB0(param_1,uVar1,param_4,param_5);
  return;
}

