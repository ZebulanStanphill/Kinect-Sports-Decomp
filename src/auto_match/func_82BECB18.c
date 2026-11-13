extern int fn_82BF6B38();


unsigned __int64 fn_82BECB18(int param_1,int *param_2)

{
  int iVar2;
  unsigned __int64 uVar1;
  
  if (((*(int *)(param_1 + 0x50) == 2) || (param_2 == (int *)0x0)) ||
     (iVar2 = fn_82BF6B38(param_1 + 0x2c), iVar2 == 0)) {
    uVar1 = 0;
  }
  else {
    if (*(unsigned int *)(param_1 + 0x3c) == 1) {
      (*(int (**)())(*param_2 + 4))(param_2);
    }
    uVar1 = 1;
  }
  return uVar1;
}

