extern int fn_825231B8();
extern int fn_82A1EFC0();
extern unsigned int lbl_83265A38;


void fn_8225B538(unsigned __int64 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = fn_825231B8((&lbl_83265A38)[param_2 * 2] + 7 & 0xfffffff8);
                    /* WARNING: Subroutine does not return */
  fn_82A1EFC0(*(unsigned int *)(iVar1 + 8),0,*(unsigned int *)(iVar1 + 4));
}

