extern unsigned int *auStack_40;
extern int fn_82C10AD0();
extern int fn_82F691F0();


void fn_82C24370(void)

{
  int iVar1;
  unsigned __int64 in_r6;
  unsigned int auStack_40 [16];
  
  auStack_40[0] = 0;
  iVar1 = fn_82C10AD0(in_r6,0xb,0xf0,auStack_40);
  if (-1 < iVar1) {
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(auStack_40[0],0,0xf0);
  }
  return;
}

