void fn_82C11C98(int param_1,unsigned int *param_2)

{
  *param_2 = 0;
                    /* WARNING: Could not recover jumptable at 0x82c11cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(int (**)())(*(int *)(param_1 + 4) + 0x1c))(*(int *)(param_1 + 4));
  return;
}

