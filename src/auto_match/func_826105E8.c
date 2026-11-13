extern int fn_82522D98();


void fn_826105E8(int param_1,unsigned __int64 param_2,int param_3,unsigned __int64 param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  
  if (param_5 != 0) {
    return;
  }
  if (param_3 == 0) {
    return;
  }
  piVar1 = *(int **)(*(int *)(**(int **)(param_1 + 0x60) + 0x93c) + 0x10);
  if (piVar1 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *piVar1;
  }
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    fn_82522D98(0x84);
  }
  *(unsigned int *)(iVar2 + 0x78) = *(unsigned int *)(param_3 + 0x10);
  return;
}

