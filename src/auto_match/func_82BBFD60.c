void fn_82BBFD60(unsigned int *param_1)

{
  *(unsigned int *)(param_1[2] + 4) = param_1[1];
  *(unsigned int *)(param_1[1] + 8) = param_1[2];
                    /* WARNING: Could not recover jumptable at 0x82bbfd88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(int (**)())*param_1)(param_1,1);
  return;
}

