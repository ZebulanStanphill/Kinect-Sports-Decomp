extern unsigned int lbl_832642E0;
extern unsigned int *lbl_83264EC4;


int * fn_83032738(void)

{
  int *piVar1;
  unsigned __int64 uVar2;
  
  uVar2 = (unsigned __int64)lbl_832642E0;
  RtlEnterCriticalSection(uVar2 + 4);
  if (lbl_83264EC4 != (int *)0x0) {
    (*(int (**)())(*lbl_83264EC4 + 4))(lbl_83264EC4);
  }
  piVar1 = lbl_83264EC4;
  RtlLeaveCriticalSection(uVar2 + 4);
  return piVar1;
}

