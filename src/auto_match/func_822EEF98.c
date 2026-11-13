__int64 fn_822EEF98(unsigned __int64 param_1,char param_2,char param_3,char param_4,char param_5)

{
  int iVar1;
  
  if (((int)param_3 <= (int)param_2) && ((int)param_2 <= param_3 + 9)) {
    return (__int64)param_2 - (__int64)param_3;
  }
  iVar1 = (int)param_2;
  if (((iVar1 < param_4) || (param_4 + 5 < iVar1)) &&
     ((iVar1 < param_5 || (param_4 = param_5, param_5 + 5 < iVar1)))) {
    return -1;
  }
  return ((__int64)param_2 - (__int64)param_4) + 10;
}

