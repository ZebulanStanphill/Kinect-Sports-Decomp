extern int fn_82C10AD0();
extern int fn_82C10B28();
extern int memset();


unsigned __int64 fn_82C10DA0(unsigned __int64 param_1)

{
  unsigned __int64 uVar1;
  unsigned int *in_r7;
  int aiStack_40;
  
  *in_r7 = 0;
  aiStack_40 = 0;
  uVar1 = fn_82C10AD0(param_1,2,0x210,&aiStack_40);
  if (-1 < (int)uVar1) {
                    /* WARNING: Subroutine does not return */
    memset(aiStack_40,0,0x210);
  }
  if (aiStack_40 != 0) {
    fn_82C10B28(param_1,2,&aiStack_40);
  }
  return uVar1;
}

