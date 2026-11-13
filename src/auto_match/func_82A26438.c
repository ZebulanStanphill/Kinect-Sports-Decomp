unsigned __int64 fn_82A26438(unsigned __int64 param_1,unsigned __int64 param_2,int *param_3,unsigned __int64 param_4)

{
  unsigned __int64 uVar1;
  
  if ((((param_3 == (int *)0x0) || (*param_3 == 0)) || ((param_4 & 0x90) == 0x90)) ||
     (((param_3[1] & 0xffffff00U) != 0 && ((param_4 & 0xf) != 3)))) {
    uVar1 = 0x57;
  }
  else {
    uVar1 = XamContentCreateEx();
  }
  return uVar1;
}

