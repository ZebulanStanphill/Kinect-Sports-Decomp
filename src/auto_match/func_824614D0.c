extern int fn_82529320();
extern int fn_825604A0();


void fn_824614D0(int param_1)

{
  int lVar1;
  unsigned int *piVar2;
  
  fn_825604A0(param_1 + 0x30);
  piVar2 = (int *)(param_1 + 0x1d8);
  lVar1 = 2;
  do {
    if (piVar2[-2] != 0) {
      fn_82529320(piVar2[-2],0);
      piVar2[-2] = 0;
    }
    if (*piVar2 != 0) {
      fn_82529320(*piVar2,0);
      *piVar2 = 0;
    }
    lVar1 = lVar1 + -1;
    piVar2 = piVar2 + 1;
  } while (lVar1 != 0);
  return;
}

