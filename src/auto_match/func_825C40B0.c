extern int fn_82522D98();
extern int fn_825C44A8();


unsigned __int64 fn_825C40B0(int param_1,int param_2)

{
  unsigned int uVar1;
  
  if (*(int *)((*(int *)(param_2 + 8) + 3) * 4 + param_1) == 0) {
    if ((unsigned __int64)*(unsigned int *)(param_1 + 0x18) == 0) {
      return 0;
    }
    uVar1 = fn_825C44A8((unsigned __int64)*(unsigned int *)(param_1 + 0x18) + 0xb90,
                            *(unsigned int *)(param_1 + 4),*(int *)(param_2 + 8),
                            *(unsigned int *)(param_2 + 0xc));
    *(unsigned int *)((*(int *)(param_2 + 8) + 3) * 4 + param_1) = uVar1;
  }
                    /* WARNING: Subroutine does not return */
  fn_82522D98(8);
}

