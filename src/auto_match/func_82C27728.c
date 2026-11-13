extern int fn_82C10AD0();
extern int fn_82C10B28();
extern int memset();


unsigned __int64 fn_82C27728(void)

{
  unsigned __int64 uVar1;
  unsigned __int64 in_r6;
  int aiStack_40;
  
  aiStack_40 = 0;
  uVar1 = fn_82C10AD0(in_r6,0x1d,0x98,&aiStack_40);
  if (-1 < (int)uVar1) {
                    /* WARNING: Subroutine does not return */
    memset(aiStack_40,0,0x98);
  }
  if (aiStack_40 != 0) {
    fn_82C10B28(in_r6,0x1d,&aiStack_40);
  }
  return uVar1;
}

