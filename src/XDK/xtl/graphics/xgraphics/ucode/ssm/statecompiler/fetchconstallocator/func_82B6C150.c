extern int fn_82AB15D0();


int fn_82B6C150(int param_1,int param_2,unsigned int param_3,unsigned int *param_4,unsigned int *param_5)

{
  unsigned int i;
  unsigned int n;
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  unsigned int uVar4;
  unsigned int *puVar5;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    uVar4 = *(unsigned int *)(param_1 + 0x4a4);
    uVar2 = 0;
  }
  else {
    if (*(int *)(param_1 + 0x10) != 1) {
      fn_82AB15D0(0,"Assertion failed: %s (%s:%u)","pFCA->eMode == E_FA_DECREMENTAL","e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\statecompiler\\fetchconstallocator.cpp",0x29a);
    }
    uVar4 = 0x20;
    uVar2 = 0x20 - *(int *)(param_1 + 0x4a4);
  }
  i = uVar2;
  if (uVar2 < uVar4) {
    puVar5 = (unsigned int *)(uVar2 * 0x24 + param_1 + 0x20);
    do {
      if (puVar5[-2] != 1) {
        fn_82AB15D0(0,"Assertion failed: %s (%s:%u)","pFetchBlock->bIsUsed == SSM_TRUE","e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\statecompiler\\fetchconstallocator.cpp",0x2a2);
      }
      if ((int)puVar5[-1] == 1) {
        uVar1 = 0;
        n = *puVar5;
        if (n != 0) {
          puVar3 = puVar5 + 4;
          do {
            if (((int)puVar3[-3] == param_2) && (*puVar3 == param_3)) {
              *param_4 = i;
              *param_5 = uVar1;
              return 1;
            }
            uVar1 = uVar1 + 1;
            puVar3 = puVar3 + 1;
          } while (uVar1 < n);
        }
      }
      i = i + 1;
      puVar5 = puVar5 + 9;
    } while (i < uVar4);
  }
  return 0;
}

