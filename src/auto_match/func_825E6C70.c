extern int fn_82522838();
extern int fn_82522BC8();
extern int fn_82522D98();
extern unsigned int lbl_832767CC;


void fn_825E6C70(int *param_1)

{
  int iVar1;
  int iVar2;
  unsigned __int64 uVar3;
  __int64 lVar4;
  
  if (param_1[1] == param_1[2]) {
    iVar2 = *param_1;
    iVar1 = param_1[1] - iVar2 >> 2;
    uVar3 = (unsigned __int64)(unsigned int)param_1[3] + (__int64)iVar1;
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      fn_82522D98((uVar3 & 0x3fffffff) << 2);
    }
    if (lbl_832767CC == 0) {
      fn_82522838();
    }
    lVar4 = (uVar3 & 0x3fffffff) << 2;
    iVar2 = fn_82522BC8(lbl_832767CC,iVar2,lVar4);
    *param_1 = iVar2;
    param_1[1] = iVar1 * 4 + iVar2;
    param_1[2] = (int)lVar4 + iVar2;
  }
  param_1[1] = param_1[1] + 4;
  param_1[4] = param_1[4] + 1;
  return;
}

