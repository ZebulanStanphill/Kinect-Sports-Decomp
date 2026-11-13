typedef unsigned char bool;
#define true 1
#define false 0


unsigned __int64 fn_82B16720(unsigned __int64 param_1)

{
  bool bVar1;
  
  if (((param_1 & 0x7fffffffffffffff) == 0) || (bVar1 = false, (param_1 & 0x7ff0000000000000) != 0))
  {
    bVar1 = true;
  }
  if (bVar1) {
    return param_1;
  }
  return param_1 & 0x8000000000000000;
}

