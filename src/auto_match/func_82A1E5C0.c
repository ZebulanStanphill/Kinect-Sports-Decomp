extern unsigned int *__imp__KeDebugMonitorData;
extern int (*lbl_8329EB4C)();


unsigned __int64 UnhandledExceptionFilter(unsigned __int64 param_1)

{
  int iVar1;
  
  if (*__imp__KeDebugMonitorData == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (**(int (***)())(*__imp__KeDebugMonitorData + 0x18))(10,0);
  }
  if (((iVar1 == 0) && (lbl_8329EB4C != (int (**)())0x0)) &&
     (iVar1 = (*lbl_8329EB4C)(param_1), iVar1 == -1)) {
    return 0xffffffffffffffff;
  }
  return 0;
}

