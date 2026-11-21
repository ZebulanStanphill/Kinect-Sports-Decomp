__int64 fn_82AF65F8(int *param_1,int *param_2)

{
  __int64 lVar1;
  
  lVar1 = ((unsigned __int64)(*(unsigned int *)(*param_1 + 8) >> 7) & 0x7f) -
          ((unsigned __int64)(*(unsigned int *)(*param_2 + 8) >> 7) & 0x7f);
  if (lVar1 == 0) {
    lVar1 = (unsigned __int64)(unsigned int)param_1[5] - (unsigned __int64)(unsigned int)param_2[5];
    if (lVar1 == 0) {
      if ((unsigned __int64)(unsigned int)param_1[6] - (unsigned __int64)(unsigned int)param_2[6] != 0) {
        return (unsigned __int64)(unsigned int)param_1[6] - (unsigned __int64)(unsigned int)param_2[6];
      }
      lVar1 = fn_82AF62F8();
      return lVar1;
    }
  }
  return lVar1;
}
