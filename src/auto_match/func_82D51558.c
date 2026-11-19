extern int fn_82D51E18();


void fn_82D51558(int self,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  int *piVar1;
  
  piVar1 = (int *)fn_82D51E18(*(unsigned int *)(self + 0x18));
  (*(int (**)())(*piVar1 + 0x24))(piVar1,param_2,param_3,param_4);
  return;
}

