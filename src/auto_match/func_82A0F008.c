extern int fn_8265C990();
extern int fn_82A0F220();


unsigned __int64 fn_82A0F008(int param_1)

{
  unsigned __int64 uVar1;
  
  uVar1 = (unsigned __int64)*(unsigned int *)(param_1 + 0x7c) - 1;
  *(int *)(param_1 + 0x7c) = (int)uVar1;
  if ((uVar1 & 0xffffffff) == 0) {
    fn_82A0F220();
    fn_8265C990(*(unsigned int *)(param_1 + -4),0x249c0000);
  }
  return uVar1;
}

