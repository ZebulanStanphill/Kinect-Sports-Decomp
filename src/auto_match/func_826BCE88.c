__int64 fn_826BCE88(__int64 param_1,__int64 param_2,__int64 param_3,unsigned short *param_4,
                      int (**param_5)())

{
  char cVar1;
  __int64 lVar2;
  __int64 lVar3;
  
  lVar3 = param_3 - param_2;
  if (0 < param_3 - param_2) {
    do {
      lVar2 = (__int64)((int)lVar3 >> 1);
      cVar1 = (*param_5)((lVar2 + param_2 & 0x3fffffffU) * 4 + param_1,*param_4);
      if (cVar1 != '\0') {
        param_2 = lVar2 + param_2 + 1;
        lVar2 = (lVar3 - lVar2) + -1;
      }
      lVar3 = lVar2;
    } while (0 < (int)lVar2);
  }
  return param_2;
}

