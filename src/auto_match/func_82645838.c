extern unsigned int __imp__VdGlobalDevice;
extern unsigned int __imp__VdGlobalXamDevice;
extern int fn_826452A8();


void fn_82645838(int param_1)

{
  unsigned int *puVar1;
  int iVar2;
  
  iVar2 = KeGetCurrentProcessType();
  puVar1 = __imp__VdGlobalDevice;
  if (iVar2 == 2) {
    puVar1 = __imp__VdGlobalXamDevice;
  }
  if (*(int *)(param_1 + 8) != 0) {
    fn_826452A8(*puVar1,*(int *)(param_1 + 8),5,0);
  }
  return;
}

