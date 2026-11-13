extern int fn_82C53960();
extern int memset();


unsigned __int64 fn_82C44D10(unsigned int *param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned int param_4)

{
  unsigned __int64 uVar1;
  __int64 lVar2;
  __int64 lVar3;
  int *piVar4;
  
  param_1[3] = param_4;
  lVar3 = 0;
  if ((param_3 & 0xffffffff) != 0) {
    lVar2 = ((param_3 - 1 & 0xffffffff) >> 7) + 1;
    do {
      dataCacheBlockFlush(lVar3 + param_2);
      lVar3 = lVar3 + 0x80;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
    if ((param_3 & 0xffffffff) != 0) {
      dataCacheBlockFlush((param_3 - 1) + param_2);
    }
  }
  param_1[1] = (int)param_2;
  *param_1 = (int)param_2;
  param_1[2] = (int)param_3;
  if ((param_2 & 0xffffffff) == 0) {
    param_1[4] = 0;
  }
  else {
    piVar4 = param_1 + 4;
    if (piVar4 != (int *)0x0) {
      uVar1 = fn_82C53960(0x1c,0);
      if ((uVar1 & 0xffffffff) != 0) {
                    /* WARNING: Subroutine does not return */
        memset(uVar1,0,0x1c);
      }
      *piVar4 = (int)uVar1;
      if ((uVar1 & 0xffffffff) != 0) {
        RtlInitializeCriticalSection(uVar1);
      }
    }
    if (*piVar4 == 0) {
      return 0xfffffffffffffff7;
    }
  }
  return 0;
}

