extern int fn_82CE5410();
extern int fn_82CEA160();


void fn_82E16EA8(__int64 self,unsigned __int64 param_2,unsigned __int64 param_3)

{
  int iVar1;
  
  iVar1 = fn_82CE5410();
  fn_82CEA160(self + 0x28,*(unsigned int *)(iVar1 + 0x10),param_2,param_3);
  return;
}

