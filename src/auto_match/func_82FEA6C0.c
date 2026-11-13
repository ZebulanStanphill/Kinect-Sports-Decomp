extern int fn_82FAB9C0();
extern unsigned int lbl_832642E0;


int * fn_82FEA6C0(unsigned __int64 param_1)

{
  int *piVar1;
  
  piVar1 = (int *)fn_82FAB9C0((unsigned __int64)lbl_832642E0 + 0x1304,param_1);
  if (piVar1 == (int *)0x0) {
    return (int *)0x0;
  }
  RtlEnterCriticalSection(piVar1 + 7);
  (*(int (**)())(*piVar1 + 8))(piVar1);
  return piVar1 + 4;
}

