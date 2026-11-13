extern int fn_8251E4D0();
extern int fn_8257F228();


void fn_8257F028(unsigned __int64 param_1,int *param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5,unsigned __int64 param_6,int param_7)

{
  int iVar1;
  
  if (param_7 != 0) {
    if ((*(int *)(*param_2 + 0x3e4) != 0) &&
       (iVar1 = *(int *)(*(int *)(*param_2 + 0x3e4) + 0x8c0), iVar1 != 0)) {
      fn_8257F228(param_2,iVar1,param_3,param_5,param_5,param_6,0);
    }
    iVar1 = *(int *)(*(int *)(*param_2 + 0x7e4) + 4);
    if (iVar1 != 0) {
      fn_8257F228(param_1,param_2,iVar1,param_3);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  fn_8251E4D0(param_2 + 6);
}

