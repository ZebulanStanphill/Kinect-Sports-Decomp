extern int fn_826920F0();
extern unsigned int lbl_831E7E60;


void fn_82692150(int param_1,int param_2)

{
  int iVar1;
  unsigned __int64 uVar2;
  
  uVar2 = (unsigned __int64)lbl_831E7E60;
  RtlEnterCriticalSection(uVar2 + 0x2c4);
  iVar1 = *(int *)(param_1 + 0x21c);
  if (((iVar1 != 0) && (iVar1 != param_2)) && (*(int *)(iVar1 + 0x10) == 0)) {
    fn_826920F0(param_1);
  }
  *(unsigned int *)(param_1 + 0x21c) = 0;
  if ((unsigned __int64)*(unsigned int *)(param_1 + 0x20c) -
      (unsigned __int64)(unsigned int)(*(int *)(param_1 + 0x1a8) << (*(unsigned int *)(param_1 + 0x14) & 0x3f)) ==
      (unsigned __int64)*(unsigned int *)(param_1 + 0x210)) {
    if (((unsigned __int64)*(unsigned int *)(param_1 + 0x200) + (unsigned __int64)*(unsigned int *)(param_2 + 0x18) & 0xffffffff)
        <= (unsigned __int64)*(unsigned int *)(param_1 + 0x20c)) {
      fn_826920F0(param_1,param_2);
    }
  }
  else {
    *(int *)(param_1 + 0x21c) = param_2;
  }
  RtlLeaveCriticalSection(uVar2 + 0x2c4);
  return;
}

