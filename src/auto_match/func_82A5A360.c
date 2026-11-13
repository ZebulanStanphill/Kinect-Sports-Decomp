extern int fn_82A5A300();
extern int fn_82A5D210();
extern unsigned int iStack00000014;


unsigned __int64 fn_82A5A360(int param_1)

{
  int iVar1;
  int iStack00000014;
  
  iStack00000014 = param_1;
  RtlInitializeCriticalSection(param_1 + 0x24);
  iVar1 = fn_82A5D210(0,0);
  *(int *)(param_1 + 0x20) = iVar1;
  if ((iVar1 != 0) && (iVar1 != -1)) {
    iVar1 = fn_82A5D210(0,0);
    *(int *)(param_1 + 0x1c) = iVar1;
    if ((iVar1 != 0) && (iVar1 != -1)) {
      iVar1 = fn_82A5D210(1,0);
      *(int *)(param_1 + 0x18) = iVar1;
      if ((iVar1 != 0) && (iVar1 != -1)) {
        iVar1 = fn_82A5D210(0,0);
        *(int *)(param_1 + 0x14) = iVar1;
        if ((iVar1 != 0) && (iVar1 != -1)) {
          *(unsigned int *)(param_1 + 4) = 1;
          return 0;
        }
      }
    }
  }
  if ((*(int *)(param_1 + 0x18) != 0) && (*(int *)(param_1 + 0x18) != -1)) {
    fn_82A5A300();
    *(unsigned int *)(param_1 + 0x18) = 0;
  }
  if ((*(int *)(param_1 + 0x1c) != 0) && (*(int *)(param_1 + 0x1c) != -1)) {
    fn_82A5A300();
    *(unsigned int *)(param_1 + 0x1c) = 0;
  }
  if ((*(int *)(param_1 + 0x20) != 0) && (*(int *)(param_1 + 0x20) != -1)) {
    fn_82A5A300();
    *(unsigned int *)(param_1 + 0x20) = 0;
  }
  return 0xffffffff8007000e;
}

