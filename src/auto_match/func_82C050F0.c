void fn_82C050F0(int *param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4,unsigned __int64 param_5
                  ,unsigned __int64 param_6,unsigned __int64 param_7,unsigned __int64 param_8)

{
  int iVar1;
  
  iVar1 = (*(int (**)())(*param_1 + 0x30))();
  if (iVar1 >= 0) {
    param_1[0xb] = param_2;
    *(unsigned __int64 *)(param_1 + 0xe) = param_3;
    *(unsigned __int64 *)(param_1 + 0x16) = param_3;
    param_1[0x1e] = param_1[0x1e] | 4;
    *(unsigned __int64 *)(param_1 + 0x10) = param_4;
    (*(int (**)())(*param_1 + 0x74))(param_1,param_5,param_6,param_7,param_8);
  }
  return;
}

