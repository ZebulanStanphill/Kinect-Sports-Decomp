extern int fn_82A29A38();
extern int fn_8306C690();


unsigned __int64 fn_82EE93F8(int param_1,int *param_2)

{
  unsigned __int64 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x4c) == 0) {
    RtlEnterCriticalSection(param_1 + 0x50);
    (**(int (***)())(*param_2 + 4))(param_2);
    iVar2 = fn_8306C690(*(unsigned int *)(param_1 + 0x70),0,0,param_2 + 1);
    if (iVar2 == 0) {
      uVar1 = thunk_FUN_82a2b798();
      (**(int (***)())(*param_2 + 8))(param_2);
      if (0 < (int)uVar1) {
        uVar1 = uVar1 & 0xffff | 0x80070000;
      }
    }
    else {
      uVar1 = 0;
    }
    RtlLeaveCriticalSection(param_1 + 0x50);
  }
  else {
    fn_82A29A38();
    uVar1 = 0xffffffffc00d3e85;
  }
  return uVar1;
}

