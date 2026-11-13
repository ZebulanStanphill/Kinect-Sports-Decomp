extern unsigned int *auStack_30;
extern int fn_82E50CB8();
extern int fn_82E50F10();
extern int fn_82E56A88();


unsigned __int64 fn_82E56E00(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  __int64 lVar1;
  unsigned __int64 uVar2;
  unsigned char auStack_30 [1];
  
  fn_82E50CB8(param_1 + 8);
  if (*(unsigned int *)(param_1 + 0xac) < 0x7f) {
    lVar1 = fn_82E56A88(param_1 + 0x44,(param_3 & 0xffff) << 0xf | param_2 & 0xffff,auStack_30);
    uVar2 = -(unsigned __int64)(lVar1 == 0) & 0xffffffff8007000e;
  }
  else {
    uVar2 = 0xffffffffc00d36b2;
  }
  fn_82E50F10(param_1 + 8);
  return uVar2;
}

