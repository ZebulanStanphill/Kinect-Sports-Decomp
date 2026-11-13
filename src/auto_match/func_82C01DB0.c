int fn_82C01DB0(unsigned int *param_1)

{
  int uVar1;
  
  uVar1 = 0;
  if ((param_1[0xd] != 0) &&
     (uVar1 = (*(int (**)())(*(int *)param_1[0xd] + 0x38))((int *)param_1[0xd],1), uVar1 >= 0)) {
    uVar1 = (*(int (**)())(*param_1 + 0x44))(param_1,param_1[0xd]);
  }
  return uVar1;
}

