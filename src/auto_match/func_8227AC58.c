extern unsigned int fStack_24;
extern unsigned int fStack_28;
extern int fn_8226B7E0();
extern int fn_8226C7C0();
extern unsigned int uStack_30;


void fn_8227AC58(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  int iVar1;
  int iVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uStack_30;
  struct { float first; float second; } stack_pair_28;

  __int64 lStack_20;

  uVar3 = fn_8226C7C0(*(unsigned int *)(param_1 + 0xf0),param_2,&uStack_30,0);
  uVar3 = fn_8226C7C0(uVar3,param_3,&stack_pair_28.first,0);
  iVar1 = (int)(((unsigned __int64)(uStack_30) >> 32) & 0xFFFFFFFF);
  iVar2 = (int)(((unsigned __int64)(uStack_30) >> 0) & 0xFFFFFFFF);
  lStack_20 = (__int64)(int)stack_pair_28.first;
  uStack_30 = (__int64)iVar1;
  fn_8226B7E0(uVar3,iVar2,(unsigned __int64)(unsigned int)(int)stack_pair_28.first - 1,iVar1,
                    (unsigned __int64)(unsigned int)(int)stack_pair_28.second - 1,0x18);
  return;
}
