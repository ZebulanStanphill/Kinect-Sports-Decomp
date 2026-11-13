int fn_82CF9928(int param_1,int param_2,int *param_3)

{
  int uVar1;
  
  if ((*(unsigned int *)(param_1 + 0xc) != 0) &&
     ((unsigned int)(*(int *)(param_1 + 8) + param_2) > *(unsigned int *)(param_1 + 0xc))) {
    return 0;
  }
  *param_3 = param_2;
  *(int *)(param_1 + 8) = param_2 + *(int *)(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x82cf9970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(int (**)())(**(int **)(param_1 + 0x10) + 4))(*(int **)(param_1 + 0x10));
  return uVar1;
}

