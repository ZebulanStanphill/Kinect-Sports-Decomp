extern unsigned int *__imp_KeDebugMonitorData;
extern int XapiInitHeap();


void XapiInitProcess(void)

{
  int iVar1;
  
  iVar1 = XapiInitHeap();
  if (iVar1 == 0) {
    if (*__imp_KeDebugMonitorData != 0) {
      (*(int (**)())(*__imp_KeDebugMonitorData + 0x18))(2,0);
    }
    HalReturnToFirmware(1);
  }
  return;
}

