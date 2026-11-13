extern unsigned int *auStack_60;
extern int fn_82C10AD0();
extern int fn_82F691F0();


void fn_82C3D4E0(void)

{
  int iVar1;
  unsigned __int64 in_r8;
  unsigned int auStack_60 [24];
  
  auStack_60[0] = 0;
  iVar1 = fn_82C10AD0(in_r8,0x19,0x1090,auStack_60);
  if (-1 < iVar1) {
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(auStack_60[0],0,0x1090);
  }
  return;
}

