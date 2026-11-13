extern int fn_82FAB9C0();
extern int fn_83021C40();
extern unsigned int lbl_832642E0;


void fn_83021980(__int64 param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)fn_82FAB9C0((unsigned __int64)lbl_832642E0 + 0x998);
  if (piVar1 != (int *)0x0) {
    iVar2 = fn_83021C40(param_1 + 0x10,piVar1);
    if (iVar2 == 1) {
      (*(int (**)())(*piVar1 + 8))(piVar1);
    }
    (*(int (**)())(*piVar1 + 8))(piVar1);
  }
  return;
}

