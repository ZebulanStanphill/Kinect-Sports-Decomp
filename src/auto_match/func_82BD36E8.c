extern int fn_82BD4A10();
extern int fn_82BD6C80();
extern unsigned int lbl_83223F40;


void fn_82BD36E8(void)

{
  int iVar1;
  __int64 lVar2;
  unsigned int uVar3;
  int iVar4;
  
  lVar2 = 0;
  uVar3 = 0x50;
  iVar4 = -0x7cd60ff0;
  do {
    RtlEnterCriticalSection(lbl_83223F40 + 0xf0);
    iVar1 = *(int *)(uVar3 + lbl_83223F40);
    if (iVar1 == 0) {
      iVar1 = lbl_83223F40 + 0xf0;
      *(unsigned int *)(iVar4 + -0x10) = 0;
      RtlLeaveCriticalSection(iVar1);
    }
    else {
      *(unsigned int *)(iVar4 + -0x10) = 1;
      fn_82BD6C80(iVar1,iVar4 + -8,iVar4,iVar4 + -0xc);
      RtlLeaveCriticalSection(lbl_83223F40 + 0xf0);
      fn_82BD4A10(lbl_83223F40,lVar2);
    }
    uVar3 = uVar3 + 4;
    lVar2 = lVar2 + 1;
    iVar4 = iVar4 + 0x18;
  } while (uVar3 < 0x60);
  return;
}

