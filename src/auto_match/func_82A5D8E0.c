extern int fn_82A3FF60();
extern int fn_82A49FB8();
extern int fn_82A5D210();
extern int iRam8321a308;
extern unsigned int uRam8329f804;


unsigned __int64 fn_82A5D8E0(int param_1)

{
  unsigned short uVar1;
  int iVar2;
  int *piVar3;
  unsigned int uVar4;
  
  uRam8329f804 = 0;
  iVar2 = fn_82A49FB8(0,3,6,48000,0x20,0x20,0x3f,0x80);
  *(int *)(param_1 + 0x14) = iVar2;
  if (iVar2 != 0) {
    uVar1 = *(unsigned short *)(iVar2 + 0xc);
    *(unsigned int *)(param_1 + 0x1c) = (unsigned int)uVar1 << 8;
    iVar2 = fn_82A3FF60(0xffffffff83219d50,(unsigned __int64)uVar1 << 8,0x20970006,0);
    *(int *)(param_1 + 0x18) = iVar2;
    if (iVar2 != 0) {
      iVar2 = fn_82A5D210(0,0);
      *(int *)(param_1 + 0x28) = iVar2;
      if ((iVar2 != 0) && (iVar2 != -1)) {
        iVar2 = fn_82A5D210(0,0);
        *(int *)(param_1 + 0x2c) = iVar2;
        if ((iVar2 != 0) && (iVar2 != -1)) {
          iVar2 = fn_82A5D210(1,0);
          *(int *)(param_1 + 0x30) = iVar2;
          if ((iVar2 != 0) && (iVar2 != -1)) {
            KeEnterCriticalRegion();
            RtlEnterCriticalSection(0xffffffff8315f6f0);
            if (iRam8321a308 == 0) {
              ExRegisterTitleTerminateNotification(0xffffffff8315f6e0,1);
            }
            iRam8321a308 = iRam8321a308 + 1;
            piVar3 = (int *)0x8321a2e8;
            uVar4 = 0;
            do {
              if (*piVar3 == 0) {
                *(int *)(uVar4 * 4 + -0x7cde5d18) = param_1;
                break;
              }
              uVar4 = uVar4 + 1;
              piVar3 = piVar3 + 1;
            } while (uVar4 < 8);
            *(unsigned int *)(param_1 + 0x4c) = 1;
            RtlLeaveCriticalSection(0xffffffff8315f6f0);
            KeLeaveCriticalRegion();
            return 0;
          }
        }
      }
    }
  }
  return 0xffffffff8007000e;
}

