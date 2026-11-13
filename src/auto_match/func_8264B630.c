extern unsigned int __imp__VdGlobalDevice;
extern unsigned int __imp__VdGlobalXamDevice;
extern int fn_8264D6C0();
extern int fn_8265C990();


void fn_8264B630(int param_1)

{
  unsigned int uVar1;
  int iVar3;
  unsigned int uVar4;
  unsigned int *puVar2;
  
  if (*(int *)(param_1 + 0x98) == 0) {
    iVar3 = KeGetCurrentProcessType();
    puVar2 = __imp__VdGlobalDevice;
    if (iVar3 == 2) {
      puVar2 = __imp__VdGlobalXamDevice;
    }
    uVar1 = *puVar2;
    RtlEnterCriticalSection((unsigned __int64)uVar1 + 0x3b50);
    (**(int (***)())(param_1 + 0xb0))(*(unsigned int *)(param_1 + 0xa4));
    RtlLeaveCriticalSection((unsigned __int64)uVar1 + 0x3b50);
  }
  else {
    if (*(int *)(param_1 + 0x9c) != 0) {
      uVar1 = *(unsigned int *)(param_1 + 0x98);
      uVar4 = (uVar1 + *(int *)(param_1 + 0x9c)) - 1;
      fn_8264D6C0(((unsigned __int64)(uVar1 >> 0x14) + 0x200 & 0x1000) + ((unsigned __int64)uVar1 & 0x1fffffff) +
                   -0x40000000,
                   ((unsigned __int64)(uVar4 >> 0x14) + 0x200 & 0x1000) + ((unsigned __int64)uVar4 & 0x1fffffff) +
                   -0x40000000,0,0x40000000,0x40000000);
    }
    if ((*(unsigned int *)(param_1 + 0x6c) & 0x10000) == 0) {
      fn_8265C990(*(unsigned int *)(param_1 + 0x98),0xffffffffb1800000);
    }
  }
  return;
}

