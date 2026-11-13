extern int fn_82231540();
extern int fn_826741F0();
extern int fn_82F622A8();


void fn_827D8E60(int *param_1,unsigned int param_2)

{
  int iVar1;
  int iVar2;
  unsigned __int64 uVar3;
  int iVar4;
  int *piVar5;
  int *piStack00000014;
  
  piStack00000014 = param_1;
  if (0x1fffffff < param_2) {
                    /* WARNING: Subroutine does not return */
    fn_82F622A8(0xffffffff82196fd4);
  }
  if ((unsigned int)(param_1[2] - *param_1 >> 3) < param_2) {
    piVar5 = param_1 + 3;
    uVar3 = (**(int (***)())(*(int *)param_1[3] + 0xc))((int *)param_1[3],param_2 * 8,param_1 + 4);
    iVar4 = (int)uVar3;
    fn_826741F0(*param_1,param_1[1],uVar3,piVar5,0);
    iVar1 = *param_1;
    iVar2 = param_1[1];
    if (iVar1 != 0) {
      fn_82231540(iVar1,iVar2,piVar5);
      (**(int (***)())(*(int *)*piVar5 + 0x18))((int *)*piVar5,*param_1,param_1 + 4);
    }
    *param_1 = iVar4;
    param_1[2] = param_2 * 8 + iVar4;
    param_1[1] = (iVar2 - iVar1 >> 3) * 8 + iVar4;
  }
  return;
}

