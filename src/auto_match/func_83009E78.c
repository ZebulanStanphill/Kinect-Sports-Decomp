extern unsigned int lbl_832642E0;
extern unsigned int *lbl_832645A8;


int * fn_83009E78(void)

{
  int *piVar1;
  unsigned __int64 uVar2;
  
  uVar2 = (unsigned __int64)lbl_832642E0;
  RtlEnterCriticalSection(uVar2 + 4);
  if (lbl_832645A8 != (int *)0x0) {
    (*(int (**)())(*lbl_832645A8 + 4))(lbl_832645A8);
  }
  piVar1 = lbl_832645A8;
  RtlLeaveCriticalSection(uVar2 + 4);
  return piVar1;
}

