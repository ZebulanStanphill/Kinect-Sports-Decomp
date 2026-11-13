extern int fn_828E9DB8();


unsigned __int64 fn_828E9F18(unsigned int *param_1,unsigned __int64 param_2,__int64 param_3)

{
  unsigned __int64 uVar1;
  
  if ((unsigned __int64)param_1[3] <
      ((((unsigned __int64)*param_1 + param_3 + 7 & 0xffffffff) >> 3) + (unsigned __int64)param_1[1] & 0xffffffff)
     ) {
    uVar1 = 0;
  }
  else {
    if (0x20 < (int)param_3) {
      fn_828E9DB8(param_1,param_2 >> 0x20,param_3 + -0x20);
      param_3 = 0x20;
    }
    fn_828E9DB8(param_1,param_2 & 0xffffffff,param_3);
    uVar1 = 1;
  }
  return uVar1;
}

