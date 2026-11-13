extern int fn_82595950();
extern unsigned int lbl_8329615C;
extern unsigned int *lbl_8329618C;
extern unsigned int lbl_83296190;
extern int (*lbl_832961A8)();


void fn_8251D7E0(void)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = &lbl_8329615C;
  lbl_83296190 = lbl_8329618C;
  piVar1 = lbl_8329618C;
  do {
    if (*piVar2 != 0) {
      lbl_8329618C = piVar2 + -1;
      if ((piVar1 == piVar2 + -1) || (piVar2[2] != 0)) {
        fn_82595950(*piVar2);
        piVar1 = lbl_83296190;
      }
    }
    lbl_8329618C = piVar1;
    piVar2 = piVar2 + -0xc;
    piVar1 = lbl_8329618C;
  } while (-0x7cd69f35 < (int)piVar2);
  if (lbl_832961A8 != (int (**)())0x0) {
    (*lbl_832961A8)(lbl_8329618C[1]);
  }
  return;
}

