extern int fn_82F68CC0();


unsigned __int64 fn_82F41C68(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned int *param_4)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  
  uVar2 = 0;
  if (param_4 == (unsigned int *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *param_4;
  }
  if ((param_3 & 0xffffffff) != 0) {
    if ((unsigned __int64)uVar1 < (param_2 & 0xffffffff)) {
      uVar2 = 0xffffffffc00d36b1;
    }
    else {
      fn_82F68CC0(param_3,param_1,param_2);
    }
  }
  if (param_4 != (unsigned int *)0x0) {
    *param_4 = (unsigned int)param_2;
  }
  return uVar2;
}

