extern int fn_82A76730();


unsigned __int64 fn_82A768D0(int param_1)

{
  unsigned int uVar1;
  
  *(unsigned int *)(param_1 + 0x8c) = 0;
  *(unsigned int *)(param_1 + 0x90) = 0;
  if (*(int *)(param_1 + 0x94) != 0) {
    uVar1 = (*(int (**)())(**(int **)(param_1 + 0x84) + 0x14))
                      (*(int **)(param_1 + 0x84),*(unsigned int *)(param_1 + 0x80));
    *(unsigned int *)(param_1 + 0x88) = uVar1;
  }
  (*(int (**)())(**(int **)(param_1 + 8) + 0x28))
            (*(int **)(param_1 + 8),1,(unsigned __int64)*(unsigned int *)(param_1 + 0x78) + 0x38,1,param_1 + 0x88,1
            );
  fn_82A76730(param_1);
  return 0;
}

