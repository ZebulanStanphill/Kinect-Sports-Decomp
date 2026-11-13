extern unsigned int *__imp__KeDebugMonitorData;
extern unsigned int __imp__VdGlobalDevice;
extern unsigned int __imp__VdGlobalXamDevice;
extern int fn_82A1E968();
extern unsigned int uStack_20;
extern unsigned int uStack_24;
extern unsigned int uStack_28;


void fn_82650FE0(unsigned int param_1)

{
  int *piVar1;
  int iVar2;
  __int64 lStack_30;
  struct { unsigned int first; unsigned int second; } stack_pair_28;

  unsigned int uStack_20;
  
  iVar2 = KeGetCurrentProcessType();
  piVar1 = __imp__VdGlobalDevice;
  if (iVar2 == 2) {
    piVar1 = __imp__VdGlobalXamDevice;
  }
  iVar2 = *piVar1;
  stack_pair_28.first = param_1;
  fn_82A1E968(&lStack_30);
  stack_pair_28.second = (unsigned int)(lStack_30 >> 10);
  uStack_20 = *(unsigned int *)(iVar2 + 0x5584);
  if (*__imp__KeDebugMonitorData != 0) {
    (**(int (***)())(*__imp__KeDebugMonitorData + 0x18))(0x5d,&stack_pair_28.first);
  }
  return;
}

