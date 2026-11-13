extern int fn_82539560();
extern unsigned int ltcg_pool_0_0f;


double fn_822CF9D8(int param_1,unsigned __int64 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1a8);
  if (*(int *)((int)((param_2 + 0x17 & 0xffffffff) << 2) + iVar1) != 0) {
                    /* WARNING: Subroutine does not return */
    fn_82539560((double)*(float *)(param_1 + 0x1d8),(double)ltcg_pool_0_0f,
                 (double)*(float *)(iVar1 + 0x10));
  }
  return (double)*(float *)((int)((param_2 & 0xffffffff) << 2) + iVar1);
}

