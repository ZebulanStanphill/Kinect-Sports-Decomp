extern __int64 fn_82E4A2D8();
extern int fn_82E50CB8();
extern int fn_82E50F10();


unsigned __int64 fn_82E4A728(__int64 param_1,unsigned int param_2,unsigned int param_3)

{
  unsigned __int64 uVar1;
  
  fn_82E50CB8(param_1 + 0x58);
  if (((param_2 & 0xffffffff) == 0) || ((param_3 & 0xffffffff) == 0)) {
    uVar1 = 0xffffffff80070057;
  }
  else {
    uVar1 = fn_82E4A2D8(param_1,param_3,param_2);
  }
  fn_82E50F10(param_1 + 0x58);
  return uVar1;
}

