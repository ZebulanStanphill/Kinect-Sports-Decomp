extern int fn_82F68B6C();


unsigned __int64 fn_8271C2F0(unsigned __int64 param_1,unsigned __int64 param_2,unsigned int param_3)

{
  unsigned __int64 uVar1;
  
  if ((param_1 & 0xffffffff) == (unsigned __int64)param_3) {
    return 1;
  }
  uVar1 = fn_82F68B6C(param_1 + 0x40);
  return uVar1;
}

