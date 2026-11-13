extern int fn_82522838();
extern int fn_82522BC8();
extern int fn_82522D98();
extern unsigned int lbl_832767CC;


void fn_825E7B28(int *param_1)

{
  int iVar1;
  unsigned int *puVar2;
  int iVar3;
  __int64 lVar4;
  
  if (param_1[1] == param_1[2]) {
    iVar3 = *param_1;
    iVar1 = (param_1[1] - iVar3) / 0x34;
    lVar4 = (unsigned __int64)(unsigned int)param_1[3] + (__int64)iVar1;
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      fn_82522D98(lVar4 * 0x34);
    }
    if (lbl_832767CC == 0) {
      fn_82522838();
    }
    lVar4 = lVar4 * 0x34;
    iVar3 = fn_82522BC8(lbl_832767CC,iVar3,lVar4);
    *param_1 = iVar3;
    param_1[1] = iVar1 * 0x34 + iVar3;
    param_1[2] = (int)lVar4 + iVar3;
  }
  puVar2 = (unsigned int *)param_1[1];
  param_1[1] = (int)(puVar2 + 0xd);
  param_1[4] = param_1[4] + 1;
  if (puVar2 != (unsigned int *)0x0) {
    *puVar2 = 0;
  }
  return;
}

