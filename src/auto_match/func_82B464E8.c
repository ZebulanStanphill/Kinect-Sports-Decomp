__int64 fn_82B464E8(unsigned int *param_1,unsigned int *param_2)

{
  __int64 lVar1;
  
  lVar1 = ((unsigned __int64)(*(unsigned int *)*param_1 >> 4) & 0x3fff) -
          ((unsigned __int64)(*(unsigned int *)*param_2 >> 4) & 0x3fff);
  if (lVar1 != 0) {
    return lVar1;
  }
  return ((unsigned __int64)*(unsigned int *)*param_1 & 0xf) - ((unsigned __int64)*(unsigned int *)*param_2 & 0xf);
}

