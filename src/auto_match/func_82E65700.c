int fn_82E65700(int param_1,unsigned int param_2)

{
  int uVar1;
  
  if (param_2 > *(unsigned int *)(param_1 + 0x10)) {
    return 0x80070057;
  }
                    /* WARNING: Could not recover jumptable at 0x82e65734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(int (**)())(**(int **)(param_1 + 8) + 0x18))
                    (*(int **)(param_1 + 8),*(unsigned int *)(param_1 + 0x14) + param_2);
  return uVar1;
}

