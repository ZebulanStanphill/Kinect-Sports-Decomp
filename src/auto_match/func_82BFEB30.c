extern int fn_82A2AF70();


unsigned int  fn_82BFEB30(unsigned __int64 param_1,unsigned int param_2)

{
  unsigned int uVar1;
  
  if (param_2 == 0) {
    return 0x102;
  }
  uVar1 = fn_82A2AF70();
  if (0 < (int)uVar1) {
    uVar1 = uVar1 & 0xffff | 0x80070000;
  }
  return uVar1;
}

