int fn_826F5FB0(int param_1)

{
  int uVar1;
  
  if (*(int **)(param_1 + 0x68) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x826f5fcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(int (**)())(**(int **)(param_1 + 0x68) + 0x118))(*(int **)(param_1 + 0x68));
    return uVar1;
  }
  return 0;
}

