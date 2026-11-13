extern unsigned int *auStack_30;
extern int fn_82A2B760();
extern int NtCreateIoCompletion();
extern unsigned int iStack_38;
extern unsigned int uStack_34;


int fn_8306C5D0(unsigned __int64 param_1,int param_2,unsigned int param_3)

{
  int iVar1;
  int aiStack_40;
  struct { int first; unsigned int second; } stack_pair_38;

  unsigned char auStack_30 [16];
  
  aiStack_40 = param_2;
  if ((param_2 == 0) && (iVar1 = NtCreateIoCompletion(&aiStack_40,0x1f0003,0), iVar1 < 0)) {
    fn_82A2B760();
  }
  else {
    if ((int)param_1 == -1) {
      if (param_2 == 0) {
        return aiStack_40;
      }
      aiStack_40 = 0;
      fn_82A2B760(0xffffffffc000000d);
      return aiStack_40;
    }
    stack_pair_38.first = aiStack_40;
    stack_pair_38.second = param_3;
    iVar1 = NtSetInformationFile(param_1,auStack_30,&stack_pair_38.first,8,0x1e);
    if (-1 < iVar1) {
      return aiStack_40;
    }
    fn_82A2B760();
    if (param_2 == 0) {
      NtClose(aiStack_40);
    }
  }
  return 0;
}

