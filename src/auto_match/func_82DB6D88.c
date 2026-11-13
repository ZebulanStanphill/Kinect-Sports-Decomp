extern int fn_82CE5410();


void fn_82DB6D88(unsigned __int64 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = *(int *)(*(int *)(*param_2 + 0xcc) + 0x4c);
  piVar3 = (int *)fn_82CE5410();
  iVar2 = *piVar3;
  *piVar3 = (iVar1 + 0x7fU & 0xffffff80) + iVar2;
                    /* WARNING: Subroutine does not return */
  thunk_FUN_82f691f0(iVar2,0,iVar1);
}

