void fn_8232BD18(int param_1)

{
  unsigned int uVar1;
  
  uVar1 = *(unsigned int *)(param_1 + -0x4c);
  *(unsigned int *)(param_1 + -0x4c) = 1;
                    /* WARNING: Could not recover jumptable at 0x8232bd3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(int (**)())(*(int *)(param_1 + -0x54) + 0x14))(param_1 + -0x54,uVar1,1);
  return;
}

