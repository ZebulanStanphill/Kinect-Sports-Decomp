extern unsigned int *auStack_20;
extern int fn_825200A8();
extern int fn_82522D98();
extern int fn_82837D98();


unsigned int fn_825CE590(int param_1,unsigned __int64 param_2)

{
  int iVar1;
  int iVar2;
  unsigned int auStack_20 [2];
  
  iVar2 = *(int *)(param_1 + 0x134);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    fn_82522D98(0xc);
  }
  do {
    iVar1 = fn_825200A8(iVar2,param_2);
    if (iVar1 != 0) {
      fn_82837D98(*(unsigned int *)(*(int *)(iVar2 + 4) + 0x14),0,auStack_20);
      return auStack_20[0];
    }
    iVar2 = *(int *)(iVar2 + 8);
  } while (iVar2 != 0);
                    /* WARNING: Subroutine does not return */
  fn_82522D98(0xc);
}

