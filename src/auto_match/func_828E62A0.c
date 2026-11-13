void fn_828E62A0(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0xc);
  if (piVar1 == (int *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x828e62bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(int (**)())(*piVar1 + 4))(piVar1,1);
  return;
}

