extern int fn_8224F2B8();
extern int fn_822B1F78();
extern int fn_8236DB30();


void fn_82404358(int param_1)

{
  unsigned __int64 uVar1;
  
  fn_8236DB30();
  uVar1 = (unsigned __int64)*(unsigned int *)(param_1 + 0x10);
  fn_822B1F78(param_1 + 0xf0,param_1,uVar1 + 0xe4);
  fn_8224F2B8(param_1 + 0x238,param_1,uVar1 + 0x274);
  fn_8224F2B8(param_1 + 0x2e0,param_1,uVar1 + 0x2dc);
  fn_8224F2B8(param_1 + 0x334,param_1,uVar1 + 0x334);
  fn_8224F2B8(param_1 + 0x28c,param_1,uVar1 + 0x20c);
  return;
}

