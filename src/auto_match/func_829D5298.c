extern int fn_829D47B0();
extern int fn_829E18D0();
extern int fn_82A28E60();
extern int memset();
extern unsigned int *lbl_832179FC;


void fn_829D5298(void)

{
  unsigned __int64 uVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  __int64 lVar5;
  int *piVar6;
  int *piVar7;
  int aiStack_50;
  
  if ((lbl_832179FC[0x23d35] & 1U) != 0) {
    piVar4 = lbl_832179FC + 0x9260;
    RtlEnterCriticalSection(piVar4);
    pcVar3 = (char *)((int)lbl_832179FC + 0x24975);
    if (*pcVar3 == '\0') {
      RtlLeaveCriticalSection(piVar4);
    }
    else {
      piVar7 = lbl_832179FC + 0x926c;
      lVar5 = 8;
      piVar6 = lbl_832179FC;
      do {
        if ((*piVar6 == 2) || (iVar2 = 0, *piVar6 == 1)) {
          iVar2 = 1;
        }
        piVar7[0x3530] = iVar2;
        if (piVar6[2] == 0) {
                    /* WARNING: Subroutine does not return */
          memset(piVar7,0,0xd4c0);
        }
        lVar5 = lVar5 + -1;
        piVar7 = piVar7 + 0x3534;
        piVar6 = piVar6 + 6;
      } while (lVar5 != 0);
      *pcVar3 = '\0';
      RtlLeaveCriticalSection(piVar4);
      uVar1 = XamNuiIdentityGetSessionId();
      *(unsigned __int64 *)(lbl_832179FC + 0x926a) = uVar1;
      iVar2 = XamGetCurrentTitleId();
      lbl_832179FC[0x9268] = iVar2;
      fn_829D47B0(&aiStack_50,0xaf000);
      if (aiStack_50 != 0) {
        fn_829E18D0(lbl_832179FC + 0x9268,aiStack_50,0xaf000);
        fn_82A28E60(lbl_832179FC[0x23d33],0,aiStack_50);
      }
    }
  }
  return;
}

