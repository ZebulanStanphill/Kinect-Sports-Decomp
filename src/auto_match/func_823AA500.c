extern unsigned int ltcg_pool_0_0f;


void fn_823AA500(int *param_1,unsigned __int64 param_2)

{
  int iVar1;
  
  iVar1 = (**(int (***)())(*param_1 + 0x10))();
  param_1[0x14] = iVar1;
  iVar1 = (**(int (***)())(*param_1 + 4))(param_1);
  param_1[0x13] = iVar1;
  param_1[8] = 0;
  param_1[0xc] = 0;
  iVar1 = ltcg_pool_0_0f;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0x16] = iVar1;
  param_1[0x10] = 0;
  param_1[0x12] = 0;
  param_1[6] = param_1[6] + 1;
  param_1[0xf] = 8;
  param_1[0x11] = 8;
  param_1[0x15] = 9;
  iVar1 = (**(int (***)())(*param_1 + 4))(param_1);
  (**(int (***)())(*param_1 + 0x9c))(param_1,param_2,iVar1 == 0,8);
  return;
}

