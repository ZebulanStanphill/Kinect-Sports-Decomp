void fn_82266DB0(int self)

{
  int *piVar1;
  
  piVar1 = *(int **)(self + 0xc);
  if (piVar1 == (int *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x82266dcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(int (**)())(*piVar1 + 8))(piVar1,1);
  return;
}

