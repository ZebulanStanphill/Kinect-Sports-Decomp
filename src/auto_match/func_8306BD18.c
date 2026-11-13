extern int fn_8306BC58();


__int64 fn_8306BD18(__int64 param_1,int param_2,unsigned __int64 param_3)

{
  int iVar1;
  __int64 lVar2;
  
  if (((int)param_1 <= param_2) &&
     (lVar2 = ((__int64)param_2 - (__int64)(int)param_1) + 1, lVar2 != 1)) {
    iVar1 = fn_8306BC58(param_3);
    param_1 = (iVar1 - (int)((__int64)iVar1 / lVar2) * (int)lVar2) + param_1;
  }
  return param_1;
}

