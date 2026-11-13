extern int fn_82E57C38();


unsigned __int64 fn_82E58488(unsigned __int64 param_1,unsigned int param_2)

{
  unsigned __int64 uVar1;
  
  if ((param_2 & 0xffffffff) == 0) {
    uVar1 = 0xffffffff80070057;
  }
  else {
    fn_82E57C38(param_2,1);
    uVar1 = 0;
  }
  return uVar1;
}

