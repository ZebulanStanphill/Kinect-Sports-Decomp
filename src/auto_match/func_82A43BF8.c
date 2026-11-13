void fn_82A43BF8(int param_1)

{
  unsigned int uVar1;
  
  if (*(unsigned int **)(param_1 + 0x38) == (unsigned int *)0x0) {
    uVar1 = *(unsigned int *)(param_1 + 0x40);
  }
  else {
    uVar1 = **(unsigned int **)(param_1 + 0x38);
  }
                    /* WARNING: Could not recover jumptable at 0x82a43c2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(int (***)())(*(int *)(param_1 + 4) + 0x60))
            ((int *)(param_1 + 4),uVar1,*(unsigned int *)(param_1 + 0x50),0);
  return;
}

