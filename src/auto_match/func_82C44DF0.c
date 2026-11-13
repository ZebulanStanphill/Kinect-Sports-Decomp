extern int fn_82C53970();


void fn_82C44DF0(int param_1)

{
  unsigned int *piVar1;
  
  piVar1 = (int *)(param_1 + 0x10);
  if (*(unsigned int *)(param_1 + 0x10) != 0) {
    if ((piVar1 != (int *)0x0) && (*piVar1 != 0)) {
      fn_82C53970(*piVar1);
      *piVar1 = 0;
    }
    *piVar1 = 0;
  }
  return;
}

