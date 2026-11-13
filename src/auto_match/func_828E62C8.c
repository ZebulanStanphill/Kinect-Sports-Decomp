void fn_828E62C8(int param_1)

{
  unsigned int *puVar1;
  
  puVar1 = *(unsigned int **)(param_1 + 0xc);
  if (puVar1 == (unsigned int *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x828e62e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(int (**)())*puVar1)(puVar1,1);
  return;
}

