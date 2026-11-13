extern unsigned int *auStack_40;
extern int fn_82A1EFC0();


void fn_82BD5740(__int64 param_1)

{
  unsigned char auStack_40 [64];
  
  RtlEnterCriticalSection(param_1 + 0xf0);
                    /* WARNING: Subroutine does not return */
  fn_82A1EFC0(auStack_40,0,8);
}

