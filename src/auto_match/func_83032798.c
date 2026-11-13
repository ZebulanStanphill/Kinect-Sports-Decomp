extern unsigned int lbl_832642E0;
extern unsigned int lbl_83264EC4;


int * fn_83032798(void)

{
  int *piVar1;
  unsigned __int64 uVar2;
  
  uVar2 = (unsigned __int64)lbl_832642E0;
  RtlEnterCriticalSection(uVar2 + 4);
  piVar1 = lbl_83264EC4;
  lbl_83264EC4 = (int *)0x0;
  if (piVar1 != (int *)0x0) {
    (*(int (**)())(*piVar1 + 4))(piVar1);
  }
  RtlLeaveCriticalSection(uVar2 + 4);
  return piVar1;
}

