extern int fn_82C53960();
extern int memset();


unsigned __int64 fn_82C56228(unsigned int *param_1,int param_2,int param_3)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  
  if ((unsigned int)(param_2 * param_3) < 0xfffffffb) {
    uVar1 = param_2 * param_3 + 3U & 0xfffffffc;
    RtlEnterCriticalSection(*param_1);
    if (uVar1 == 0xffffffff) {
      RtlLeaveCriticalSection(*param_1);
      uVar2 = 0;
    }
    else {
      uVar2 = fn_82C53960(uVar1,0);
      if ((uVar2 & 0xffffffff) != 0) {
                    /* WARNING: Subroutine does not return */
        memset(uVar2,0,uVar1);
      }
      RtlLeaveCriticalSection(*param_1);
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

