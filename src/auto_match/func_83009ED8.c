extern unsigned int lbl_832642E0;
extern unsigned int lbl_832645A8;


void fn_83009ED8(void)

{
  unsigned __int64 uVar1;
  
  uVar1 = (unsigned __int64)lbl_832642E0;
  RtlEnterCriticalSection(uVar1 + 4);
  lbl_832645A8 = 0;
  RtlLeaveCriticalSection(uVar1 + 4);
  return;
}

