int fn_8269AA98(int param_1)

{
  int uVar1;
  
  if (*(int **)(param_1 + 0x20) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x8269aab4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(int (**)())(**(int **)(param_1 + 0x20) + 0x40))(*(int **)(param_1 + 0x20));
    return uVar1;
  }
  return 0;
}

