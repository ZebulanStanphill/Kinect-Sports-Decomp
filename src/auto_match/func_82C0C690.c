int fn_82C0C690(int *param_1)

{
  int iVar2;
  int uVar1;
  
  (*(int (**)())(*param_1 + 0xc))();
  iVar2 = (*(int (**)())(*param_1 + 0xf4))(param_1);
  if ((iVar2 == 5) && (iVar2 = (*(int (**)())(*param_1 + 0xf8))(param_1), iVar2 == 5)) {
    uVar1 = (*(int (**)())(*(int *)param_1[0xb] + 0x68))(param_1[0xb]);
    (*(int (**)())(*param_1 + 0x120))(param_1,1);
    (*(int (**)())(*param_1 + 0x124))(param_1,1);
    (*(int (**)())(*param_1 + 0xc4))(param_1);
    (*(int (**)())(*param_1 + 200))(param_1);
    (*(int (**)())(*param_1 + 0xcc))(param_1);
    (*(int (**)())(*param_1 + 0xd0))(param_1);
  }
  else {
    uVar1 = 0x80004005;
  }
  (*(int (**)())(*param_1 + 0x14))(param_1);
  return uVar1;
}

