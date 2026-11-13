extern int fn_8302BBA8();


void fn_8303CAB8(unsigned __int64 param_1,unsigned __int64 param_2,int *param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5)

{
  int iVar1;
  
  iVar1 = *param_3;
  fn_8302BBA8();
  (**(int (***)())(iVar1 + 0xac))(param_1,param_3,param_4,param_5);
  return;
}

