void fn_82EAA290(int param_1,__int64 param_2,unsigned __int64 param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = (**(int (***)())(param_1 + 0x1be0))(param_2,param_3);
  iVar2 = (**(int (***)())(param_1 + 0x1be0))(param_2 + 8,param_3);
  param_2 = (param_3 & 0x1fffffff) * 8 + param_2;
  iVar3 = (**(int (***)())(param_1 + 0x1be0))(param_2,param_3);
  iVar4 = (**(int (***)())(param_1 + 0x1be0))(param_2 + 8,param_3);
  *param_4 = iVar4 + iVar3 + iVar2 + iVar1;
  return;
}

