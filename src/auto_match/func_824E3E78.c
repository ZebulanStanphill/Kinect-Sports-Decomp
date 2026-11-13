extern int fn_824E3740();


void fn_824E3E78(void)

{
  int *piVar1;
  
  piVar1 = (int *)fn_824E3740();
  if (*piVar1 != 0) {
    piVar1[1] = 1;
  }
  *piVar1 = 0;
  return;
}

