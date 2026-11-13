extern unsigned int __imp__VdGlobalDevice;
extern unsigned int __imp__VdGlobalXamDevice;


void fn_8264EF50(unsigned int param_1)

{
  int *piVar1;
  int iVar2;
  int in_r13;
  
  iVar2 = KeGetCurrentProcessType();
  piVar1 = __imp__VdGlobalDevice;
  if (iVar2 == 2) {
    piVar1 = __imp__VdGlobalXamDevice;
  }
  iVar2 = (unsigned int)*(unsigned char *)(in_r13 + 0x10c) * 0x6c + *piVar1;
  *(unsigned int *)(((*(unsigned int *)(iVar2 + 0x2c94) & 3) + 0x17) * 4 + iVar2 + 0x2c40) = param_1;
  *(int *)(iVar2 + 0x2c94) = *(int *)(iVar2 + 0x2c94) + 1;
  KeSetEvent(iVar2 + 0x2c7c,1,0);
  return;
}

