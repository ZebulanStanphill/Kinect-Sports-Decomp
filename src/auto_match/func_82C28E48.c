extern int fn_82C10AD0();
extern int fn_82C10B28();
extern int fn_82F691F0();


unsigned __int64 fn_82C28E48(void)

{
  unsigned __int64 uVar1;
  unsigned __int64 in_r6;
  int aiStack_40 [16];
  
  aiStack_40[0] = 0;
  uVar1 = fn_82C10AD0(in_r6,0x1e,0x90,aiStack_40);
  if (-1 < (int)uVar1) {
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(aiStack_40[0],0,0x90);
  }
  if (aiStack_40[0] != 0) {
    fn_82C10B28(in_r6,0x1e,aiStack_40);
  }
  return uVar1;
}

