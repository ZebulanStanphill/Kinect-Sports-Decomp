extern int fn_8265C990();


void fn_8306D168(int param_1)

{
  int lVar1;
  unsigned int *piVar2;
  
  piVar2 = (int *)(param_1 + 0x5990);
  lVar1 = 2;
  do {
    if (*piVar2 != 0) {
      fn_8265C990(*piVar2,0x20980000);
      piVar2[-2] = 0;
      piVar2[-1] = 0;
      *piVar2 = 0;
    }
    lVar1 = lVar1 + -1;
    piVar2 = piVar2 + 0x1665;
  } while (lVar1 != 0);
  return;
}

