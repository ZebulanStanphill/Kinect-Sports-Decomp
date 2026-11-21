unsigned __int64 fn_82E7E6E8(int param_1,unsigned __int64 param_2)

{
  unsigned __int64 uVar1;
  
  if ((unsigned __int64)*(unsigned int *)(param_1 + 0x10) == 0) {
    return 0xffffffff80004003;
  }
  uVar1 = fn_82E7BD90((unsigned __int64)*(unsigned int *)(param_1 + 0x10) + 0x10,*(unsigned short *)(param_1 + 0xc),
                      param_2);
  return uVar1;
}
