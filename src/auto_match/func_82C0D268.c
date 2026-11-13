int fn_82C0D268(int *param_1)

{
  int iVar1;
  int uVar2;
  
  uVar2 = 0;
  iVar1 = (*(int (**)())(*param_1 + 0xf4))(param_1);
  if ((iVar1 != 1) || (iVar1 = (*(int (**)())(*param_1 + 0xf8))(param_1), iVar1 != 1)) {
    (*(int (**)())(*param_1 + 0x60))(param_1);
    (*(int (**)())(*param_1 + 0xb4))(param_1);
    (*(int (**)())(*param_1 + 0xb8))(param_1);
    (*(int (**)())(*param_1 + 0xbc))(param_1);
    (*(int (**)())(*param_1 + 0xc0))(param_1);
    (*(int (**)())(*param_1 + 0xc))(param_1);
    uVar2 = (*(int (**)())(*(int *)param_1[0xb] + 0x54))(param_1[0xb]);
    (*(int (**)())(*param_1 + 0x14))(param_1);
    if ((int)uVar2 < 0) {
      return uVar2;
    }
  }
  (*(int (**)())(*param_1 + 0xc))(param_1);
  (*(int (**)())(*param_1 + 0x120))(param_1,-1);
  (*(int (**)())(*param_1 + 0x124))(param_1,-1);
  (*(int (**)())(*param_1 + 0x108))(param_1,1);
  (*(int (**)())(*param_1 + 0x10c))(param_1,1);
  { int *q = param_1+0x3a;
  q[3] = 0;
  param_1[0x3e] = 0;
  q[5] = 0;
  param_1[0x3c] = 1;
  q[0] = 0;
  param_1[0x3b] = 0;
  q[6] = 0;
  }
  (*(int (**)())(*param_1 + 0xe4))(param_1);
  (*(int (**)())(*param_1 + 0xe8))(param_1);
  (*(int (**)())(*param_1 + 0xec))(param_1);
  (*(int (**)())(*param_1 + 0xf0))(param_1);
  (*(int (**)())(*param_1 + 0x14))(param_1);
  return uVar2;
}

