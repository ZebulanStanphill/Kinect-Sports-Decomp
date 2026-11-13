extern int fn_82A35C88();


int fn_82A2A288(int param_1,unsigned __int64 param_2,char *param_3,int param_4,unsigned __int64 param_5,
                 unsigned __int64 param_6)

{
  char cVar1;
  int iVar3;
  unsigned __int64 uVar2;
  char *pcVar4;
  
  if (param_1 == 0xfde9) {
    param_4 = fn_82A35C88(param_3,param_4,param_5,param_6);
  }
  else {
    pcVar4 = param_3;
    if (param_4 == -1) {
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      param_4 = (int)pcVar4 - (int)param_3;
    }
    if ((int)param_6 != 0) {
      if ((param_4 < 0) || ((int)param_6 < param_4)) {
        uVar2 = 0x7a;
      }
      else {
        iVar3 = RtlMultiByteToUnicodeN(param_5,(param_6 & 0x7fffffff) << 1,0,param_3,param_4);
        if (-1 < iVar3) {
          return param_4;
        }
        uVar2 = RtlNtStatusToDosError();
      }
      thunk_FUN_82a2b748(uVar2);
      param_4 = 0;
    }
  }
  return param_4;
}

