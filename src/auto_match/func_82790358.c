__int64 fn_82790358(unsigned int *param_1,__int64 param_2,__int64 param_3,unsigned __int64 param_4,
                      int (**param_5)())

{
  int iVar1;
  __int64 lVar2;
  __int64 lVar3;
  
  lVar3 = param_3 - param_2;
  if (0 < param_3 - param_2) {
    do {
      lVar2 = (__int64)((int)lVar3 >> 1);
      iVar1 = (*param_5)((lVar2 + param_2) * 0xc + (unsigned __int64)*param_1,param_4);
      if (iVar1 != 0) {
        param_2 = lVar2 + param_2 + 1;
        lVar2 = (lVar3 - lVar2) + -1;
      }
      lVar3 = lVar2;
    } while (0 < (int)lVar2);
  }
  return param_2;
}

