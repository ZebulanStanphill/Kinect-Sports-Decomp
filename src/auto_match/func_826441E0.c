extern unsigned int __imp__VdGlobalDevice;
extern unsigned int __imp__VdGlobalXamDevice;
extern unsigned int *auStack_30;
extern int fn_82643CE0();
extern int fn_82643E10();
extern int fn_826452A8();


unsigned __int64 fn_826441E0(int param_1,int param_2)

{
  unsigned int uVar1;
  unsigned __int64 uVar3;
  int iVar4;
  int iVar5;
  unsigned int auStack_30 [12];
  unsigned int *puVar2;
  
  if ((*(unsigned char *)(param_1 + 0x2abd) & 0x20) != 0) {
    fn_82643CE0();
    return 0;
  }
  if (param_2 == 0) {
    auStack_30[0] = 0;
  }
  else {
    auStack_30[0] = (param_2 + 0x10) * 4;
  }
  iVar5 = *(int *)(param_1 + 0x35a0);
  if (((iVar5 != 0) && (*(int *)(iVar5 + 0xac) != 0)) &&
     (auStack_30[0] <= *(unsigned int *)(param_1 + 0x3b14))) {
    auStack_30[0] = *(unsigned int *)(param_1 + 0x3b14);
  }
  if (iVar5 == 0) {
    uVar3 = fn_82643E10(param_1,2,auStack_30,0x20);
LAB_82644304:
    if ((uVar3 & 0xffffffff) != 0) {
      iVar5 = (int)uVar3 + -4;
      *(int *)(param_1 + 0x3b24) = (int)uVar3;
      *(int *)(param_1 + 0x30) = iVar5;
      *(unsigned int *)(param_1 + 0x3b18) = 0;
      *(unsigned int *)(param_1 + 0x3b28) = 0;
      iVar5 = ((auStack_30[0] >> 2) - 0x10) * 4 + iVar5;
      *(int *)(param_1 + 0x34) = iVar5;
      *(int *)(param_1 + 0x38) = iVar5 + -0xa0;
      goto LAB_8264434c;
    }
  }
  else {
    if (*(int *)(iVar5 + 0x98) == 0) {
      iVar4 = KeGetCurrentProcessType();
      puVar2 = __imp__VdGlobalDevice;
      if (iVar4 == 2) {
        puVar2 = __imp__VdGlobalXamDevice;
      }
      uVar1 = *puVar2;
      RtlEnterCriticalSection((unsigned __int64)uVar1 + 0x3b50);
      uVar3 = (**(int (***)())(iVar5 + 0xac))(*(unsigned int *)(iVar5 + 0xa4),2,auStack_30,0x20);
      RtlLeaveCriticalSection((unsigned __int64)uVar1 + 0x3b50);
      goto LAB_82644304;
    }
    if (*(int *)(param_1 + 0x38) == 0) {
      *(unsigned int *)(param_1 + 0x3b24) = *(unsigned int *)(iVar5 + 0x98);
      auStack_30[0] = *(unsigned int *)(iVar5 + 0x9c);
      uVar3 = (unsigned __int64)*(unsigned int *)(iVar5 + 0x98);
      goto LAB_82644304;
    }
    uVar3 = 0;
  }
  fn_82643CE0(param_1);
LAB_8264434c:
  if (((*(unsigned int *)(param_1 + 0x5e88) & 1) == 0) && (*(int *)(param_1 + 0x3b30) != 0)) {
    fn_826452A8(param_1,*(int *)(param_1 + 0x3b30),3,0);
    *(unsigned int *)(param_1 + 0x3b30) = 0;
  }
  return uVar3;
}

