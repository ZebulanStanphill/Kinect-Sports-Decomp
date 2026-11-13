unsigned __int64 fn_82EED830(unsigned __int64 param_1,unsigned __int64 param_2,int param_3)

{
  if ((param_3 != 0) &&
     ((((param_2 = param_2 & 0xf00, param_2 == 0x100 || (param_2 == 0x200)) || (param_2 == 0x400))
      || (param_2 == 0x800)))) {
    return 1;
  }
  return 0xffffffff8000ffff;
}

