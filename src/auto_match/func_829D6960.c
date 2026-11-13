#define true 1
extern int fn_8314212C();
extern unsigned int lbl_832179FC;


void fn_829D6960(void)

{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  int iVar4;
  unsigned __int64 uVar5;
  int *piVar6;
  int aiStack_60 [24];
  
  iVar4 = lbl_832179FC + 0x24980;
  RtlEnterCriticalSection(iVar4);
  iVar1 = lbl_832179FC;
  uVar5 = 0;
  piVar6 = (int *)(lbl_832179FC + 0xc);
  do {
    aiStack_60[0] = 0xfe;
    iVar2 = fn_8314212C(uVar5,aiStack_60);
    if (iVar2 < 0) {
      if (*piVar6 != 0xfe) {
        *piVar6 = 0xfe;
        piVar6[-1] = 0;
        *(unsigned char *)(iVar1 + 0x24975) = 1;
        if (piVar6[-3] == 2) {
          uVar3 = 0;
          iVar2 = iVar1 + 0xc0;
          do {
            if ((unsigned __int64)*(unsigned int *)(iVar2 + 0x140) == (uVar5 & 0xffffffff)) {
              *(unsigned int *)(iVar2 + 0x140) = 0xffffffff;
              break;
            }
            uVar3 = uVar3 + 1;
            iVar2 = iVar2 + 0x150;
          } while (uVar3 < 6);
        }
        piVar6[-3] = 0;
      }
    }
    else if (*piVar6 != aiStack_60[0]) {
      *piVar6 = aiStack_60[0];
      *(unsigned char *)(iVar1 + 0x24975) = 1;
      if (piVar6[-3] == 0) {
        piVar6[-3] = 1;
        piVar6[-1] = 0;
      }
    }
    uVar5 = uVar5 + 1;
    piVar6 = piVar6 + 6;
    if (7 < (uVar5 & 0xffffffff)) {
      if (*(char *)(iVar1 + 0x24975) != '\0') {
        KeSetEvent(*(unsigned int *)(lbl_832179FC + 0x8f4c4),0,0);
      }
      RtlLeaveCriticalSection(iVar4);
      return;
    }
  } while( true );
}

