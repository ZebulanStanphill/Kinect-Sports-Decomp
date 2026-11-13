unsigned __int64 fn_829E90F0(int param_1,unsigned int *param_2)

{
  unsigned __int64 uVar1;
  
  if (param_2 == (unsigned int *)0x0) {
    return 0xffffffff80070057;
  }
  *param_2 = 0;
  if (*(int **)(param_1 + 0x20) == (int *)0x0) {
    return 0xffffffff80004005;
  }
                    /* WARNING: Could not recover jumptable at 0x829e9134. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(int (***)())(**(int **)(param_1 + 0x20) + 4))();
  return uVar1;
}

