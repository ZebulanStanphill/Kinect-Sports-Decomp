extern int fn_82CE5410();
extern int fn_82DB6D88();


void fn_82DA9818(int param_1,int *param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  if (*(int *)(param_1 + 200) != 0) {
    iVar1 = *(int *)(*(int *)(*param_2 + 0xcc) + 0x4c);
    piVar3 = (int *)fn_82CE5410();
    iVar2 = *piVar3;
    *piVar3 = (iVar1 + 0x7fU & 0xffffff80) + iVar2;
                    /* WARNING: Subroutine does not return */
    thunk_FUN_82f691f0(iVar2,0,iVar1);
  }
  fn_82DB6D88(param_1,param_2,param_3,param_4,param_1 + 0x3c);
  return;
}

