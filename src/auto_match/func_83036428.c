extern int fn_82FAB9C0();
extern int fn_8300BB00();
extern unsigned int lbl_832642E0;


int fn_83036428(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)fn_82FAB9C0(lbl_832642E0 + 4,*(unsigned int *)(param_1 + 0x10));
  if (piVar1 != (int *)0x0) {
    fn_8300BB00();
    (*(int (**)())(*piVar1 + 8))(piVar1);
  }
  return 1;
}

