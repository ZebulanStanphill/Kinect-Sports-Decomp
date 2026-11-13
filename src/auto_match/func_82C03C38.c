void fn_82C03C38(int *param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5,unsigned __int64 param_6,unsigned __int64 param_7)

{
  int iVar1;
  
  iVar1 = (*(int (**)())(*param_1 + 0x28))();
  if ((iVar1 >= 0) &&
     (iVar1 = (*(int (**)())(*param_1 + 0x30))(param_1,param_2,param_4,param_6), iVar1 >= 0)) {
    (*(int (**)())(*param_1 + 0x34))(param_1,param_3,param_5,param_7);
  }
  return;
}

