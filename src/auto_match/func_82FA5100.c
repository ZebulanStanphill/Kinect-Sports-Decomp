extern int fn_82FA6408();
extern int fn_82FA6550();
extern unsigned int lbl_83264210;


unsigned __int64 fn_82FA5100(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned __int64 uVar1;
  int iVar2;
  int iVar3;
  
  if ((param_2 & 0xffffffff) == 0) {
    uVar1 = 0;
  }
  else {
    iVar3 = param_1 * 0x50 + lbl_83264210;
    RtlEnterCriticalSection(iVar3 + 0x24);
    uVar1 = fn_82FA6550(*(unsigned int *)(iVar3 + 0x40),param_3,param_2);
    if ((uVar1 & 0xffffffff) != 0) {
      iVar2 = fn_82FA6408();
      *(int *)(iVar3 + 0x48) = *(int *)(iVar3 + 0x48) + iVar2 + 8;
    }
    RtlLeaveCriticalSection(iVar3 + 0x24);
  }
  return uVar1;
}

