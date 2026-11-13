extern int fn_82C10AD0();
extern int fn_82C10B28();
extern int memset();


unsigned __int64 fn_82C11FF8(unsigned __int64 param_1)

{
  unsigned __int64 uVar1;
  int aiStack_30 [4];
  
  aiStack_30[0] = 0;
  uVar1 = fn_82C10AD0(param_1,0x20,0x68,aiStack_30);
  if (-1 < (int)uVar1) {
                    /* WARNING: Subroutine does not return */
    memset(aiStack_30[0],0,0x68);
  }
  if (aiStack_30[0] != 0) {
    fn_82C10B28(param_1,0x20,aiStack_30);
  }
  return uVar1;
}

