extern int fn_8224F2B8();
extern int fn_822B1F78();
extern int fn_8236DB30();


void fn_82382BD0(int param_1)

{
  unsigned __int64 uVar1;
  
  fn_8236DB30();
  uVar1 = (unsigned __int64)*(unsigned int *)(param_1 + 0x10);
  fn_822B1F78(param_1 + 0x1f0,param_1,uVar1 + 0x21c);
  fn_8224F2B8(param_1 + 0xf0,param_1,uVar1 + 0xe4);
  fn_8224F2B8(param_1 + 0x144,param_1,uVar1 + 0x14c);
  fn_8224F2B8(param_1 + 0x198,param_1,uVar1 + 0x1b4);
  return;
}

