int fn_8302C718(int param_1)

{
  int uVar1;
  
  if (*(int **)(param_1 + 0x88) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x8302c734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(int (**)())(**(int **)(param_1 + 0x88) + 0xc))(*(int **)(param_1 + 0x88));
    return uVar1;
  }
  return 0;
}

