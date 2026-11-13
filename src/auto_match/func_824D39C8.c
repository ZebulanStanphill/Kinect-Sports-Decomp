void fn_824D39C8(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0xc);
  if (piVar1 == (int *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x824d39e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(int (**)())(*piVar1 + 0x18))(piVar1,1);
  return;
}

