extern int fn_825200A8();
extern int fn_82522D98();


unsigned int fn_825CE4D0(int param_1,unsigned __int64 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x130);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    fn_82522D98(0xc);
  }
  do {
    iVar1 = fn_825200A8(iVar2,param_2);
    if (iVar1 != 0) {
      return *(unsigned int *)(iVar2 + 4);
    }
    iVar2 = *(int *)(iVar2 + 8);
  } while (iVar2 != 0);
                    /* WARNING: Subroutine does not return */
  fn_82522D98(0xc);
}

