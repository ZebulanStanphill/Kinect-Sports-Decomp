void fn_8232BCF0(int param_1)

{
  unsigned int uVar1;
  
  uVar1 = *(unsigned int *)(param_1 + -0x4c);
  *(unsigned int *)(param_1 + -0x4c) = 0;
                    /* WARNING: Could not recover jumptable at 0x8232bd14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(int (**)())(*(int *)(param_1 + -0x54) + 0x14))(param_1 + -0x54,uVar1,0);
  return;
}

