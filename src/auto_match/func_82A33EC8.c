extern unsigned int *auStack_90;
extern int fn_82A37680();
extern int fn_82A37E70();
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_74;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;


unsigned __int64 fn_82A33EC8(__int64 param_1,unsigned int *param_2,__int64 *param_3)

{
  unsigned __int64 uVar1;
  __int64 lVar2;
  int iVar3;
  unsigned int auStack_90 [4];
  struct { unsigned int first; unsigned int second; } stack_pair_80;

  unsigned int uStack_78;
  unsigned int uStack_74;
  unsigned int uStack_70;
  unsigned int uStack_6c;
  __int64 *plStack_68;
  unsigned int *puStack_64;
  
  auStack_90[0] = 0;
  if ((param_2[6] & 0x80000000) == 0) {
    uVar1 = 0xffffffffc0000022;
  }
  else {
    lVar2 = fn_82A37E70(param_1 + 0x8c,param_2[4],param_2[1]);
    *param_3 = lVar2;
    if (lVar2 == -1) {
      *(unsigned int *)param_3 = 0xffffffff;
      uStack_6c = param_2[1];
      puStack_64 = auStack_90;
      stack_pair_80.second = *param_2;
      uStack_74 = param_2[4];
      uStack_78 = param_2[5];
      stack_pair_80.first = 1;
      uStack_70 = 0xffffffff;
      plStack_68 = param_3;
      RtlEnterCriticalSection(param_2 + 0xe);
      iVar3 = fn_82A37680(param_1 + 0xc4,&stack_pair_80.first);
      if (iVar3 == 0) {
        auStack_90[0] = 0xc0000017;
      }
      else {
        auStack_90[0] = NtWaitForSingleObjectEx(param_2[5],1,0,0);
      }
      RtlLeaveCriticalSection(param_2 + 0xe);
    }
    uVar1 = (unsigned __int64)auStack_90[0];
  }
  return uVar1;
}

