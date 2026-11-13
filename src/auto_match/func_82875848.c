void fn_82875848(int param_1,int *param_2)

{
  if (*(int **)(param_1 + 0x30) == param_2) {
    return;
  }
  *(int **)(param_1 + 0x30) = param_2;
                    /* WARNING: Could not recover jumptable at 0x82875870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(int (**)())(*param_2 + 8))(param_2,param_1);
  return;
}

