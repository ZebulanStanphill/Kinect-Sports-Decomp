void fn_826F5DC8(int *param_1,int param_2)

{
  param_1[0x31] = param_2;
                    /* WARNING: Could not recover jumptable at 0x826f5ddc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(int (**)())(*param_1 + 100))(param_1,param_1 + 0x1e);
  return;
}

