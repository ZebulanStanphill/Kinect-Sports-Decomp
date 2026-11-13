extern int fn_823F2E20();


__int64 fn_825175A8(unsigned __int64 param_1,unsigned __int64 param_2,__int64 param_3)

{
  __int64 lVar1;
  
  if ((param_1 & 0xffffffff) != (param_2 & 0xffffffff)) {
    lVar1 = param_1 - param_3;
    do {
      fn_823F2E20(param_3,param_1);
      fn_823F2E20(param_3 + 8,lVar1 + param_3 + 8);
      param_1 = param_1 + 0x10;
      param_3 = param_3 + 0x10;
    } while ((param_1 & 0xffffffff) != (param_2 & 0xffffffff));
  }
  return param_3;
}

