extern int fn_82CE9108();
extern int fn_82D81950();
extern int fn_82D82F80();


void fn_82D842D0(unsigned __int64 param_1,unsigned __int64 param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = fn_82D82F80();
  if (iVar1 == 0) {
    (*(int (**)())(*param_3 + 0xc))(param_3,param_2,0xb);
    fn_82CE9108(param_2);
    (*(int (**)())(*param_3 + 0x10))(param_3);
    fn_82D81950(param_1,param_2,param_3);
  }
  return;
}

