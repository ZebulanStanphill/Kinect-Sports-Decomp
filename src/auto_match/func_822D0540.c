void fn_822D0540(int *param_1)

{
  if (*(int *)(param_1[5] + 0x24) != 0) {
                    /* WARNING: Could not recover jumptable at 0x822d055c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(int (**)())(*param_1 + 0x34))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x822d0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(int (**)())(*param_1 + 0x30))();
  return;
}

