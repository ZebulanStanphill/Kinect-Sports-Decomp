void fn_8303CC78(int *param_1,int param_2)

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
                    /* WARNING: Could not recover jumptable at 0x8303ccb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(int (**)())(*param_1 + 0x40))(param_1, param_2);
  return;
}

