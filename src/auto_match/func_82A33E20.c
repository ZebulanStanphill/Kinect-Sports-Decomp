extern unsigned int *auStack_90;
extern int fn_82A37680();
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_74;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;


unsigned int fn_82A33E20(__int64 param_1,unsigned int *param_2,unsigned int param_3)

{
  int iVar1;
  unsigned int auStack_90 [4];
  struct { unsigned int first; unsigned int second; } stack_pair_80;

  unsigned int uStack_78;
  unsigned int uStack_74;
  unsigned int uStack_70;
  unsigned int uStack_6c;
  unsigned int uStack_68;
  unsigned int *puStack_64;
  
  stack_pair_80.second = *param_2;
  uStack_74 = param_2[4];
  puStack_64 = auStack_90;
  uStack_6c = param_2[1];
  uStack_78 = param_2[5];
  stack_pair_80.first = 0;
  uStack_70 = 0;
  uStack_68 = param_3;
  RtlEnterCriticalSection(param_2 + 0xe);
  iVar1 = fn_82A37680(param_1 + 0xc4,&stack_pair_80.first);
  if (iVar1 == 0) {
    auStack_90[0] = 0xc0000017;
  }
  else {
    auStack_90[0] = NtWaitForSingleObjectEx(param_2[5],1,0,0);
  }
  RtlLeaveCriticalSection(param_2 + 0xe);
  return auStack_90[0];
}

