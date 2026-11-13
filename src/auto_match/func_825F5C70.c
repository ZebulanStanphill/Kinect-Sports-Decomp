extern int fn_82522D98();
extern int fn_82F6A548();
extern int fn_82F6A594();


void fn_825F5C70(void)

{
  int iVar1;
  
  iVar1 = fn_82F6A548();
  if (*(int *)(iVar1 + 0x20) < 100) {
                    /* WARNING: Subroutine does not return */
    fn_82522D98(0x90);
  }
  fn_82F6A594();
  return;
}

