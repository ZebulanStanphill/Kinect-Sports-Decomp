unsigned __int64 fn_82C0C5C0(int *param_1)

{
  int iVar1;
  unsigned __int64 uVar2;
  
  (*(int (**)())(*param_1 + 0xc))();
  iVar1 = (*(int (**)())(*param_1 + 0xf4))(param_1);
  if ((iVar1 == 3) && (iVar1 = (*(int (**)())(*param_1 + 0xf8))(param_1), iVar1 == 3)) {
    (*(int (**)())(*param_1 + 0x114))(param_1,1);
    (*(int (**)())(*param_1 + 0x118))(param_1,1);
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff80004005;
  }
  (*(int (**)())(*param_1 + 0x14))(param_1);
  return uVar2;
}

