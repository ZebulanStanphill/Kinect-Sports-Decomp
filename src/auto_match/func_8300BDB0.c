unsigned __int64 fn_8300BDB0(int *param_1)

{
  int iVar1;
  
  iVar1 = param_1[0x13] - param_1[0x12];
  while (iVar1 >> 3 != 0) {
    (**(int (***)())(*param_1 + 0x68))(param_1,*(unsigned int *)param_1[0x12]);
    iVar1 = param_1[0x13] - param_1[0x12];
  }
  return 1;
}

