extern int fn_827DC988();
extern int fn_82F622A8();


void fn_827DCA38(int *param_1,unsigned int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  unsigned __int64 uVar4;
  int iVar5;
  int *piStack00000014;
  
  piStack00000014 = param_1;
  if (0x3fffffff < param_2) {
                    /* WARNING: Subroutine does not return */
    fn_82F622A8(0xffffffff82196fd4);
  }
  if ((unsigned int)(param_1[2] - *param_1 >> 2) < param_2) {
    uVar4 = (**(int (***)())(*(int *)param_1[3] + 0xc))((int *)param_1[3],param_2 * 4,param_1 + 4);
    iVar5 = (int)uVar4;
    fn_827DC988(*param_1,param_1[1],uVar4,param_1 + 3,0,0);
    iVar1 = *param_1;
    iVar2 = param_1[1];
    if (iVar1 != 0) {
      piVar3 = (int *)param_1[3];
      (**(int (***)())(*piVar3 + 0x18))(piVar3,iVar1,param_1 + 4);
    }
    *param_1 = iVar5;
    param_1[2] = param_2 * 4 + iVar5;
    param_1[1] = (iVar2 - iVar1 >> 2) * 4 + iVar5;
  }
  return;
}

