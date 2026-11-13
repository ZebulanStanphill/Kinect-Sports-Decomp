void fn_8303CCB8(int *param_1,int param_2)

{
  unsigned int *piVar1;
  
  piVar1 = (int *)param_1[7];
  if (piVar1 != (int *)param_1[8]) {
    do {
      if (*piVar1 == *(int *)(param_2 + 0xc)) {
        return;
      }
      piVar1 = piVar1 + 1;
    } while (piVar1 != (int *)param_1[8]);
  }
                    /* WARNING: Could not recover jumptable at 0x8303ccf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(int (**)())(*param_1 + 0x3c))(param_1, param_2);
  return;
}

