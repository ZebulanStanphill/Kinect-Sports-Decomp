extern unsigned int *__imp__KeDebugMonitorData;
extern unsigned int *__imp__XboxHardwareInfo;
extern unsigned int *auStack_20;
extern int fn_82F691F0();


__int64 fn_82A343B0(__int64 param_1)

{
  __int64 lVar1;
  unsigned int auStack_20 [2];
  
  auStack_20[0] = 0;
  if ((((((*__imp__KeDebugMonitorData != 0) && ((*__imp__XboxHardwareInfo & 0x10) != 0)) &&
        (lVar1 = XexGetModuleHandle(0xffffffff820893b8,auStack_20), -1 < lVar1)) &&
       ((lVar1 = XexGetProcedureAddress(auStack_20[0],0x9b,param_1 + 0x34), -1 < lVar1 &&
        (lVar1 = XexGetProcedureAddress(auStack_20[0],0x9c,param_1 + 0x38), -1 < lVar1)))) &&
      ((lVar1 = XexGetProcedureAddress(auStack_20[0],0x9d,param_1 + 0x3c), -1 < lVar1 &&
       ((lVar1 = XexGetProcedureAddress(auStack_20[0],0x9e,param_1 + 0x40), -1 < lVar1 &&
        (lVar1 = XexGetProcedureAddress(auStack_20[0],0x9f,param_1 + 0x44), -1 < lVar1)))))) &&
     (lVar1 = XexGetProcedureAddress(auStack_20[0],0xa0,param_1 + 0x48), -1 < lVar1)) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(param_1 + 0x34,0,0x18);
}

