extern int fn_82522838();
extern int fn_82522BC8();
extern int fn_82522D98();
extern unsigned int lbl_832767CC;


void fn_8251E450(unsigned int *param_1,int param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  __int64 lVar3;
  unsigned __int64 uVar4;
  
  uVar4 = (unsigned __int64)*param_1;
  uVar1 = param_1[1];
  lVar3 = (__int64)(int)(unsigned int)*(unsigned short *)(param_1 + 3) * (__int64)param_2 + (uVar1 - uVar4);
  if (uVar4 != 0) {
    if (lbl_832767CC == 0) {
      fn_82522838();
    }
    uVar2 = fn_82522BC8(lbl_832767CC,uVar4,lVar3);
    *param_1 = uVar2;
    param_1[1] = uVar2 + (int)(uVar1 - uVar4);
    param_1[2] = uVar2 + (int)lVar3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  fn_82522D98(lVar3);
}

