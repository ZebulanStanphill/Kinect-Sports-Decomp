unsigned __int64 fn_823AB160(int *param_1,unsigned __int64 param_2,unsigned __int64 param_3,int param_4)

{
  int iVar2;
  unsigned __int64 uVar1;
  
  iVar2 = (*(int (**)())(*param_1 + 0x84))(param_1,param_3);
  if (iVar2 == 0) {
    uVar1 = 1;
  }
  else {
    iVar2 = (*(int (**)())(*param_1 + 0x7c))(param_1,param_3);
    if ((param_4 != iVar2) && (iVar2 = (*(int (**)())(*param_1 + 0x6c))(param_1,param_3), iVar2 == 0))
    {
      param_1[0xc] = 1;
    }
    uVar1 = 0;
  }
  return uVar1;
}

