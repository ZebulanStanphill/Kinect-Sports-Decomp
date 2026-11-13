extern int fn_82A2A288();
extern int fn_82E44D20();
extern int fn_82E44DA0();


unsigned __int64 fn_82E66D68(unsigned int *param_1,unsigned __int64 param_2,char *param_3,char *param_4)

{
  char cVar1;
  int iVar2;
  char *pcVar4;
  __int64 lVar3;
  
  if (param_3 != (char *)0x0) {
    pcVar4 = param_3;
    if (param_4 == (char *)0xffffffff) {
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      param_4 = pcVar4 + (-1 - (int)param_3);
    }
    iVar2 = fn_82E44DA0(param_1,param_4 + param_1[1]);
    if (iVar2 < 0) {
      return -(unsigned __int64)((*param_1 & 0x8000000) != 0) & 0xffffffff8007000e;
    }
    lVar3 = 0;
    if ((0 < (int)param_4) &&
       (lVar3 = fn_82A2A288(param_2,0,param_3,param_4,
                                  ((unsigned __int64)param_1[1] & 0x7fffffff) * 2 + (unsigned __int64)param_1[3],
                                  param_4), lVar3 == 0)) {
      thunk_FUN_82a2b798();
      *param_1 = *param_1 | 0x8000000;
      return 0xffffffff8007000e;
    }
    fn_82E44D20(param_1,(unsigned __int64)param_1[1] + lVar3);
  }
  return 0;
}

