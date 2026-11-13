void fn_82514860(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0xc);
  if (piVar1 == (int *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x8251487c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(int (**)())(*piVar1 + 4))(piVar1,1);
  return;
}

