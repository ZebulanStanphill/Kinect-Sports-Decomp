extern __int64 fn_82BD6F78();
extern unsigned int lbl_820E8684;


unsigned __int64
fn_82BD4AE8(int param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4,unsigned __int64 param_5)

{
  unsigned int iVar1;
  unsigned __int64 uVar2;
  
  RtlEnterCriticalSection(param_1 + 0xf0);
  iVar1 = *(int *)((param_2 + 0x14) * 4 + param_1);
  if (iVar1 == 0) {
    uVar2 = 0xffffffff80070057;
  }
  else {
    uVar2 = fn_82BD6F78(iVar1,lbl_820E8684,param_3,param_4,param_5);
  }
  RtlLeaveCriticalSection(param_1 + 0xf0);
  return uVar2;
}

