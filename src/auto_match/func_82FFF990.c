extern int fn_82FAB9C0();
extern unsigned int lbl_832642E0;


void fn_82FFF990(unsigned __int64 param_1)

{
  int *piVar1;
  
  piVar1 = (int *)fn_82FAB9C0((unsigned __int64)lbl_832642E0 + 4,param_1);
  if (piVar1 != (int *)0x0) {
    (*(int (**)())(*piVar1 + 0x8c))();
    (*(int (**)())(*piVar1 + 8))(piVar1);
    (*(int (**)())(*piVar1 + 8))(piVar1);
  }
  return;
}

