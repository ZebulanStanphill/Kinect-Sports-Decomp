extern unsigned int *auStack_18;
extern unsigned int iStack_1c;
extern unsigned int uStack_20;


unsigned __int64 fn_82A1F950(unsigned int *param_1,unsigned __int64 param_2,int param_3)

{
  int iVar1;
  struct { unsigned int first; int second; } stack_pair_20;

  unsigned char auStack_18 [8];
  
  stack_pair_20.second = param_3 << 0xc;
  stack_pair_20.first = 0;
  iVar1 = NtWriteFile(*param_1,0,0,0,auStack_18,param_2,0x1000,&stack_pair_20.first);
  if (iVar1 == 0x103) {
    NtWaitForSingleObjectEx(*param_1,1,0,0);
  }
  return 0;
}

