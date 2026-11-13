unsigned __int64 fn_82FAECA8(int *param_1)

{
  int iVar1;
  
  iVar1 = param_1[0x20] - param_1[0x1f];
  while (iVar1 >> 3 != 0) {
    (**(int (***)())(*param_1 + 0x68))(param_1,*(unsigned int *)param_1[0x1f]);
    iVar1 = param_1[0x20] - param_1[0x1f];
  }
  return 1;
}

