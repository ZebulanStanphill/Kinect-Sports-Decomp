extern unsigned int __imp__VdGlobalDevice;
extern unsigned int __imp__VdGlobalXamDevice;
extern int fn_82645110();


unsigned __int64 fn_826457A8(unsigned __int64 param_1)

{
  int *piVar1;
  int iVar2;
  
  if ((param_1 & 0xffffffff) != 0) {
    iVar2 = KeGetCurrentProcessType();
    piVar1 = __imp__VdGlobalDevice;
    if (iVar2 == 2) {
      piVar1 = __imp__VdGlobalXamDevice;
    }
    iVar2 = *piVar1;
    if ((param_1 & 0xffffffff) == (unsigned __int64)*(unsigned int *)(iVar2 + 0x2a9c)) {
      fn_82645110(iVar2);
    }
    param_1 = -(unsigned __int64)
               (*(unsigned int *)(iVar2 + 0x2a9c) - param_1 <
               (unsigned __int64)*(unsigned int *)(iVar2 + 0x2a9c) - (unsigned __int64)**(unsigned int **)(iVar2 + 0x2a90)) & 1;
  }
  return param_1;
}

